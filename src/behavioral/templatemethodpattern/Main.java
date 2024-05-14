package behavioral.templatemethodpattern;

public class Main {
    public static void main(String[] args) {
        PaymentFlow paytoFriend = new PayToFriend();
        paytoFriend.sendMoney();

        System.out.println("\n***************************\n");
        PaymentFlow payToMerchent = new PaymentToMerchentFlow();
        payToMerchent.sendMoney();
    }
}
