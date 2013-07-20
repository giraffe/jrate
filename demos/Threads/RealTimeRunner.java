import javax.realtime.*;

/**
 * This test shows how realtime threads are scheduled under the
 * default priority scheduler. The test works like this:
 *
 *   Each instance of the class Runner, runs for a 10ms and then
 *   creates a child thread that has priority higher of 1. Because the
 *   scheduler is priority based, the father thread is preemped, and
 *   will be able to start execting again once all its offspring have
 *   completed. Please take some time to compare the different
 *   behaviour out this test when compared to the Runner.java test.
 *
 * @author <a href="mailto:corsaro@doc.ece.uci.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class RealTimeRunner implements Runnable {

    private int priority;
    private int childNum;
    private RealtimeThread rtThread;
    
    public RealTimeRunner(int priority, int childNum) {
        this.priority = priority;
        this.childNum = childNum;
        
        this.rtThread = new RealtimeThread(this);
        PriorityParameters prioParams = new PriorityParameters(this.priority);
        this.rtThread.setSchedulingParameters(prioParams);
    }

    
    public void run() {
        System.out.print("\n");
        RealtimeClock clock = RealtimeClock.instance();
        RelativeTime busyWaitTime = new RelativeTime(0, 10000000); // 10 ms 
        AbsoluteTime endTime = (clock.getTime()).add(busyWaitTime);

        AbsoluteTime now = new AbsoluteTime();

        while (now.compareTo(endTime) == -1) {
            clock.getTime(now);
            // System.out.println("Now: " + now + "\t" + " Target: " + endTime);
        }
        System.out.print("[" + this.priority + "]");
        
        // Create another RealTimeRunner now.
        RealTimeRunner child;
        if (this.childNum > 0) {
            child = new RealTimeRunner(this.priority + 1, this.childNum -1);
            child.start();
        }
        
        for (int i = 0; i < 9; i++) {
            clock.getTime(now);
            while (now.compareTo(endTime) == -1) {
                clock.getTime(now);
            }
            
            System.out.print("[" + this.priority + "]");
        }
        System.out.print("\n");
    }
        

    public void start() {
        this.rtThread.start();
    }

    public static void main(String[] args) {
        RealTimeRunner runner = new RealTimeRunner(10, 5);
        runner.start();
    }
}
