#include <iostream>
#include <vector>

class Vehicle 
{
public:

    class Engine {
    public:
        std::string get_manufacturer() {
            return "BWM";
        }
    };


    struct Wheel {

    };
    /*typedef std::vector<Wheel> wheelList;     cach 1 */
    using wheelList = std::vector<Wheel>;/*     cach 2 */


    enum Color {RED, BLUE, GREEN};


    std::string getModelName() {
        return modelName;
    }


    void setModelName(std::string name) {
        modelName = name;
    }


    virtual void run() {
        std::cout << "A vehicle is running with engine made my " << engine.get_manufacturer() << "\n";
    }

private:
    std::string modelName; 
    Engine engine;
};

int main()
{
    /*Vehicle* vehicle = new Vehicle();
    vehicle->run();*/

    Vehicle::Engine engine; // scope resolution: chi ro pham vi so huu cua 1 class nay so huu nhung class khac
                            // std::string cung la scope resolution,...
    std::cout << engine.get_manufacturer();

    Vehicle::Color color;
    Vehicle::wheelList list;

}
