#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int arr[n][n];
     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);

     // here i will transpose the matrixccscsc
     for(int i=0;i<n;i++)
     {
         for(int j=i;j<n;j++)
         {
             int a=arr[i][j];
             arr[i][j]=arr[j][i];
             arr[j][i]=a;
         }
     }
printf("\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
            printf("\n");}


      for(int i=0;i<n;i++){
          int t=n-1;
        for(int j=0;j<n/2;j++)
         {
                int a=arr[i][j];
                arr[i][j]=arr[i][t];
                arr[i][t]=a;
                    t--;
         }

      }

    printf("\n");

       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
            printf("\n");}
}
