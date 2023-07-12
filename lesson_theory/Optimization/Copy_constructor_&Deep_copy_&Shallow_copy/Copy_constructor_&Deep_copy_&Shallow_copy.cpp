#include <iostream>
#include <string>
#include <vector>

class Person 
{
public:
    Person(std::string name) : fullname(name) { }

    void setFullname(std::string name) { fullname = name; }

    std::string getFullname() { return fullname; }

private:
    std::string fullname;
};

class Vehicle
{
public:
    Vehicle(std::string name) : modelName(name) 
    {
        //std::cout << "Create a vehicle " << name << "\n";
    }

    Vehicle(Vehicle& otherVehicle /* co the dung Vehicle* otherVehicle */) // Copy constructor.
                                                                             // Neu khong goi copy constructor thi se mac dinh la co copy default constructor,
                                                                             // copy default constructor se tu dong copy tat ca cac thuoc tinh co trong constructor cu.
    {
        std::cout << "Clone a vehicle " << otherVehicle.getModelName() << "\n";
        modelName = otherVehicle.getModelName(); // shallow copy(bien tinh)
        owner = new Person(otherVehicle.getOwner()->getFullname()); // Deep copy(bien dong)
    }

    void setOwner(Person* person) {
        owner = person;
    }

    Person* getOwner() { return owner; }

    std::string getModelName() { return modelName; }

    virtual void run() {
        std::cout << modelName << " is running...!\n";
    }

protected:
    std::string modelName;
    Person* owner;
};

int main()
{
    Person* person = new Person("Hung Bui");
    Vehicle* vehicle1 = new Vehicle("Kia Morning");
    vehicle1->setOwner(person);

    Vehicle* vehicle2 = new Vehicle(*vehicle1); // copy constructor
    vehicle2->getOwner()->setFullname("Dang Chung");
    std::cout << vehicle2->getOwner()->getFullname() << "\n";
    std::cout << vehicle1->getOwner()->getFullname() << "\n";

    /*vehicle1->run();
    vehicle2->run();*/
}

