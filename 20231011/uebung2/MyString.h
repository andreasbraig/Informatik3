#pragma once

class MyString
{
private:

    int len;
    const char* text;

public:

    MyString();
    MyString(char*);
    //Methoden
    void print();
    int length();
    
};