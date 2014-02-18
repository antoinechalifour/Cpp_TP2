#include <stdlib.h>
#include "CVector.h"
#include "TableauException.h"
#define TAILLE 2

CVector::CVector(){
    data=(int*) malloc(TAILLE * sizeof(int));
    size=0;
}

CVector::~CVector(){
    if(data!=NULL) free(data);
}

int& CVector::operator[](int i){
    if(i<0){
        TableauException e(TableauException::Underflow, "Index inferieur a 0\n");
        throw e;
    }
    if(i>size-1){
        TableauException e(TableauException::Overflow, "Index superieur a la taille du tableau\n");
        throw e;
    }
    return data[i * sizeof(int)];
}

unsigned int CVector::getSize(){ return size;}

void CVector::addElement(int i){
    int* ptr_r;
    if(size+1%TAILLE ==0){
        ptr_r= (int*) realloc(data, TAILLE*2 * sizeof(int));
        if(ptr_r==NULL){
            TableauException e(TableauException::Unknown, "Erreur de memoire\n");
            free(data);
            CVector();
            throw e;
        }
    }
    data[(size)*sizeof(int)]= i;
    size++;
}
