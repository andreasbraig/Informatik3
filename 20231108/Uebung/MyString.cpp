#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyString.h"


//Konstruktor
MyString::MyString(){

    len = 0;
    text = (char*)"";

};

MyString::MyString(const char* content) {


    int contentlen = strlen(content) +1 ;
    text = new char [contentlen];


    strcpy(text,content);

    len = strlen(content);

};

const MyString& MyString::Copy(const MyString& b){
    return (*this = b);
}

//Destrukor

MyString::~MyString(){

    delete [] text; 
}


void MyString::print()
{
    printf("%s\n", text);
};

int MyString::length(){
    return len;
}

/*Operatoren */

const MyString& MyString::operator = (const MyString& b){
    /* Zuweisung auf sich selbst checken*/

    if (this == &b)
    {
        return (*this);
    }

    //Neuen Speicher Suchen
    int contentlen = strlen(b.text) +1 ;
    text = new char [contentlen];
    
    //Den neuen Wert in den neuen speicher kopieren 
    strcpy(text,b.text);
    len = strlen(text);


    return (*this);

}

