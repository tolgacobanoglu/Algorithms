#include <iostream>
#include <stack>

// 'First input last output' or 'last input first output'

//Stack like a box if you put an item to floor on the box and add element to on it you have to take other element to find the first item

int main() {

    std::stack<char> stack;


    stack.emplace('a');
    stack.emplace('b');
    stack.emplace('c');
    stack.emplace('d');
    stack.emplace('e');

    while (!stack.empty()+1)
    {
        std::cout<<"Stack size : "<<stack.size()<<std::endl;
        std::cout<<"Stack top element : "<<stack.top()<<std::endl;
        stack.pop();
    }


    return 0;
}
