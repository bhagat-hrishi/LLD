#include <iostream>
#include <list>
#include <string>
#include <memory> // For smart pointers

using namespace std;

// Interface for the composite pattern
class IBox {
public:
    virtual double calculatePrice() const = 0;
    virtual ~IBox() = default;
};

class CompositeBox : public IBox {
private:
    list<shared_ptr<IBox>> children;

public:
    explicit CompositeBox(const list<shared_ptr<IBox>>& boxes) {
        children.insert(children.end(), boxes.begin(), boxes.end());
    }

    double calculatePrice() const override {
        double sum = 0;
        for (const auto& child : children) {
            sum += child->calculatePrice();
        }
        return sum;
    }
};

class Product : public IBox {
protected:
    string title;
    double price;

public:
    Product(string pTitle, double pPrice) : title(move(pTitle)), price(pPrice) {}

    double getPrice() const {
        return price;
    }

    ~Product() override = default;
};

class Book : public Product {
public:
    Book(string pTitle, double pPrice) : Product(move(pTitle), pPrice) {}

    double calculatePrice() const override {
        return getPrice();
    }
};

class VideoGame : public Product {
public:
    VideoGame(string pTitle, double pPrice) : Product(move(pTitle), pPrice) {}

    double calculatePrice() const override {
        return getPrice();
    }
};

class DeliveryService {
private:
    shared_ptr<IBox> box;

public:
    void setupOrder(const list<shared_ptr<IBox>>& boxes) {
        box = make_shared<CompositeBox>(boxes);
    }

    double calculateOrderPrice() const {
        return box ? box->calculatePrice() : 0.0;
    }
};

int main() {
    DeliveryService deliveryService;

    deliveryService.setupOrder({
        make_shared<CompositeBox>(list<shared_ptr<IBox>>{
            make_shared<VideoGame>("Game 1", 100)
        }),
        make_shared<CompositeBox>(list<shared_ptr<IBox>>{
            make_shared<CompositeBox>(list<shared_ptr<IBox>>{
                make_shared<Book>("Book 1", 100),
                make_shared<Book>("Book 2", 300)
            }),
            make_shared<VideoGame>("Game 2", 400),
            make_shared<VideoGame>("Game 3", 500)
        })
    });

    cout << "Order Price: " << deliveryService.calculateOrderPrice() << endl;

    return 0;
}
