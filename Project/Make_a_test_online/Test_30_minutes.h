#pragma once
#include "Test_15_minutes.h"

class Test_30_minutes : public Test_15_minutes
{
public:
    Test_30_minutes() {

    }

    virtual void show_time_and_score();

    virtual void questions();

    virtual void answers();
private:

};

