#include <iostream>

class Vehicle // <- Abstract class
{
public:

    Vehicle() {
        
    }

    virtual void run() = 0; // = 0: pure virtual function.
                            // ham run() se khong co du lieu va cac class dan xuat se phai dinh nghia lai ham run()
                            // Neu 1 class co 1 hoac nhieu pure virtual function thi se la 1 abstract class.
                            // Chinh vi vay class do se khong the khoi tao object va no se dong vai tro 
                            // nhom cac class dan xuat de tao thanh mot mang doi tuong (Vehicle* vehicle_list[3]).

private:
    std::string modelName;
};

class Car : public Vehicle
{
public:

    Car() {
        
    }

    void run() override {
        std::cout << "A car is running...!\n";
    }

private:
    std::string ownerName;
};

class Truck : public Vehicle
{
public:

    Truck() {
       
    }

    void run() override {
        std::cout << "A truck is running...!\n";
    }

private:
    int expirationYear;
};

class Motobike : public Vehicle
{
public:

    Motobike() {
        
    }

    void run() override {
        std::cout << "A motobike is running...!\n";
    }

private:
    int expirationYear;
};

//class Motobike : public Vehicle
//{
//    // neu 1 class khong override lai o super class thi se duoc coi la 1 abstract class
//};


int main()
{
    Vehicle* vehicle_list[3]; // mang cac con tro
    vehicle_list[0] = new Car();
    vehicle_list[1] = new Truck();
    vehicle_list[2] = new Motobike();

    for (int i = 0; i < 3; i++) {
        vehicle_list[i]->run();
    }
}
