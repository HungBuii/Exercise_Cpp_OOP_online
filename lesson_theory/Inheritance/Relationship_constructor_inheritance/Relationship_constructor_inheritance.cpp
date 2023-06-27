#include <iostream>

class Vehicle
{
public:

    /*Vehicle() { // cach 1
        std::cout << "Created a vehicle!\n";
    }*/

    Vehicle(std::string name) {
        modelName = name;
        std::cout << "Created a vehicle with name " << modelName << "\n";
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

    //Taxi() {
    //    // ngam hieu se khoi tao constructor o super class truoc va cap nhat tat ca cac method hay properties cua super class 
    //    // do roi mang tat ca chung boi dap them cho sub class de sub class duoc ke thua tat ca cua super class
    //    // Vehicle::Vehicle(); // ngam hieu no da tao ra ntn 
    //    std::cout << "Created a taxi!\n";
    //}

    Taxi(std::string name) : Vehicle(name) // name(Taxi) == name(Vehicle), Vehicle(name) == Vehicle(std::string name)
    {
        std::cout << "Created a taxi!\n";
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
    /*Taxi* taxi = new Taxi();*/
    Taxi* taxi1 = new Taxi("Kia Morning");
    Taxi* taxi2 = new Taxi("Vinfast VF8");


    //Truck* truck = new Truck;
    
}