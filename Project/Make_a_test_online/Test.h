#pragma once

class Test
{
public:
    Test() { }

    void setTime(int time);

    int getTime();

    virtual void show_time() = 0;

    virtual void questions() = 0;

    virtual void answers() = 0;

private:
    int time_;
    float score_;
};

