#include <iostream>

int coinChanger(int coinAmount,int index) //Greedy algorithm for coin change to minimum
{                                         //If you want to start cashing from where you can increase the index
    int coinType[]={25,10,5,1};
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

void infoMessage(int coinAmount,int index)//display of methods work with which money method trade with them
{
    int coinType[]={25,10,5,1};
    int coinNumber=0;
    while (coinAmount != 0)
    {
        if (coinAmount>=coinType[index])
        {
            coinAmount-=coinType[index];
            coinNumber+=1;
            printf("+%d$\n",coinType[index]);
        }
        else
        {
            index+=1;
        }
    }
}

int main()
{
    infoMessage(66,0);
    printf("%d",coinChanger(66,0));
    return 0;
}