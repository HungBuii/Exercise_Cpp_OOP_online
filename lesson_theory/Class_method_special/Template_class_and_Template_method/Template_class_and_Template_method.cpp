#include <iostream>

//template <typename T> // template class
//class A 
//{
//public: 
//
//    A(T _data) {
//        data = _data;
//    }
//
//    T get_data() {
//        return data;
//    }
//
//private:
//    T data;
//};
//
////class B : public A<int> {};
//
//template <typename T>
//class B : public A<T> {}; // B co kieu du lieu nao thi A cung se co kieu du lieu giong nhu B

class X
{
public:
    template <typename T>
    void hello() {
        std::cout << "Hello " << typeid(T).name() << "\n";
    }
};

class Y : public X
{

};


int main()
{
    /*A<int> a1(2);
    std::cout << a1.get_data() << "\n";

    A<std::string> a2("Hung ne");
    std::cout << a2.get_data() << "\n";

    B<std::string> b;*/       /*template class*/


    Y y;
    y.hello<int>();
    y.hello<bool>();
}

