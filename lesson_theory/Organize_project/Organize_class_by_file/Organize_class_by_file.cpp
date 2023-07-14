#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"
#include "Taxi.h"
/*


class Person
{
private:
    std::vector<Vehicle*> vehicleList;
};
*/

int main()
{
    Vehicle* vehicle = new Taxi();
    vehicle->run();
}
