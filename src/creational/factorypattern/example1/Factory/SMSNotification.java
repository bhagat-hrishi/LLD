package creational.factorypattern.example1.Factory;

public class SMSNotification implements Notification {

	@Override
	public void notifyUser() {
		System.out.println("Sending SMS Notification");

	}

}
