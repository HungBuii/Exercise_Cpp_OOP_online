#include <iostream>
#include <vector>

class Order
{
public: 
    void calcTotalPrice() { }
    
    std::string getDate() { return date; }

    std::string getStatus() { return status; }

    void orderDetail(OrderDetail* orderDetail) { }

    void customerInfo(Customer* customer) { }

private:
    std::string date;
    std::string status;
};

class Customer
{
public:

private:
    std::string name;
    std::string address;
};

class OrderDetail
{
public: 
    void calcPrice() { }

    void itemInfo(Item* item) { }

private:
    int quantity;
};

class Item
{
public:
    float getPrice() { }

    bool isInStock() { }

private:
    std::string itemID;
    float price;
    std::string description;
};

class Payment
{
public: 
    virtual void authorized() = 0;

private:
    float amount;

};

class Cash : public Payment
{
public: 

private:
    float cashTendered;

};

class Check : public Payment
{
public: 
    void authorized() override { }

private:
    std::string name;
    std::string bankId;

};

class Credit : public Payment
{
public: 
    void authorized() override { }

private: 
    std::string number;
    std::string type;
    std::string expiredDate;

};

int main()
{

}

