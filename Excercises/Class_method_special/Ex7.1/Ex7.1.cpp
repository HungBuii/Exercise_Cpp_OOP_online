#include <iostream>
#include <string>
#include <vector>

class Vehicle
{
public:
    virtual void run() = 0;
};

class Car : public Vehicle
{
public:
    void run() override {
        std::cout << "A car is running...!\n";
    }
};

class Pickup : public Vehicle
{
public:
    void run() override {
        std::cout << "A pickup is running...!\n";
    }
};

class Motorbike : public Vehicle
{
public:
    void run() override {
        std::cout << "A motorbike is running...!\n";
    }
};

class Skateboard : public Vehicle
{
public:
    void run() override {
        std::cout << "A skateboard is running...!\n";
    }
};

class Person
{
public:

    void setVehicle(Vehicle* v) { // chon phuong tien
        vehicle = v;
    }

    void drive() { // chay phuong tien
        vehicle->run();
    }

private:
    Vehicle* vehicle;
};

void solution(Person* person, std::vector<Vehicle*> vehicleList, int numOfDays)
{
    int i = 0;
    for (int j = 0; j < numOfDays; j++) {
        std::cout << "Day " << j + 1 << ": ";
        person->setVehicle(vehicleList[i++]);
        person->drive();

        /*if (i == vehicleList.size()) {
            i = 0;
        }*/

        i = (i == vehicleList.size() ? 0 : i);
    }
}

int main()
{
    std::vector<Vehicle*> vehicleList;
    vehicleList.push_back(new Car());
    vehicleList.push_back(new Motorbike());
    vehicleList.push_back(new Pickup());
    Person* person = new Person;

    int numOfDays = 0;
    std::cout << "Enter number of days using vehicles: ";
    std::cin >> numOfDays;
    solution(person, vehicleList, numOfDays);

    std::cout << "\nAfter adding Skateboard vehicle:\n";
    vehicleList.push_back(new Skateboard());
    solution(person, vehicleList, numOfDays);
}
