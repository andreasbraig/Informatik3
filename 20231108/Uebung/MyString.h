#pragma once

class MyString
{
private:

    int len;
    char* text;

public:

    //Konstruktor 
    MyString();
    MyString(const char*);
    const MyString& Copy (const MyString&);
    //Destruktor 
    ~MyString();
    //Methoden
    void print();
    int length();

    //Operatoren 
    const MyString& operator = (const MyString&);


    
};