#include <iostream>

class Vehicle
{
public:

    /*Vehicle() { 
        std::cout << "Created a vehicle!\n";
    }*/

    ~Vehicle() {
        std::cout << "Deleted a vehicle!\n";
    }

    std::string getModelName() {
        return modelName;
    }

    void setModelName(std::string m) {
        modelName = m;
    }

private:
    std::string modelName;
};

class Taxi : public Vehicle
{
public:

    ~Taxi()
    {
        std::cout << "Deleted a taxi\n";
    }

    void start() {
        std::cout << "Start... Ready to run!\n";
    }
};

class Truck : public Vehicle
{

};

int main()
{
    Taxi* taxi = new Taxi();
    delete taxi;

    /*Truck* truck = new Truck;*/

}