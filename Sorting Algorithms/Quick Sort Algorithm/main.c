#include <stdio.h>

void quickSort(int a[], int lowerIndex, int upperIndex)
{
    int i = lowerIndex, j = upperIndex, temp;
    int pivot = a[(lowerIndex + upperIndex) / 2];

    do{
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    while (i <= j);
    if (lowerIndex < j)
        quickSort(a, lowerIndex, j);
    if (i < upperIndex)
        quickSort(a, i, upperIndex);
}

int main() {

    int b[]={3,2,8,9,6,2,2,5,7,-3};
    quickSort(b,0,10);//

    for(int i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
