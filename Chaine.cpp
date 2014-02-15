#include <string.h>
#include <iostream>
#include <stdlib.h>
#include "TableauException.h"

#ifndef _Chaine_h
#define _Chaine_h
#include "Chaine.h"
#endif

using namespace std;

//Constructeur par defaut
Chaine::Chaine(){
    cout<<"Passage dans le constructeur par defaut"<<endl;
    string = (char*) malloc(sizeof(char));
    strcpy(string, "");
    size = strlen(string);
}

//Constructeur à un paramètre
Chaine::Chaine(char* str){
    cout<<"Passage dans le constructeur a un parametre"<<endl;
    size = strlen(str);
    string = (char*) malloc((size+1) * sizeof(char));
    strcpy(string, str);
}

//Constructeur de recopie
Chaine::Chaine(const Chaine& obj) : size(obj.size){
    cout<<"Passage dans le constructeur de recopie"<<endl;
    string = (char*) malloc(size * sizeof(char));
    strcpy(string, obj.string);
}

//Destructeur
Chaine::~Chaine(){
    cout<<"Passage dans le destructeur"<<endl;
    free(string);
}

//Operateur
char& Chaine::operator[](int i){
    //if(i<0 || i>=size) throw -1;
    if(i<0){
        TableauException e(TableauException::Underflow, "Index inferieur a 0\n");
        throw e;
    }
    if(i>=size){
        TableauException e(TableauException::Overflow, "Index superieur a la taille de la chaine\n");
        throw e;
    }
    return string[i];
}

//Getters
unsigned int Chaine::getSize() const{
    return size;
}

char* Chaine::getString() const{
    char* str = (char*) malloc(size * sizeof(char));
    strcpy(str, string);

    return str;
}

void Chaine::addString(char* str){
    cout<<"Passage dans addString(char* str)"<<endl;
    char* tmp = (char*) malloc(size * sizeof(char));
    strcpy(tmp, string);
    size += strlen(str);
    string = (char*) realloc(string, (size+1) + sizeof(char));
    strcpy(string, tmp);
    strcat(string, str);
    free(tmp);
}

void Chaine::replaceString(char* str){
    cout<<"Passage dans replaceString(char* str)"<<endl;
    free(string);
    size = strlen(str);
    string = (char*) malloc(size * sizeof(char));
    strcpy(string, str);
}
