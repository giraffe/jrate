import javax.realtime.*;

/**
 * This test shows how realtime threads are scheduled under the
 * default priority scheduler.
 *
 * @author <a href="mailto:corsaro@doc.ece.uci.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class Runner implements Runnable {

    private int priority;
    private int childNum;
    private Thread thread;
    
    public Runner(int priority, int childNum) {
        this.priority = priority;
        this.childNum = childNum;
        
        this.thread = new Thread(this);
    }

    
    public void run() {
        System.out.print("\n");
        RealtimeClock clock = RealtimeClock.instance();
        
        RelativeTime busyWaitTime = new RelativeTime(0, 10000000); // 10 ms 
        AbsoluteTime endTime = (clock.getTime()).add(busyWaitTime);

        AbsoluteTime now = new AbsoluteTime();

        while (now.compareTo(endTime) == -1) {
                clock.getTime(now);
            }
        System.out.print("[" + this.priority + "]");

        // Create another Runner now.
        Runner child;
        if (this.childNum > 0) {
            child = new Runner(this.priority + 1, this.childNum -1);
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
        this.thread.start();
    }

    public static void main(String[] args) {
        Runner runner = new Runner(10, 5);
        runner.start();
    }
}
