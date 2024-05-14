package behavioral.templatemethodpattern;


public class PayToFriend extends PaymentFlow{
    @Override
    public void validateRequest() {
        //specific validation for PayToFriend flow
        System.out.println("Validate logic of PayToFriend");
    }
    @Override
    public void debitAmount () {
        //debit the amount
        System.out.println("Debit the Amount logic of PayToFriend");
    }
    @Override
    public void calculateFees () {
        //specific Fee computation logic for Pay To Friend flow
        System.out.println("0% fees charged");
    }

    @Override
    public void creditAmount() {
        //credit amount logic
        System.out.println("Credit full amount");
    }
}
