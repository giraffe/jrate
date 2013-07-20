import java.util.Vector;
import javax.realtime.*;

public class HeapToScope {

    public static void main(String[] args) {
        
        final Object vec[] = new Object[10];
        // final Vector vec = new Vector(10);
        final CTMemory ma = new CTMemory(1024 * 1024, 1024 * 1024);
        
        final Runnable logic = new Runnable() {
                public void run() {
                    for (int i = 0; i < 10; i++) 
                        // vec.add(new Integer(i));
                        vec[i] = new Integer(i);

                    
                    for (int i = 0; i < 10; i++) 
                        System.out.print(vec[i] + " ");
                    // System.out.print(vec[i] + " ");

                    System.out.println("");
                }
            };
        
        final Runnable launcher = new Runnable () {
                public void run() {
                    ma.enter(logic);
                }
            };


        // This will throw an exception
        RealtimeThread rtThread = new RealtimeThread(launcher);
        rtThread.start();
    }
}
