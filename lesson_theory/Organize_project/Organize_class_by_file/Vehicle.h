#pragma once

#include <string>

class Vehicle
{
public:
    std::string getModelName();

    void setModelName(std::string name);

    virtual void run();

private:
    std::string modelName;
};

