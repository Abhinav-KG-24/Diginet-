// The Product Price & Tax Calculator

#include<stdio.h>
int main(){
    char name[50];
    int id,quantity;
    float price;
    const float sales_tax = 5.0;
    
    

    printf("The Product Price & Tax Calculator \n");
    printf("Enter the name of the product \n");
    scanf("%s",name);

    printf("Enter Id of the product \n");
    scanf("%d",&id);

    printf("Enter the qudantity of the product \n");
    scanf("%d",&quantity);

    printf("Enter the unit price of the product \n");
    scanf("%2f",&price);

    printf("\n\n-------INVOICE------- \n");
    printf("%s    price : %2f \n",name,price);

    float subTotal = price*quantity;
    printf("the Sub Total amount is : %2f \n",subTotal);

    float salesTaxAmount = (sales_tax/100)*subTotal;
    printf("The sales tax amount is %2f \n\n",salesTaxAmount);

    printf("The final total cost : %2f" ,subTotal+salesTaxAmount);

}