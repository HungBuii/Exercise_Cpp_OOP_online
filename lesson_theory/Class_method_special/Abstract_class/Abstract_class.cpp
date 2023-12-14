#include <iostream>

class Vehicle // <- Abstract class
{
public:

    Vehicle() { // Luu y trong abstract class neu co lop ke thua thi chung se phai bat buoc ke thua chuan 100% constructor cua lop abstract va khong co constructor nao khac
                // Vi du chung ta co constructor Vehicle(int n) thi lop Car ke thua Vehicle phai co constructor Car (int n) : Vehicle(n) 
                // neu chung ta su dung constructor ko tham so la Car() thi se ko duoc boi vi compiler se khong biet su dung constructor nao cho phu hop 
                // va constructor khong co tham so tuong tu de cung cap gia tri cho cac tham so tren.
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
