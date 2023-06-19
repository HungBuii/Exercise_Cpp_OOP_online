#include <iostream>
#include <string>

class Message
{
public:
    std::string content;
    std::string sender;
};

class Woman
{
public:
    std::string fullname;
    int age;

    //void introduce(std::string language, bool isFull = true) { // tham so mac dinh luon luon phai viet sau nhung tham so binh thuong khac
    //    if (language == "Vietnam") std::cout << "Xin chao!\n";
    //    else std::cout << "Hi!\n";
    //}

    /*std::string introduce(std::string language, bool isFull = true)
    {
        std::string msg;
        if (language == "Vietnam") {
            msg = "Xin chao!\n";
            if (isFull) {
                msg += "Toi la ...\n";
            }
        }
        else {
            msg = "Hi!\n";
            if (isFull) {
                msg += "I am ...\n";
            }
        }
        return msg;
    }*/

    Message* introduce(std::string language, bool isFull = true)
    {
        Message* msg = new Message;
        if (language == "Vietnam") {
            msg->content = "Xin chao!\n";
            if (isFull) {
                msg->content += "Toi la ...\n";
            }
        }
        else {
            msg->content = "Hi!\n";
            if (isFull) {
                msg->content += "I am ...\n";
            }
        }
        return msg;
    }

    Message* introduce(int count)
    {
        Message* msg = new Message;
        for (int i = 0; i < 5; i++) {
            msg->content += "Hello " + std::to_string(i) + "\n";
        }
        return msg;
    }
private:
    float weight;
};

int main()
{
    Woman* hariwon = new Woman;
    /*hariwon->introduce("Vietnam");*/ // ham co 2 tham so nhung chi can 1 tham so va tham so con lai khong can goi den
                                   // day duoc goi la tham so mac dinh duoc viet o tren class Woman qua ham introduce
                                   // isFull mac dinh la true

    /*Message* msg = hariwon->introduce("Vietnam", false);*/
    /*std::cout << msg->content;*/
    Message* msg1 = hariwon->introduce(4);
    std::cout << msg1->content;
    return 0;
}
