#include<stdio.h>

int main(){

   int n,i,a[100],temp;
   printf("Enter the number of elements: ");
   scanf("%d",&n);

   printf("Enter the elements: \n");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }

   for(i=0;i<=n/2;i++){
    temp= a[i];
    a[i]= a[n-1-i];
    a[n-1-i]=temp;
   }

   printf("\nThe reversed array is: ");
   for(i=0;i<n;i++){
    printf("%d ",a[i]);
   }
   return 0;
}
