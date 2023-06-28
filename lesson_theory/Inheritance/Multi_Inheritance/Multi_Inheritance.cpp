// da ke thua
#include <iostream>

class Vehicle
{
public:

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

class House
{
public: 
    float getArea() {
        return area;
    }

    void setArea(int a) {
        area = a;
    }

private: 
    float area;
};

class Mobihome : public Vehicle, public House
{

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
    Mobihome* mobihome = new Mobihome();
    mobihome->run();
    mobihome->setArea(15);
    std::cout << mobihome->getArea();
}


// Nhung loi co the khi su dung da ke thua

// *Loi 1: class Mobihome ke thua 2 class la Vehicle va House co chung ten ham vi du nhu setModelName(),...
//class Vehicle
//{
//public:
//
//    std::string getModelName() {
//        return modelName;
//    }
//
//    void setModelName(std::string name) {
//        modelName = name;
//    }
//
//    void run() {
//        std::cout << "A vehicle is running...!\n";
//    }
//
//private:
//    std::string modelName;
//};
//
//class House
//{
//public:
//    std::string getModelName() { // loi sai boi vi giong class Vehicle se gay ra loi ambiguous
//        return modelName;
//    }
//
//    void setModelName(std::string name) { // loi sai
//        modelName = name;
//    }
//
//    float getArea() {
//        return area;
//    }
//
//    void setArea(int a) {
//        area = a;
//    }
//
//private:
//    float area;
//    std::string modelName;
//};
//
//class Mobihome : public Vehicle, public House
//{
//
//};


// *Loi 2: loi diamond inheritance (loi gia pha hinh thoi)

//class Vehicle
//{
//public:
//
//    Vehicle() { // contructor khi duoc goi boi Pickup se bi trung 2 lan
//        std::cout << "Create a vehicle!\n";
//    }
//};
//
//class Car : public Vehicle
//{
//public:
//    Car() {
//        std::cout << "Create a car!\n";
//    }
//};
//
//class Truck : public Vehicle
//{
//    Truck() {
//        std::cout << "Create a truck!\n";
//    }
//};
//
//class Pickup : public Car, public Truck // error boi vi Car va Truck deu thua ke chung 1 class la vehicle nen 
//                                        // khi goi constructor cua Pickup thi se bi trung constructor Vehicle 2 lan
//{
//
//};
//
//int main()
//{
//    Pickup* pickup = new Pickup(); // error
//    
//}