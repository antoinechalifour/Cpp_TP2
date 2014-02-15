#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point{
    private :
    double x;
    double y;
    double z;
    char* label;

    public:
    //Constructeurs
    Point();
    Point(double x, double y, double z, char* label);
    Point(const Point& p);
    ~Point();

    //Operateurs
    Point& operator=(const Point& p);

    //Getters
    const double getX() const;
    const double getY() const;
    const double getZ() const;
    char* getLabel() const;

    //Autres méthodes
    static double distance(Point& p1, Point& p2);

};

#endif // POINT_H_INCLUDED
