#pragma once

class Test
{
public:
    Test() { }

    void setTime(int time);

    int getTime();

    void setScore(float score);

    float getScore();

    virtual void show_time_and_score() = 0;

    virtual void questions() = 0;

    virtual void answers() = 0;

private:
    int time_;
    float score_;
};

