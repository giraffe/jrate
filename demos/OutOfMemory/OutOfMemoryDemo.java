import javax.realtime.CTMemory;
import javax.realtime.RealtimeThread;
import javax.realtime.MemoryArea;

/**
 * This demo shows what is the suggested programming model to check
 * whether or not a ScopedMemory runs out of memory while a logic is
 * running within it. As show in this demo, the preferred way is to
 * check for the <code>OutOfMemoryError</code> around the
 * <code>MemoryArea.enter</code> method.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class OutOfMemoryDemo {

    interface TestLogic extends Runnable {
        public void setN(int n);
        public int  getN();
    };
    
    public static void main(String[] args) {
        Runnable mainLogic = new Runnable() {
                public void run() {
                    TestLogic testLogic = new TestLogic() {
                            private int N; 
                            public void run() {
                                System.out.println(">> Trying to alloc: " + N);
                                byte[] vec;
                                vec = new byte[N];
                                System.out.println(">> Allocated: " + vec.length +
                                                   "\t In: " + MemoryArea.getMemoryArea(vec));
                            }
                            
                            public void setN(int N) { this.N = N; }
                            public int getN() { return N; }
                        };

                    CTMemory ma = new CTMemory(4096, 4096);

                    int N = 8192;
                    int K = 1024;
                    ((TestLogic)testLogic).setN(N);
                    boolean allocated = false;
                    while (!allocated) {
                        try {
                            ma.enter(testLogic);
                            allocated = true;
                        } catch (OutOfMemoryError e) {
                            System.out.println("-------------------------" +
                                               "-------------------------" +
                                               "-------------------------");
                            e.printStackTrace();
                            System.out.println("-------------------------" +
                                               "-------------------------" +
                                               "-------------------------");
                            N -= K;
                            testLogic.setN(N);
                        }
                    }
                }
            };

        RealtimeThread rtThread = new RealtimeThread(null,
                                                     null,
                                                     null,
                                                     null,
                                                     null,
                                                     mainLogic);
        rtThread.start();
        try {
            rtThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
