import java.util.Vector;
import javax.realtime.*;

public class InvalidFieldSet {

    private Integer intValue = new Integer(0);
    private Integer intValue2 = new Integer(0);
    private Integer intValue3 = new Integer(0);
    public int i;
    
    public void setIntValue(Integer value) {
        intValue = value;
    }

    public static void main(String[] args) {
        final InvalidFieldSet sts = new InvalidFieldSet();
        
        final CTMemory ma = new CTMemory(1024 * 1024, 1024 * 1024);
        
        final Runnable logic = new Runnable() {
                public void run() {
                    sts.setIntValue(new Integer(10));
                    sts.i = 10;
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
