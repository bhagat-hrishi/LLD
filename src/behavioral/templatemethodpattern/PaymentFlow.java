package behavioral.templatemethodpattern;

public abstract class PaymentFlow {
    public abstract void validateRequest();
    public abstract void calculateFees();
    public abstract void debitAmount();
    public abstract void creditAmount();

    /*this is Template method: which defines the order of steps to execute the task.
    also we made sendMoney as final . so child class now can override it . they can just use this as it is
    which insure the sequence of steps is maintained
    * */
    public final void sendMoney () {
        //step1
        validateRequest();
        //step2
        debitAmount();
        //step3
        calculateFees();
        //step4
        creditAmount();
    }
}
