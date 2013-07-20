package gnu.gcj.runtime;

import gnu.gcj.RawData;

/**
 * This class encapsulates a raw address into a Java object.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class AddressHolder {

    private RawData address;

    public AddressHolder() { }

    public AddressHolder(RawData address) {
        this.address = address;
    }

    public void setAddress(RawData address) {
        this.address = address;
    }

    public RawData getAddress() {
        return this.address;
    }
    
    public boolean equals(AddressHolder obj) {
        return obj.address == this.address;
    }

    public boolean equals(Object obj) {
        boolean retVal = false;
        try {
            AddressHolder tmp = (AddressHolder)obj;
            retVal = this.equals(tmp);
        } catch (ClassCastException e) { }
        return retVal;
    }
    
    public int  hashCode() {
        return System.identityHashCode(this.address);
    }
}
