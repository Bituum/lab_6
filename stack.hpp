#pragma once
#include "vector.hpp"
#include <ostream>
#include <initializer_list>


template<typename T>
class Stack
{
private:
   Vect<T> v; 
   int top;
public:
    
    using iterator = typename std::list<T>::iterator;

    Stack(std::initializer_list<T> l);


    std::size_t size();
    iterator begin();
    iterator end();

    void push_back(const T&);
    void pop_back();
    T Top();
};


template<typename T>
void Stack<T>::push_back(const T& D)
{
     v.append(D);
}


template<typename T>
void Stack<T>::pop_back()
{
    v.pop_back();
}

template <typename T>
Stack<T>::Stack(std::initializer_list<T> l) : v(l) { }

template <typename T>
typename Stack<T>::iterator Stack<T>::begin()
{
    return v.begin();
}


template <typename T>
typename Stack<T>::iterator Stack<T>::end()
{
    return v.end();
}

template <typename T>
std::size_t Stack<T>::size()
{
    return v.size();
}

template<typename T>
T Stack<T>::Top()
{
    return v.Top();
}








    
