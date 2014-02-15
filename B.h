#ifndef B_H_INCLUDED
#define B_H_INCLUDED

class B{
    private :
    double x;
    double y;

    public:
    B();
    B(double x, double y);
    B(const B& obj);
    ~B();
    B& operator=(const B& obj);
    const double getX() const;
    const double getY() const;
    void setX(double x);
    void setY(double y);
};

#endif // B_H_INCLUDED
