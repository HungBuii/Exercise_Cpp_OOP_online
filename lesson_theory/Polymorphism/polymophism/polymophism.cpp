#include <iostream>

class Vehicle
{
public:

    Vehicle() {
        std::cout << "Create a vehicle!\n";
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
        ownerName = "None";
    }

    void runn() {
        std::cout << "A car "<< ownerName << " is running...!\n";
    }

private: 
    std::string ownerName; // keyword
};

int main() 
{
    /*Car* car = new Car();*/
/*---------- UP-CASTING ----------*/
//    ((Vehicle*)car)->run(); // Up-casting

/*---------- DOWN-CASTING ----------*/ /*(Danger)*/

    // cach 1
    /*Vehicle* vehicle = new Vehicle();
    ((Car*)vehicle)->runn();*/ // boi vi vehicle khong co property ownerName cua Car nen se bi xay ra loi khi chay (runtime)

    //    cach 2
    Car* car = new Car();
    Vehicle* vehicle = car; // Vehicle* vehicle = (Vehicle* )car // Down-casting
    vehicle->run(); // note: giua vehicle va car neu vehicle muon goi runn() thi vehicle phai co runn() -> vehicle khong the goi runn()
    car->runn();
}