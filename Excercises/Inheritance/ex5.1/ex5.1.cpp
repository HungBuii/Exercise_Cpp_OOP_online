#include <iostream>
#include <string>

class SmartPhone
{
public:

    SmartPhone(std::string _name, std::string _production_company, std::string _version, float _inch, int _warranty) {
        name = _name;
        production_company = _production_company;
        version = _version;
        inch = _inch;
        warranty = _warranty;
    }

    void start() {
        std::cout << "Phone " << name << " is starting...!\n";
    }

    void call() {
        std::cout << "Phone " << name << " is calling...!\n";
    }

private:
    std::string name;
    std::string production_company;
    std::string version;
    float inch;
    int warranty;
};

class Iphone : public SmartPhone
{
public:

    Iphone(std::string _name, std::string _production_company, std::string _version, float _inch,
          int _warranty) : SmartPhone(_name, _production_company, _version, _inch, _warranty) {

    }

    void faceID() {
        std::cout << "FaceID is allowed access!\n";
    }

    void airDrop() {
        std::cout << "AirDrop is allowed access!\n";
    }

    void appStore() {
        std::cout << "App Store is allowed access!\n";
    }

private:

};

class GalaxyS : public SmartPhone
{
public: 
    GalaxyS(std::string _name, std::string _production_company, std::string _version, float _inch,
        int _warranty) : SmartPhone(_name, _production_company, _version, _inch, _warranty) {

    }

    void openSpen() {
        std::cout << "S pen is allowed access!\n";
    }

    void googlePlay() {
        std::cout << "Google Play is allowed access!\n";
    }
};

class RedmiNote : public SmartPhone
{
public :
    RedmiNote(std::string _name, std::string _production_company, std::string _version, float _inch,
        int _warranty) : SmartPhone(_name, _production_company, _version, _inch, _warranty) {

    }
};

int main()
{
    Iphone* iphone = new Iphone("Iphone 13 Pro Max", "Apple", "13 Pro Max", 6.7, 1);
    iphone->start();
    iphone->call();
    iphone->faceID();
    iphone->airDrop();
    iphone->appStore();

    std::cout << std::endl;

    GalaxyS* galaxyS = new GalaxyS("Galaxy S22 Ultra", "SamSung", "S22 Ultra", 7.1, 1);
    galaxyS->start();
    galaxyS->call();
    galaxyS->openSpen();
    galaxyS->googlePlay();

    std::cout << std::endl;

    RedmiNote* redmi = new RedmiNote("Redmi Note 12 Pro 5G", "Redmi", "Note 12 Pro 5G", 6.2, 1);
    redmi->start();
    redmi->call();
}
