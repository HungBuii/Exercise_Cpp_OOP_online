#include <iostream>

// Interface la 1 Abstract class dac biet khi tat ca cac function trong class la pure virtual function
class Vehicle // <- Interface (Special Abstract class)
{
public:

    // constructor khong the them virtual

    virtual std::string getModelName() = 0;

    virtual void setModelName(std::string name) = 0;

    virtual void run() = 0;

protected:
    std::string modelName;
};

class Car : public Vehicle
{
public:

    Car() {

    }

    std::string getModelName() {
        return modelName;
    }

    void setModelName(std::string name) {
        modelName = name;
    }

    void run() override {
        std::cout << "A car is running...!\n";
    }
};

class Truck : public Vehicle
{
public:

    Truck() {

    }

    void run() override {
        std::cout << "A truck is running...!\n";
    }

private:
    int expirationYear;
};


int main()
{
    Car* car = new Car();
}
