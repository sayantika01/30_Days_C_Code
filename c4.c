#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    int sum=0;
    int i;
    //Array elements
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //summation of array elements
    for(i=0;i<n;i++){
        sum+=a[i];

    }
    float mean=(float)sum/n;
    printf("The sum of the elements is=%d\n",sum);
    printf("The mean of the elements is=%.2f",mean);
    return 0;
}