package creational.factorypattern.example1.Factory;

public class EmailNotification implements Notification {

	@Override
	public void notifyUser() {
		System.out.println("Sending Email Notification");

	}

}
