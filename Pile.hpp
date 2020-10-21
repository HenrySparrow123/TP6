#pragma once
#include <exception>

class Pile
{
    int c,s;
    int * tab;

    public :
        bool empty() const;
        int size() const; 
        void push(int);
        void pop();
        int& top() const;
        Pile(int = 10);
        ~Pile();
        int& operator[](int&) const; 
};