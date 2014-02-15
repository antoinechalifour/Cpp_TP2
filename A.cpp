#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

// Constructeur par defaut
A::A():
    x(0.0),
    y(0.0)
{ cout<<"A::A() - Constructeur par defaut de la classe A"<<endl;}

// Constructeur par recopie (A)
A::A(const A& obj):
    x(obj.x),
    y(obj.y)
{ cout<<"A::A(const A& obj) - Constructeur par recopie de la classe A"<<endl; }

// Constructeur par recopie (B)
A::A(const B& obj):
    x(obj.getX()),
    y(obj.getY())
{ cout<<"A::A(const B& obj) - Constructeur par recopie de la classe A"<<endl; }

// Constructeur a deux parametres
A::A(double x, double y):
    x(x),
    y(y)
{ cout<<"A::A(double x, double y) - Constructeur a deux parametres de la classe A"<<endl; }

// Destructeur
A::~A(){ cout<<"A::~A() - Destructeur de la classe A"<<endl; }

// Operateur d'affectation (A)
A& A::operator=(const A& obj){
    cout<<"A::operator=(const A& obj) - Operateur d'affectation de la classe A"<<endl;
    x = obj.x;
    y = obj.y;
    return *this;
}

// Operateur d'affectation (B)
A& A::operator=(const B& obj){
    cout<<"A::operator=(const B& obj) - Operateur d'affectation de la classe A"<<endl;
    x = obj.getX();
    y = obj.getY();
    return *this;
}

// Getter X
double A::getX(){ return x; }

// Getter Y
double A::getY(){ return y; }

//Setter X
void A::setX(double x){ this->x = x;}

//Setter Y
void A::setY(double y){ this->y = y;}
