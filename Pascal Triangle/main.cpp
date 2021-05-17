#include <iostream>
using namespace std;

long combination(int n,int k)
{
    long result [n + 1][n + 1];
    int i, j;

    for (i=0; i<=n; i++)
    {
        result[i][0]=1;
        result[i][i]=1;
    }

    for (i=2; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            result[i][j]=result[i-1][j-1]+result[i-1][j];
        }
        result[i][j]=result[i-1][j-1]+result[i-1][j];
    }

    return result[n][k];
}

void pascalTriangle(int n)
{
    int result[n+1];
    int i,j;

    for (i=0;i<=n;i++)
    {
        result[i]=combination(n,i);
    }

    for ( j= 0; j <= n; j++)
    {
        cout<<result[j]<<" ";
    }
}

int main()
{
    pascalTriangle(5);

    return 0;
}
