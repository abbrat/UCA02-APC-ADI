#include<stdio.h>
int binary(int arr[],int l,int r,int k)
{
    if(l>r)
    return -1;
    int m=(l+r)/2;
    if(arr[m]==k)
    return m;
    if(arr[l]<=arr[m])
    {
        if(k>=arr[l]&&k<=arr[m])
        {
            return binary(arr,l,m-1,k);
        }
        else
        return binary(arr,m+1,r,k);
    }
    if(k>=arr[m]&&k<=arr[r])
    return binary(arr,m+1,r,k);
    else
    return binary(arr,l,m,k);
}
int main()
{
    int arr[7];
    for(int i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int res=binary(arr,0,6,k);
    printf("%d",res);
}
