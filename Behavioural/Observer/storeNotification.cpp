#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <memory> // For shared_ptr
using namespace std;

/**
 Store Customer example
 Store Notify respective customers about events like sales or new items.
*/

enum class Event {
    NewItem,
    Sale
};

// Overload operator<< for Event enum
ostream& operator<<(ostream& os, const Event& eventType) {
    switch (eventType) {
        case Event::NewItem:
            os << "NewItem";
            break;
        case Event::Sale:
            os << "Sale";
            break;
        default:
            os << "Unknown Event";
    }
    return os;
}

// Interface for event listeners
class IEventListener {
public:
    virtual void update(Event eventType) = 0;
    virtual ~IEventListener() = default; // Defaulted virtual destructor
};

class EmailMsgListener : public IEventListener {
    string email;

public:
    explicit EmailMsgListener(string email) : email(move(email)) {}

    void update(Event eventType) override {
        // Simulate sending an email
        cout << "Sending email to " << email << " for event " << eventType << endl;
    }
};

class MobileAppListener : public IEventListener {
    string userName;

public:
    explicit MobileAppListener(string userName) : userName(move(userName)) {}

    void update(Event eventType) override {
        // Simulate sending a push notification
        cout << "Sending push notification to " << userName << " for event " << eventType << endl;
    }
};

class NotificationService {
    // Map from Event to listeners
    unordered_map<Event, unordered_set<shared_ptr<IEventListener>>> customers;

public:
    NotificationService() = default;

    void subscribe(Event eventType, const shared_ptr<IEventListener>& listener) {
        customers[eventType].insert(listener);
    }

    void unsubscribe(Event eventType, const shared_ptr<IEventListener>& listener) {
        customers[eventType].erase(listener);
    }

    void notify(Event eventType) {
        for (const auto& customer : customers[eventType]) {
            if (customer) {
                customer->update(eventType);
            }
        }
    }
};

class Store {
    unique_ptr<NotificationService> notificationService;

public:
    Store() : notificationService(make_unique<NotificationService>()) {}

    void newItemPromotion() {
        notificationService->notify(Event::NewItem);
    }

    void salePromotion() {
        notificationService->notify(Event::Sale);
    }

    NotificationService* getNotificationService() {
        return notificationService.get();
    }
};

int main() {
    Store store;

    auto emailListener1 = make_shared<EmailMsgListener>("rohan@gmail.com");
    auto emailListener2 = make_shared<EmailMsgListener>("ram@gmail.com");
    auto mobileListener = make_shared<MobileAppListener>("randomNo");

    store.getNotificationService()->subscribe(Event::Sale, emailListener1);
    store.getNotificationService()->subscribe(Event::Sale, emailListener2);
    store.getNotificationService()->subscribe(Event::NewItem, mobileListener);

    store.newItemPromotion();
    store.salePromotion();

    store.getNotificationService()->unsubscribe(Event::Sale, emailListener1);

    cout << "\nAfter unsubscribing rohan@gmail.com from Sale notifications:\n";
    store.salePromotion();

    return 0;
}
