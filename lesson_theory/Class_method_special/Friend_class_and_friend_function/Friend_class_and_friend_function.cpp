#include <iostream>

class Vehicle 
{
    friend class Person; // friend cho phep cac class, function,... co the truy cap thuoc tinh private cua class Vehicle 
                         
                         // Cac class dan xuat cua Vehicle khong duoc friend tu class Vehicle thi khong truy cap duoc thuoc tinh private cua class Vehicle 
                         
                         // Cac class dan xuat cua Vehicle co the truy cap duoc thuoc tinh private cua class Vehicle thong qua mot ben trung gian thu 3 duoc friend tu class Vehicle. 
                         // Vi du nhu ham showInfo() co taxi->modelName, class Taxi duoc thua ke boi class Vehicle va showInfo() duoc friend tu ham Vehicle.
                            
                         // Neu cac class duoc class Vehicle friend nhung nguoc lai cac class do 
                         // khong friend nguoc lai thi class Vehicle se khong truy cap duoc nhung thuoc tinh private cua cac class do
    friend void showInfo(Vehicle* vehicle);

public:

    std::string getModelName() {
        return modelName;
    }

    void setModelName(std::string name) {
        modelName = name;
    }

    virtual void run() {
        std::cout << "Vehicle is running...!\n";
    }

protected:
    std::string modelName;
};

class Person
{
public:

    void hello() {
        std::cout << "Hello! I have a vehicle name " << vehicle->modelName << "\n";
    }

    void setVehicle(Vehicle* v) {
        vehicle = v;
    }

private:
    Vehicle* vehicle;
};

class Taxi : public Vehicle 
{
private:
    int km_counter;
};

void showInfo(Vehicle* vehicle) {
    Taxi* taxi = new Taxi();
    taxi->setModelName("Kia Morning");
    /*std::cout << "This is vehicle named " << taxi->km_counter << "\n";*/     // loi boi vi class Taxi chua friend function showInfo()
    std::cout << "This is vehicle named " << taxi->modelName << "\n";
    std::cout << "This is vehicle named " << vehicle->modelName << "\n";
}

int main()
{
    Vehicle* vehicle = new Vehicle();
    vehicle->setModelName("Kia Morning");

    Person person;
    showInfo(vehicle);
    person.setVehicle(vehicle);
    person.hello();
}