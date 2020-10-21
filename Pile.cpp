#include "Pile.hpp"
#include <iostream>

Pile::Pile(int Capacite) : c(Capacite),s(0), tab(new int[Capacite])
{}

Pile::~Pile() 
{
    delete [] tab;
}

bool Pile::empty() const
{
    //if (c <= 0) throw std::invalid_argument(const std::invalid_argument& e);
    //else 
    //{
        if (s == 0) return true;
        else return false;
    //}
}

void Pile::push(int x)
{
    tab[s] = x;
    s++;
}

void Pile::pop()
{
    s --;
}

int& Pile::top() const
{
    return tab[s - 1];

}

int Pile::size() const
{
    return s;
}

int& Pile::operator[](int& index) const
{
    return tab[index];
}