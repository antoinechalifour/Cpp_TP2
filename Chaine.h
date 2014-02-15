#ifndef CHAINE_H_INCLUDED
#define CHAINE_H_INCLUDED

class Chaine{
    private:
    char* string;
    int size;

    public:
    //Constructeurs
    Chaine();
    Chaine(char* str);
    Chaine(const Chaine& obj);
    ~Chaine();

    //Operateurs
    char& operator[](int i);

    //Getters
    unsigned int getSize() const;
    char* getString() const;

    //Auyres méthodes
    void addString(char* str);
    void replaceString(char* str);
};

#endif //CHAINE_H_INCLUDED
