// #include<stdio.h>
// int sum(int x, int y){
//     return x+y;
// }
// int main(){
//     int data=sum (4,9);
//     printf("%d",data);
// } 
// #include<stdio.h>
// int sum(int *x, int *y){
// *x=26;
// *y=45;
// int c=(*x)+(*y);
// return c;
// }
// int main(){
//     int x=26;
//     int y=1;
// int data= sum (&x,&y);
// printf("%d\n",data);
// printf("%d",x+y);

// }
// #include<stdio.h>
// int main(){
// int arr[5]={1,2,3,45,6};
// int *p=arr;
// printf("%d",*(p));
// printf("%d",*(p+1));
// printf("%d",*(p+2));
// }

// #include<stdio.h>
// int swape (int *x, int *y){
//     int temp =*x;
//     int &x=*y;
//     int *y= temp;

// }
// int main (){    
//     int x=12;
//     int y=23;
//     printf("x=%d, y=%d");
//     swape(x,y);
// }

#include<stdio.h>
int main(){
int arr1[5]={1,2,3,4,7};
int arr2[5]={1,2,3,4,7};
int *p1=arr1;
int *p2=arr2;
int flag=1;
for(int i=0;i<5;i++){
    if (*(p1+i)!= *(p2+i)){
        flag=0;
        break;
    }
}(flag==0)?printf("not equal"):printf("equal");
}