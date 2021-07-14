#include <iostream>
#include <queue>

//First input first output
//priority que pop (size=4) 1-3-0-2

int main() {

    std::queue<int> que();

    int i;
    for(i=1;i<=5;i++)
    {
        que.emplace(i);
    }

    std::cout<<"Que size : "<<que.size()<<std::endl;
    std::cout<<"Que back : "<<que.back()<<std::endl;
    std::cout<<"Que front : "<<que.front()<<std::endl;

    que.emplace(-1);


    while (!que.empty())
    {
        std::cout<<que.front()<<std::endl;
        que.pop();
    }


    return 0;
}
