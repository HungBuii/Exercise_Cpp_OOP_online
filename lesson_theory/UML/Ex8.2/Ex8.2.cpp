#include <iostream>
#include <math.h>

class Frame { };

class Window : public Frame
{
public:
    void open() { }

    void close() { }

    void move() { }

    void display() { }

    void handleEvent(Event* e) { }
};

class ConsoleWindow { };

class DialogBox { };

class Event { };

class DrawingContext
{
public:
    void setPoint() { }

    void clearScreen() { }

    float getVerticalSize() { }

    float getHorizontalSize() { };
};

class Shape // Abtract class
{
public: 
    virtual void draw() = 0;
    virtual void erase() = 0;
    virtual void move() = 0;
    virtual void resize() = 0;
};

class Circle : public Shape
{
public:
    void area(float radius) { }

private:
    float radius;
    float center;
};

class Rectangle : public Shape { };

class Polygon : public Shape { };

int main()
{
    
}

