#include <iostream>
#include <vector>

//Vectors are just dynamic array

int main() {

    std::vector<int> numberVector; // like a dynamic array

    int i;
    for (i = 0; i < 5; i += 1) // fill vector
    {
        numberVector.emplace_back(i * 10); // add element from back
    }

    for (i = 0; i < 5; i += 1) // print with for loop
    {
        std::cout << numberVector.at(i) << std::endl;
    }

    std::cout<<std::endl;

    numberVector.pop_back(); // remove back of vector element

    numberVector.emplace(numberVector.begin(), 77); //add element with with index,begin the 0.the index

    for (int number:numberVector)    //print with for each loop
    {
        std::cout << number << std::endl;
    }

    std::cout<<std::endl;

    std::cout<<numberVector.front()<<std::endl; //head
    std::cout<<numberVector.back()<<std::endl;  //tail

    std::cout<<std::endl;

    numberVector.erase(numberVector.begin()+2);

    for (int number:numberVector)
    {
        std::cout<<number<<std::endl;
    }

    return 0;
}