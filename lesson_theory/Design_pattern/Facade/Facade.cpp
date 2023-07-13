#include <iostream>
#include <string>
#include <vector>

class Vehicle
{
public:
    Vehicle(std::string name) : modelName(name) {

    }

    virtual void run() {
        std::cout << modelName << " is running...!\n";
    }

protected:
    const std::string modelName;
    std::string ownerName;
    std::string license;
};

class VehicleManager
{
public:
    void addVehicle(Vehicle* vehicle) {
        vehicles.push_back(vehicle);
    }

    void start() {
        for (Vehicle* vehicle : vehicles) {
            vehicle->run();
        }
    }

    static VehicleManager* getManager() { // getter
        if (manager == NULL) {
            manager = new VehicleManager();
        }
        return manager;
    }

private:
    std::vector<Vehicle*> vehicles;
    static VehicleManager* manager; 
    VehicleManager() {
        
    }
};

class VehicleApp // -> Abstract class boi vi tat ca nhung logic cua chuong trinh se duoc bieu dien duoi dang function va khong can goi o ham main()
{
public:
    VehicleApp() : version("1.0") { }

    void init() { // -> key
        Vehicle* taxi = new Vehicle("Kia Morning");
        Vehicle* pickup = new Vehicle("Ford Range");

        VehicleManager::getManager()->addVehicle(taxi);
        VehicleManager::getManager()->addVehicle(pickup);
    }

    void start() { // -> key
        VehicleManager::getManager()->start();
    }

private:
    std::string version;
};

VehicleManager* VehicleManager::manager = NULL; 

int main()
{
    VehicleApp app; // cap phat tinh hay dong deu duoc
    app.init();
    app.start();
    return 0;
}
