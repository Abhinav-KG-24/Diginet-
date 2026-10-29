#include<stdio.h>
int main(){
    int i,n,largest,smallest,a[10];
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the values \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    largest = 0;

    for(i=0;i<n;i++){
        if(largest<a[i]){
            largest = a[i];
        }
    }

    smallest = a[0];

    for(i=0;i<n;i++){

        if (smallest>a[i])
        {
            smallest = a[i];
        }
        
    }

    printf("The largest number is %d and the smallest number is %d  ",largest,smallest);



    return 0;
}