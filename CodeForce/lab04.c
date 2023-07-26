#include<stdio.h>
int main()
{
    int a[100],i,n,pos;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Input array elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Input position to delete: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }

    printf("\nArray elements:");
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
}
