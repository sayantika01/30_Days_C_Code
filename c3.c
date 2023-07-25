#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    printf("The array is:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}