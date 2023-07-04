#include <iostream>
#include <string>
#include <vector>
    
class Engine {};

class Vehicle
{
public:
    std::string getModelName() {
        return modelName;
    }

    void setModelName(std::string name) {
        modelName = name;
    }

    virtual void run() {
        std::cout << "A vehicle is running...!\n";
    }

private:
    std::string modelName;
    int manufactureYear;
    Engine engine;
};

class Taxi : public Vehicle 
{
public:
    void run() override {

    }
};

class Person
{
private:
    std::vector<Vehicle*> vehicleList;
};

class Agency
{
private:
    std::vector<Vehicle*> vehicleList;
};

class Checker
{
public: 
    bool check(Vehicle* vehicle) {

        return true;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

