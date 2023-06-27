#include <iostream>

class Vehicle
{
public: 
    std::string getModelName() {
        return modelName;
    }

    void setModelName(std::string m) {
        modelName = m;
    }

    void run() {
        std::cout << "A vehicle is running...!\n";
    }

private:
    std::string modelName;
};

class Taxi : public Vehicle
{
public:
    void run() {
        Vehicle::run();
        std::cout << "It's a taxi!\n";
    }

    void run(int km) // function overloading 
    {
        kmCounter = km;
    }

    int calculateFee() {
        return kmCounter * 9000;
    }

private:
    int kmCounter;
};

class Truck : public Vehicle
{
public:
    void run() {
        Vehicle::run();
        std::cout << "It's a truck!\n";
    }
private:
};

int main()
{
    Taxi* taxi = new Taxi;
    taxi->run();
    taxi->run(15);
    std::cout << taxi->calculateFee() << " VND\n";

    Truck* truck = new Truck;
    truck->run();
}
