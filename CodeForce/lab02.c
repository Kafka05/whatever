#include<stdio.h>
int main(){

int a[20],min=999,n,i,min2=999,max=0,max2=0;
printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter elements: ");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
    if(min>a[i]){
        min=a[i];
    }
    if(max<a[i]){
        max=a[i];
    }
 }

for(i=0;i<n;i++){
    if(min2>a[i] && a[i]!=min){
        min2=a[i];
    }
    if(max2<a[i] && a[i]!=max){
        max2=a[i];
    }
}

printf("\nSecond maximum element: %d",max2);
printf("\nSecond minimum element: %d",min2);

return 0;
}
