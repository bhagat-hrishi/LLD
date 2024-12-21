#include <iostream>
#include <memory> // For smart pointers
using namespace std;

class PaymentFlow
{
public:
    virtual ~PaymentFlow() = default; // Virtual destructor for proper cleanup
    virtual void validateRequest() = 0;
    virtual void calculateFees() = 0;
    virtual void debitAmount() = 0;
    virtual void creditAmount() = 0;

    void sendMoney()
    {
        // Template method defining the steps
        validateRequest();
        debitAmount();
        calculateFees();
        creditAmount();
    }
};

class PaymentToMerchantFlow : public PaymentFlow
{
public:
    void validateRequest() override
    {
        // Specific validation for PaymentToMerchantFlow
        cout << "Validate logic of PaymentToMerchantFlow" << endl;
    }

    void debitAmount() override
    {
        // Debit the amount
        cout << "Debit the Amount logic of PaymentToMerchantFlow" << endl;
    }

    void calculateFees() override
    {
        // Specific fee computation logic for PaymentToMerchantFlow
        cout << "2% fees charged" << endl;
    }

    void creditAmount() override
    {
        // Credit amount logic
        cout << "Credit the remaining amount" << endl;
    }
};

class PaymentToFriend : public PaymentFlow
{
public:
    void validateRequest() override
    {
        // Specific validation for PaymentToFriendFlow
        cout << "Validate logic of PaymentToFriendFlow" << endl;
    }

    void debitAmount() override
    {
        // Debit the amount
        cout << "Debit the Amount logic of PaymentToFriendFlow" << endl;
    }

    void calculateFees() override
    {
        // Specific fee computation logic for PaymentToFriendFlow
        cout << "0% fees charged" << endl;
    }

    void creditAmount() override
    {
        // Credit amount logic
        cout << "Credit full amount" << endl;
    }
};

int main()
{
    cout << "Processing Payment to Friend:" << endl;
    unique_ptr<PaymentFlow> payToFriend = make_unique<PaymentToFriend>();
    payToFriend->sendMoney();

    cout << "______________________\n\n";

    cout << "Processing Payment to Merchant:" << endl;
    unique_ptr<PaymentFlow> payToMerchant = make_unique<PaymentToMerchantFlow>();
    payToMerchant->sendMoney();

    return 0;
}
