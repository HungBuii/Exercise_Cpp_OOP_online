// ke thua da muc
#include <iostream>

class Vehicle
{
public:

    Vehicle() {
        std::cout << "Create a vehicle!\n";
    }

    std::string getModelName() {
        return modelName;
    }

    void setModelName(std::string name) {
        modelName = name;
    }

    void run() {
        std::cout << "A vehicle is running...!\n";
    }

private:
    std::string modelName;
};

class Car : public Vehicle
{
public:
    Car() {
        std::cout << "Create a car!\n";
    }
};

class Taxi : public Car
{
public:
    Taxi() {
        std::cout << "Create a taxi!\n";
    }

};



int main()
{
    Taxi* taxi = new Taxi;
    

}