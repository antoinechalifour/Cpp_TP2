#ifndef TABLEAUEXCEPTION_H_INCLUDED
#define TABLEAUEXCEPTION_H_INCLUDED

class TableauException{
    public:
    enum CodeErreur{
        Underflow,
        Overflow,
        Unknown
    };

    private:
        enum CodeErreur code;
        char* msg;

    public:
        TableauException();
        TableauException(enum CodeErreur code, char* msg);
        int getCode();
        char* getMsg();
};

#endif // TABLEAUEXCEPTION_H_INCLUDED
