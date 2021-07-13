//It works like a stack and queue,we can pop and push elements front or back

#include <iostream>
#include <list>

int main()
{

    std::list<int> firstList;
    std::list<int> secondList(5,10);
    std::list<int> thirdList(secondList.begin(),secondList.end());
    std::list<int> fourthList;

    std::list<int>::iterator it1;
    std::list<int>::iterator it2; // eraser
    std::list<int>::iterator it3;  // adder

    fourthList.assign(5,100); //these and line 8 constructor is same

    int i;
    for (i=1;i<=5;i+=1) //add element and show the back and front of the list
    {
        firstList.emplace_back(i*10);
        std::cout<<"Current front : "<<firstList.front()<<std::endl;
        std::cout<<"Current back : "<<firstList.back()<<std::endl;
    }


    bool isEmpty=firstList.empty();
    std::cout<<"First list 0,1 : "<<isEmpty<<std::endl;


    for(it1=firstList.begin();it1!=firstList.end(); it1++) // print with iterator
    {
        std::cout<<*it1<<std::endl;
    }

    firstList.reverse();
    firstList.sort();


    for (auto& x:firstList) //print with auto
    {
        std::cout<<x<<std::endl;
    }


    firstList.clear(); //clear all elements of linked list
    firstList.emplace_back(-1);
    firstList.emplace_back(-2);
    firstList.emplace_back(-3);
    firstList.emplace_back(-4);
    firstList.emplace_back(-4);

    for (auto it1 = firstList.cbegin() ; it1 != firstList.cend(); ++it1)
    {
        std::cout<<*it1<<std::endl;
    }


    it2=firstList.begin(); //start iterator first index
    std::advance(it2,1); // move iterator to n. index
    it2=firstList.erase(it2); // missioned it to erase moved state


    for (auto it1 = firstList.cbegin() ; it1 != firstList.cend(); ++it1)
    {
        std::cout<<*it1<<std::endl;
    }


    it3=firstList.begin(); //start iterator first index
    std::advance(it3,1); // move iterator to n. index
    it3=firstList.emplace(it3,2); //missioned it to add element it3 state

    for (auto it1 = firstList.cbegin() ; it1 != firstList.cend(); ++it1)
    {
        std::cout<<*it1<<std::endl;
    }

    firstList.remove(-4); // it will all remove element has -4 value

    for (auto it1 = firstList.cbegin() ; it1 != firstList.cend(); ++it1)
    {
        std::cout<<*it1<<std::endl;
    }

   // delete &firstList;


    return 0;
}