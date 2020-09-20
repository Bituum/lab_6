#include "stack.hpp"
#include "vector.hpp"
#include <ostream>
#include <string>
#include <iostream>



template<typename T>
std::ostream &operator<<(std::ostream &out, Stack<T> &st)
{
    for(auto &i : st)
    {
        out << " " << i << "\n";
    }
    return out;
}


int main()
{
    Stack<int> st1 = {1, 2, 3};
    Stack<float> st2 = {1.1, 2.2, 3.3};
    Stack<std::string> st3 = {"one", "two", "three"};


    std::cout << st1 << "   " << "\n";
    st1.pop_back();
    st1.push_back(9);
    std::cout << st1 << "   " << "\n";

    std::cout << st1.Top();
}
