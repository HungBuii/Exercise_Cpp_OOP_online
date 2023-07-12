#include <iostream>

class Person { };

class Vehicle
{
public:
    Vehicle(std::string name, int year, Person& person) //-> khai bao
        : modelName(name), //-> khoi tao
        manufactureYear(year),
        owner(person),
        frameSize{ 2, 1.6, 3 } // constructor initialized list: khoi tao luon sau khi khai bao 
    {
        // neu viet modelName = name thi se la gan gia tri chu khong phai khoi tao
    }

    virtual void run() {
        std::cout << "A vehicle is running...!\n";
    }

protected:
    const std::string modelName;
    int manufactureYear;
    Person& owner;
    float frameSize[3];
};

class Taxi : public Vehicle
{
public:
    Taxi(std::string name, int year, Person& person) : Vehicle(name, year, owner) {

    }

    void run() override {

    }

private:
    int kmCounter;
};

int main()
{
    Person hung;
    Taxi* taxi = new Taxi("Kia Morning", 2022, hung);

}

