package creational.factorypattern.example1.client;

import creational.factorypattern.example1.Factory.Notification;
import creational.factorypattern.example1.Factory.NotificationFactory;

public class NotificationService {
	public static void main(String[] args) {
		
		Notification notification = NotificationFactory.createNotification("SMS");
		notification.notifyUser();
		
		notification = NotificationFactory.createNotification("EMAIL");
		notification.notifyUser();
	}
}
