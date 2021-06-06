#include<iostream>
using namespace std;

// I use https://www.whitman.edu/mathematics/cgt_online/book/section01.04.html for resources and teacher's pdf of dynamic programming

int question1(int elementNumber)//algorithm is similar to combination calculator
{
    int results[elementNumber + 1][elementNumber + 1]; // we want to make a table to calculate step by step and save the steps

    results[0][0] = 1;  //first step and for the if there is a 1 element and result will be 1 {1}

    for (int i=1; i <= elementNumber; i++) // for other step calculating from 1 to elementNumber
    {

        results[i][0] = results[i - 1][i - 1];

        for (int j=1; j<=i; j++)
        {
            results[i][j] = results[i - 1][j - 1] + results[i][j - 1]; // rule of Partitions(elementNumber+1,t) = t * Partitions(elementNumber,t) + Partitions(elementNumber,t-1)
        }
    }
    return results[elementNumber][0]; // we return 0'th element because other j's element is for steps and save others
}

int main()
{
    cout << question1(3) << endl;
    cout << question1(5) << endl;

    return 0;
}
