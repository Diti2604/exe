//iferati22
#include <stdio.h>
#include <stdlib.h>

void read(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int maxV(int arr[], int n)
{
    if(n==1)
    {
        return arr[0];
    }
    int max=maxV(arr,n-1);
    if(arr[n-1]>max)
    {
        return arr[n-1];
    }
    return max;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    read(arr,n);
    printf("%d", maxV(arr,n));
    return 0;
}