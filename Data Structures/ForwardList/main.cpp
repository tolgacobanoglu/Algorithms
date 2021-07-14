#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> numberList(5,10);
    std::forward_list<int>::iterator it;

    numberList.assign({0,1,2}); //refill


    for (it=numberList.begin();it!=numberList.end();it++)
    {
        std::cout<<*it<<std::endl;
    }

    std::cout<<std::endl;

    std::cout<<"Front : "<<numberList.front()<<std::endl;


    std::cout<<std::endl;
    it=numberList.begin();

    numberList.insert_after(it,3,10);


    for (it=numberList.begin();it!=numberList.end();it++)
    {
        std::cout<<*it<<std::endl;
    }

    numberList.clear();

    std::cout<<std::endl;

    int i;
    for (i=1;i<=5;i++)
    {
        numberList.emplace_front(i*10);
        std::cout<<numberList.front()<<std::endl;
    }


    return 0;
}
