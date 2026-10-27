#include<stdio.h>
int main(){


    int a[100],i,j,n;
    printf("Enter the number of elements \n");
    scanf("%d",&n);

    printf("Enter the numbers \n");
    for(i=0;i<n;i++){
        scanf("%d \n \n",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }





    return 0;
}