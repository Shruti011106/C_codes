// #include<stdio.h>
// int sum(int x, int y){
//     return x+y;
// }
// int main(){
//     int data=sum (4,9);
//     printf("%d",data);
// } 
#include<stdio.h>
int sum(int *x, int *y){
*x=26;
*y=45;
int c=(*x)+(*y);
return c;
}
int main(){
    int x=26;
    int y=1;
int data= sum (&x,&y);
printf("%d\n",data);
printf("%d",x+y);

}