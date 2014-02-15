#include <iostream>
#include "A.h"
#include "B.h"
#include "Point.h"
#include "Chaine.h"

using namespace std;

Point CreerPoint(double x, double y, double z, char* label){
    Point p(x, y, z, label);
    return p;
}

Point CreerPoint(Point p){
    Point p1(p);
    return p1;
}

ostream& operator<<(ostream& os, const Chaine& c){
    os<<c.getString();
    return os;
}

istream& operator>>(istream& is, Chaine& c){
    char tmp[128];
    is>>tmp;

    c.replaceString(tmp);
    return is;
}

int main()
{
    //1.1 Question 3
    /*
    A t; // Constructeur par defaut
    A z(t); // Constructeur par recopie
    A v=A(); // Constructeur par defaut
    A y=t; // Constructeur par recopie
    z=t; // Operateur d'affectation
    */

    //1.1 Question 4
    /*
    A t;
    B u;
    A a(u);
    t=u;
    */

    //1.2 Question 1
    /*
    Point p1; // Constructeur par defaut
    Point p2(1.2, 0, 0.3, "p2"); // Constructeur a 4 parametres
    Point p3=Point(2, 3.1, 2, "p3"); // Constructeur a 4 parametres

    p1= CreerPoint(2.4, 8, 3.5, "p1"); // Constructeur 4 parametres + operator= + destructeur
    p1= CreerPoint(p2); // 2 constructeurs recopie (dans fonction + entree fonction) + operator=
    //en utilisant reference, une seul recopie (pas de recopie en entree de fonction)
    */

    //1.2 Question 3
    /*
    Point p1(1, 0, 0, "");
    Point p2;
    double dist;

    dist=Point::distance(p1, p2); //Pour etre appelée ainsi, la méthode doit etre static
    cout<<"La distance entre p1 et p2 est "<<dist<<endl;
    */

    //2 Question 2
    Chaine c1("Ma chaine");
    Chaine c2("Def");
    cout<<"valeur de c1 : "<<c1<<endl;
    cin>>c2;
    cout<<"valeur de c2 : "<<c2<<endl;
    return 0;
}
