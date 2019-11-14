#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   while(1)
   { int i=0,j=n-1;
     if(arr[i]==1)
     {
       if(arr[j]==0)
       {
         arr[i]=0;
         arr[j]=1;
         i++;
         j--;
       }
       else
       j--;
     }
     else if(i==j)
     break;
     else
     {
       i++;
     }
   }
   for(int i=0;i<n;i++)
   {
     printf("%d\n",arr[i]);
   }}