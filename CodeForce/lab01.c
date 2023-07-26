#include <stdio.h>
int main(){

    int a[100];
    int n,i,pos=-1,item,pass=0,swap=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your data : ");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }

    printf("Your array :");
    for(i=0;i<n;i++){
       printf("%d\t",a[i]); }

    int temp,j;
    for(i=0;i<n-1;i++){
       for(j=0;j<n-1-i;j++){
          if(a[j]>a[j+1]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
              swap++;
          }
       }
     pass++;
    }

    printf("\n\nPasses: %d",pass);
    printf("\nSwaps: %d",swap);
    printf("\nYour array :");
    for(i= 0;i<n;i++){
       printf("%d\t",a[i]);
    }
return 0;
}
