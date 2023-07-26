#include <stdio.h>

int pal(int n, int a[100]){
    int i,temp=0;
         for(i=0;i<=n/2 && n>0;i++){
                if (a[i]!= a[n-i-1]){
                temp = 1;
                break;
            }
        }
    if(temp==1){
        return 0;}
    else{
        return 1;}
}

int main() {
    int n,i,a[100];
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    printf("Enter elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(pal(n,a)){
            printf("\nThe array is a palindrome.");}
    else{
        printf("\nThe array is not a palindrome.");}

    return 0;
}
