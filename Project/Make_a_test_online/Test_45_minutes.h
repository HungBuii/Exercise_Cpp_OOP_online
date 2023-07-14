#pragma once
#include "Test_30_minutes.h"

class Test_45_minutes : public Test_30_minutes
{
public:
    Test_45_minutes() {

    }

    virtual void show_time_and_score();

    virtual void questions();

    virtual void answers();
private:

};

