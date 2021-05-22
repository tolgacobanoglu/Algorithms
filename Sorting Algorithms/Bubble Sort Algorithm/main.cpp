#include <iostream>

void swapNumbers(int *a,int *b)
{
    int temp=*a; //we need third element to stored in memory
    *a=*b;
    *b=temp;
}

void bubbleSort(int array[],int length)
{
    for (int i = 0; i < length-1;i+=1)
    {
        for (int j=0;j<length-i-1;j+=1)
        {
            if (array[j] > array[j+1])
            {
                swapNumbers(&array[j],&array[j+1]);
            }
        }
    }
}

void printArray(int array[],int length)
{
    for (int i=0;i<length;i+=1)
    {
        std::cout<<array[i]<<" ";
    }
}

int main() {

    int array[]={0,2,-1,6,2,3,9,115,156,123,0,3,18,63,96};
    bubbleSort(array,15);
    printArray(array,15);

    return 0;
}
