#ifndef CVECTOR_H_INCLUDED
#define CVECTOR_H_INCLUDED

class CVector{
    private:
    int* data;
    unsigned int size;

    public:
    CVector();
    ~CVector();
    unsigned int getSize();
    int& operator[](int i);
    void addElement(int element);
};

#endif // CVECTOR_H_INCLUDED
