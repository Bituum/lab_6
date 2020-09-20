#pragma once
#include <list>
#include <initializer_list>

template <typename T>
class Vect
{
private:
    std::list<T> list;

public:

    using iterator = typename std::list<T>::iterator;

    Vect();
    Vect(std::size_t size, const T &element);
    Vect(std::initializer_list<T> l);

    iterator begin();
    iterator end();

    std::size_t size();
    void append(const T &value);
    void pop_back();

    T Top();
};


template <typename T>
Vect<T>::Vect() : list() { }

template <typename T>
Vect<T>::Vect(std::size_t size, const T &element) : list(size, element) { }

template <typename T>
Vect<T>::Vect(std::initializer_list<T> l) : list(l) { }

template <typename T>
typename Vect<T>::iterator Vect<T>::begin()
{
    return list.begin();
}

template <typename T>
typename Vect<T>::iterator Vect<T>::end()
{
    return list.end();
}

template <typename T>
std::size_t Vect<T>::size()
{
    return list.size();
}

template <typename T>
void Vect<T>::append(const T &value)
{
    list.push_back(value);
}

template <typename T>
void Vect<T>::pop_back()
{
     list.pop_back();
}

template<typename T>
T Vect<T>::Top()
{
    return list.back();
}
