#include <iostream>
#include <deque>

// 'Double Ended Queue' Dynamic structure like vector but we can add or remove element to front side (emplace_back - emplace_front)

int main()
{

    std::deque<int> deque(5,10);

    deque.at(0)=-1;

    for (int element:deque)
    {
        std::cout<<element<<std::endl;
    }

    std::cout<<std::endl;

    deque.clear();//delete everything about deque size,element vs
    deque.resize(5); //resize it to below transactions


    std::deque<int>::iterator it;//to travel in deque

    for (it=deque.begin();it!=deque.end();it++)
    {
        *it=20;
        std::cout<<*it<<std::endl;
    }


    return 0;
}
