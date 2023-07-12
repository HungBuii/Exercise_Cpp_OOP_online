#include <iostream>

struct RegisterInfo
{
    RegisterInfo() { }

    RegisterInfo(const RegisterInfo& otherInfo) { // Nen dung const boi vi references cho phep truy cap truc tiep 
                                                  // cac thuoc tinh va se gay ra hau qua la co the thay doi du lieu 
                                                  // cua thuoc tinh nen se vi pham tinh dong goi (encapsulation).
        std::cout << "Clone a register info.\n";
        license = otherInfo.license;
        ownerName = otherInfo.ownerName;
        /* otherInfo.ownerName = "ABC"; error boi vi struct va class khong cho phep thay doi du lieu truc tiep va vi pham tinh dong goi (encapsulation) */
    }

    std::string license;
    std::string ownerName;
};

class Vehicle
{
public:
    // std::string thuc chat cung la 1 class nen co the su dung references de tang do toi uu chuong trinh chay
    Vehicle(const std::string& name, const RegisterInfo& info) : modelName(name), 
                                                   ownerName(info.ownerName), 
                                                   license(info.license) {
    // Neu de la RegisterInfo info thi se xuat hien copy constructor do phai copy du lieu tu info(RegisterInfo) sang cac thuoc tinh cua Vehicle nhu ownerName = info.ownerName
    // nen chinh vi the hay de la RegisterInfo& info (references) cho phep truy cap truc tiep cac thuoc tinh ma khong phai copy du lieu
    }

    virtual void run() {
        std::cout << "A vehicle is running...!\n" << ownerName << "\n" << license << "\n";
    }

protected:
    const std::string modelName;
    std::string ownerName;
    std::string license;
};

int main()
{
    RegisterInfo infoHung;
    infoHung.ownerName = "Hung";
    infoHung.license = "18B1-99063";
    Vehicle* taxi = new Vehicle("Kia Morning", infoHung);
    taxi->run();
}

