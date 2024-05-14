package behavioral.templatemethodpattern;

public class PaymentToMerchentFlow extends PaymentFlow{
    @Override
    public void validateRequest() {
        //specific validation for PayToFriend flow
        System.out.println("Validate logic of PayToMerchantFlow");
    }
    @Override
    public void debitAmount() {
        //debit the amount
        System.out.println("Debit the Amount logic of PayToMerchant Flow");
    }

    @Override
    public void calculateFees() {
        //specific Fee computation logic for PayToFriend flow
        System.out.println("2% fees charged");
    }

    @Override
    public void creditAmount() {
        //credit amount logic
        System.out.println("Credit the remaining amount");
    }
}
