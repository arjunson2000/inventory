#include<stdio.h>
main()
{
	int i,j,k,l;
	
	
	printf("enter the amount of items you have brought: \n");
	scanf("%d",&i);
	
	
	struct shopping_list
	{
		char product_name[50];
		int product_model;
		int product_price;
			
	} sl[i-1];
	
	
	printf("Enter the details of the product you have brought: \n");
	
	
	for(j=0;j<=i-1;j++)
	{
	
		printf("enter the product name: \n");
		scanf("%s",&sl[j].product_name);
		
		printf("enter the model number of the product: \n");
		scanf("%d",&sl[j].product_model);
		
		printf("enter the price of the product: \n");
		scanf("%d",&sl[j].product_price);
	}
	
	printf("Sr. No.  |\t Product name |\t Product model |\t Product price \n");
	
	for(k=0;k<=i-1;k++)
	{
//		printf("Sr. No. |\t Product name |\t Product model |\t Product price \n");
		printf("%d        \t %s        \t %d         \t 	 %d \n",k+1,sl[k].product_name,sl[k].product_model,sl[k].product_price);
		
	}
	
}
