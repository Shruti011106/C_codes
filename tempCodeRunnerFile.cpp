#include<stdio.h>
int main()
{
    int num=10;
    for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j <= i; j++)
         {
             printf("%c ",num++);
         }
         printf("\n");
}
};