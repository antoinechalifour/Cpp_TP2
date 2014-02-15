#include <iostream>
#include "B.h"

using namespace std;

B::B():
    x(0.0),
    y(0.0)
{ cout<<"B::B() - Constructeur par defaut de la classe B"<<endl; }

B::B(const B& obj):
    x(obj.x),
    y(obj.y)
{ cout<<"B::B(const A& obj) - Constructeur par recopie de la classe B"<<endl; }

B::B(double x, double y):
    x(x),
    y(y)
{ cout<<"B::B(double x, double y) - Constructeur a deux parametres de la classe B"<<endl; }

B::~B(){ cout<<"B::~B() - Destructeur de la classe B"<<endl; }

B& B::operator=(const B& obj){
    cout<<"B::operator=(const B& obj) - Operateur d'affectation de la classe B"<<endl;
    x = obj.x;
    y = obj.y;
    return *this;
}

const double B::getX() const{ return x; }

const double B::getY()const { return y; }

void B::setX(double x){ this->x = x;}

void B::setY(double y){ this->y = y;}
