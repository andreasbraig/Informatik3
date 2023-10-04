#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyString.h"


//Konstruktor
MyString::MyString(){

    len = 0;
    text = (char*)"";

};

MyString::MyString(char* content){
    text = content;
    len = strlen(content);

};

//Destruktor
MyString::~MyString(){
    //Keine Aktion nötig.
};

void MyString::print()
{
    printf("%s\n", text);
};

int MyString::length(){
    return len;
}