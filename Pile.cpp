#include "Pile.hpp"
#include <iostream>

Pile::Pile(int Capacite) : c(Capacite),s(0), tab(Capacite > 0 ? new int[Capacite] : nullptr)
{
    if (Capacite <= 0) throw std::invalid_argument("Pile sans capacité"); 
}

Pile::~Pile() 
{
    delete [] tab;
}

bool Pile::empty() const
{
    if (c <= 0) throw std::invalid_argument("Nombre <= 0");
    else 
    {
        if (s == 0) return true;
        else return false;
    }
}

void Pile::push(int x)
{
    tab[s] = x;
    s++;
}

void Pile::pop()
{
    if (s == 0) throw std::invalid_argument("Pile vide");
    else s --;
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