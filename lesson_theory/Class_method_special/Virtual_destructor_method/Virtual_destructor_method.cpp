#include <iostream>
#include <string>

class Vehicle
{
public:
    Vehicle() {
        std::cout << "Create vehicle\n";
    }

    virtual ~Vehicle() { // them virtual de khi delete taxi thi se delete tu taxi roi lien ket toi vehicle thong qua virtual
        std::cout << "Delete vehicle\n";
    }

    virtual void run() {
        std::cout << "H";
    }

private:
    std::string modelName;
};

class Taxi : public Vehicle
{
public:
    Taxi() {
        std::cout << "Create taxi\n";
    }

    ~Taxi() {
        std::cout << "Delete taxi\n";
    }

    virtual void run() {
        std::cout << "Hu";
    }

private:
    std::string modelName;
};

int main()
{
    Vehicle* taxi = new Taxi();
    delete taxi; // Do delete "con tro" co kieu la Vehicle* nen se goi ham destructor tu class Vehicle truoc.
                 
                 // Neu delete "con tro" co kieu la Taxi* thi se goi destructor tu class Taxi 
                 // roi tu tinh chat thua ke goi duoc destructor cua class Vehicle ma khong can phai virtual.
                 
                 // neu delete "con tro" co kieu la Vehicle* ma khong co virtual destructor 
                 // cua class Vehicle thi se chi goi duoc class Vehicle ma khong the goi duoc destructor cua class Taxi se gay ra memory leak 
                 // va nguoc lai neu co virtual destructor thi se goi destructor cua Taxi truoc thong qua "virtual" roi den destructor cua Vehicle.
}

