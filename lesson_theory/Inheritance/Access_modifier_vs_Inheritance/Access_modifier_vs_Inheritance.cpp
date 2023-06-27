#include <iostream>

class Vehicle
{
public:
    std::string getModelName() {
        return modelName;
    }

    void setModelName(std::string name) {
        modelName = name;
    }

protected: // co the truy cap trong cac sub class, ben ngoai khong the truy cap duoc
    void run() {
        std::cout << "A vehicle is running...!\n";
    }

private: // sub class va ben ngoai khong the truy cap duoc
    std::string modelName;
};

class Taxi : public Vehicle
{
public:
    void start() {
        std::cout << "Start.... Ready to run!\n";
        run();
    }
};

class Truck : public Vehicle
{

};

int main()
{
    Taxi* taxi = new Taxi;
    taxi->start();

    Truck* truck = new Truck;
    
}