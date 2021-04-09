#include <iostream>

int coinChanger(double coinAmount,int index) //Greedy algorithm for coin change to minimum coin number
{                                         //If you want to start cashing from where you can increase the index
    double coinType[]={1,0.5,0.25,0.1,0.05,0.01};
    int coinNumber=0;
    while (coinAmount != 0)
    {
        if (coinAmount>=coinType[index])
        {
            coinAmount-=coinType[index];
            coinNumber+=1;
        }
        else
        {
            index+=1;
        }
    }
    return coinNumber;
}

void infoMessage(double coinAmount,int index)//display of methods work with which money method trade with them
{
    double coinType[]={1,0.5,0.25,0.10,0.050,0.010};
    int coinNumber=0;
    while (coinAmount != 0)
    {

        if (coinAmount>=coinType[index])
        {
            coinAmount-=coinType[index];
            coinNumber+=1;
            printf(" +%.2f $\n",coinType[index]);
        }
        else
        {
            index+=1;
        }
    }
}

int main()
{
    infoMessage(9.75,0);
    printf("%d",coinChanger(9.75,0));// give coin number
    return 0;
}