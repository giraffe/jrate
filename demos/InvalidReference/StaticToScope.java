import java.util.Vector;
import javax.realtime.*;

public class StaticToScope {

    private static Integer intValue;
    
    static void setIntValue(Integer value) {
        intValue = value;
    }

    public static void main(String[] args) {
        final StaticToScope sts = new StaticToScope();
        
        final CTMemory ma = new CTMemory(1024 * 1024, 1024 * 1024);
        
        final Runnable logic = new Runnable() {
                public void run() {
                    setIntValue(new Integer(10));
                }
            };
        
        final Runnable launcher = new Runnable () {
                public void run() {
                    ma.enter(logic);
                }
            };

        // This will work fine.
        logic.run();

        // This will throw an exception
        RealtimeThread rtThread = new RealtimeThread(launcher);
        rtThread.start();
    }
}
