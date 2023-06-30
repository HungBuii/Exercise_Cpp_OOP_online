#include <iostream>

class Vehicle
{
public:

    Vehicle() {
        /*std::cout << "Create a vehicle!\n";*/
    }

    virtual void run() {    // virtual: khi goi doi tuong lop dan xuat dang co kieu la super class thi 
                            // virtual se thuc hien hanh vi thuc te cua lop dan xuat neu lop dan xuat co ham run() duoc dinh nghia lai
        std::cout << "A vehicle is running...!\n";
    }

private:
    std::string modelName;
};

class Car : public Vehicle
{
public:

    Car() {
        /*std::cout << "Create a car!\n";
        ownerName = "None";*/
    }

    void run() override {   // nen viet override de co the doc code ro hon va 
                            // biet duoc rang ham run() dang duoc dinh nghia lai cua ham run() cua super class
        std::cout << "A car is running...!\n";
    }

private:
    std::string ownerName; 
};

class Truck : public Vehicle
{
public:

    Truck() {
        /*std::cout << "Create a truck!\n";*/
    }

    void run() override { // nen viet override de co the doc code ro hon va 
                          // biet duoc rang ham run() dang duoc dinh nghia lai cua ham run() cua super class
        std::cout << "A truck is running...!\n";
    }

private:
    int expirationYear;
};

class Motobike : public Vehicle
{
public:

    Motobike() {
        /*std::cout << "Create a truck!\n";*/
    }

    void run() override {
        std::cout << "A motobike is running...!\n";
    }

private:
    int expirationYear;
};

int main()
{
    Vehicle* car = new Car(); // up-casting
    Vehicle* truck = new Truck();
    Vehicle* motobike = new Motobike();

    Vehicle* vehicle_list[3]; // mang cac con tro
    vehicle_list[0] = car;
    vehicle_list[1] = truck;
    vehicle_list[2] = motobike;

    for (int i = 0; i < 3; i++) {
        vehicle_list[i]->run();
    }
}

