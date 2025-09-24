// #include <stdio.h>
// int main()
// {
//     int arr[3][4] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }
//     int sum = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//     }
//     printf("sum=%d", sum);
//     int max = arr[0][0];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] > max)
//                 max = arr[i][j];
//         }
//     }
//     printf("\nmax=%d", max);
//     {
//         int min = arr[0][0];
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 if (arr[i][j] < min)
//                     min = arr[i][j];
//             }
//         }
//         printf("\nmin=%d", min);
//     }
//     printf("\nrow");
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum = sum + arr[i][j];
//         }

//         printf("\n%d", sum);
//     }
//     printf("\ncolumn");
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             int sum = 0;
//             for (int j = 0; j < 3; j++)
//             {
//                 sum = sum + arr[j][i];
//             }

//             printf("\n%d", sum);
//         }
        
//     }
//     printf("\n2d array into 1d\n");
//     int one[9];
//         int m=0;
//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<3;j++){
//                 one[m]=arr[i][j];
//                 m++;
            
//             printf("% d ",arr[i][j]);
//         }
//     }
//     printf("\n transpose\n");
//     int tarr[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             tarr[i][j]=arr[j][i];
//         }
        
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
           
//             printf("%d ", tarr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n diagonal\n");
//         for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            if(i==j)
//            printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }
#include<stdio.h>
    int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
