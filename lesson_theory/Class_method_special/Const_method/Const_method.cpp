#include <iostream>
#include <string>

class Vehicle
{
public:
    std::string getModelName() const { // const method duoc viet dang sau ham getModelName() se lam cho cac thuoc tinh ben trong ham 
                                       // phai la cac thuoc tinh private trong class khong the chinh sua va chi co the return thuoc tinh do.
                                       // Nhung thuoc tinh khac khong lien quan den thuoc tinh cua class thi co the thay doi tuy y
                                       // Neu co class dan xuat ke thua super class thi getModelName() const se van duoc giu nguyen tinh nang const cua no.
        //modelName = "Unknown"; // error
        return modelName;
    }

    void setModelName(std::string name) {
        modelName = name;
    }

    virtual void run() {
        std::cout << "A vehicle is running...!\n";
    }

private:
    std::string modelName;
};

int main()
{
    const Vehicle vehicle;
    /*vehicle.setModelName();*/     // khong the goi setModelName() boi vi ben tren khai bao la 1 const object vehicle 
                                    // va ham setModelName() co the thay doi thuoc tinh ben trong class nen se khong duoc goi ra.
    vehicle.getModelName();         // hoan toan co the su dung duoc boi vi no khong lam thay doi thuoc tinh ben trong class
}

