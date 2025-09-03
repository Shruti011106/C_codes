#include<stdio.h>
int main()
{ 
    int num= 123;
    int a=num;
    int res;
    while( num=0){
        int lastdigit= num%10;
        res=res*10+lastdigit;
        num=num/10;
    }
       a==res? printf("%d is palindrone.",res): printf("%d is not palindrone ",res);
       return 0;
}