#include<stdio.h>
int main ()
{
    int arr[5]={3,4,1,3,4};
    int xor=0;
    for (int i=0;i<5;i++)
{
    xor=xor^arr[i];
}
printf("%d",xor);
}

