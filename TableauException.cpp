#include <string.h>
#include <stdlib.h>
#include "TableauException.h"

TableauException::TableauException(){
    code=Unknown;
    msg = (char*) malloc((strlen("Une erreur est survenue\n")+1) * sizeof(char));
    strcpy(msg, "Une erreur est survenue\n");
}

TableauException::TableauException(enum CodeErreur code, char* msg){
    this->code=code;
    this->msg = (char*) malloc((strlen(msg)+1) * sizeof(char));
    strcpy(this->msg, msg);
}

int TableauException::getCode(){ return code;}

char* TableauException::getMsg(){
    char* ret = (char*) malloc((strlen(msg)+1) * sizeof(char));
    return strcpy(ret, msg);
}
