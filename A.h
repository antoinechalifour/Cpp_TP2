#include "B.h"

#ifndef A_H_INCLUDED
#define A_H_INCLUDED

class A{
    private :
    double x;
    double y;

    public:
    A();
    A(double x, double y);
    A(const A& obj);
    A(const B& obj);
    ~A();
    A& operator=(const A& obj);
    A& operator=(const B& obj);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
};


#endif // A_H_INCLUDED
