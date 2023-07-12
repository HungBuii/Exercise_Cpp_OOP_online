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
    static VehicleManager* manager; // -> property(object)
                                    // static dung de cho cac thuoc tinh khong phu thuoc vao class (giong bien global nhung danh cho class)
    VehicleManager() {
        // dua constructor vao private de chong new tu ben ngoai con cac class van co the new duoc
    }
};

VehicleManager* VehicleManager::manager = NULL; // dung static phai khai bao bien static co trong class

int main()
{
//  VehicleManager* manager = new VehicleManager; // khong the su dung ntn boi vi manager chi duoc phep khoi tao 1 lan de co the quan ly tat ca cac phuong tien
    
    Vehicle* taxi = new Vehicle("Kia Morning");
    Vehicle* pickup = new Vehicle("Ford Range");

    VehicleManager::getManager()->addVehicle(taxi);
    VehicleManager::getManager()->addVehicle(pickup);
    VehicleManager::getManager()->start();

    return 0;
}

