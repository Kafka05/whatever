#include <stdio.h>
int main()
{
   int a[100],pos,i,n,ele;
   printf("Enter number of elements: ");
   scanf("%d",&n);

   printf("Input array elements: ");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   printf("Input element to insert: ");
   scanf("%d",&ele);

   printf("Input position where to insert: ");
   scanf("%d",&pos);

   for(i=n-1;i>=pos-1;i--){
      a[i+1]=a[i];
   }
   a[pos-1]=ele;

   printf("\nResultant array is\n");
   for(i=0;i<=n;i++){
      printf("%d ",a[i]);
   }
   return 0;
}
