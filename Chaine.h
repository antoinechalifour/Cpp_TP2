#ifndef CHAINE_H_INCLUDED
#define CHAINE_H_INCLUDED

class Chaine{
    private:
    char* string;
    int size;

    public:
    Chaine();
    Chaine(char* str);
    Chaine(const Chaine& obj);
    ~Chaine();
    unsigned int getSize() const;
    char* getString() const;
    void addString(char* str);
    void replaceString(char* str);
};

#endif //CHAINE_H_INCLUDED
