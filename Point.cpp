#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Point.h"

using namespace std;

//Constructeurs
Point::Point():
    x(0.0),
    y(0.0),
    z(0.0)
{
    cout<<"Constructeur par defaut de Point"<<endl;
    label = (char*) malloc(sizeof(char));
    strcpy(label, "");
}

Point::Point(double x, double y, double z, char* label):
    x(x),
    y(y),
    z(z)
{
    cout<<"Constructeur a quatre parametres de Point";
    this->label = (char*) malloc((strlen(label)+1) * sizeof(char));
    strcpy(this->label, label);
    cout<<"\t"<<label<<endl;
}

Point::Point(const Point& p):
    x(p.x),
    y(p.y),
    z(p.z)
{
    cout<<"Constructeur par recopie de Point";
    this->label = (char*) malloc((strlen(p.label)+1) * sizeof(char));
    strcpy(this->label, p.label);
    cout<<"\t"<<label<<endl;
}

Point::~Point(){
    cout<<"Destructeur de Point "<<label<<endl;
    free(label);
}


//Operateurs
Point& Point::operator=(const Point& p){
    cout<<"Operator= de Point "<<p.label<<endl;
    x = p.x;
    y = p.y;
    z = p.z;

    this->label = (char*) malloc((strlen(p.label)+1) * sizeof(char));
    strcpy(this->label, p.label);

    return *this;
}


//Getters
const double Point::getX() const{ return x;}
const double Point::getY() const{ return y;}
const double Point::getZ() const{ return z;}

char* Point::getLabel() const{
    char* ret = (char*) malloc((strlen(label)+1) * sizeof(char));
    return strcpy(ret, label);
}


//Autres méthodes
double Point::distance(Point& p1, Point& p2){
    return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2) + pow(p1.z - p2.z, 2));
}
