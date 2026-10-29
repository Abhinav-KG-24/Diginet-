#include<stdio.h>
int main(){
    
    int i,sum,a[10],n;

    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the numbers \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    sum = 0;

    for(i=0;i<n;i++){
        sum = sum+a[i];
    }

    printf("Sum of all numbers is %d",sum);


    return 0;
}