# include<stdio.h>
int main(){
    int num;
    printf( " enter a number :");
    scanf( "%d",& num);
    int fact=1;
    for (int i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    
    printf("factorial of %d is %d\n",num,fact );
    return 0;
}
