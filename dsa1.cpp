#include<stdio.h>
main()
{
	struct shopping_list
	{
		char product_name[50];
		int product_model;
		int product_price;
			
	} sl;
	

	int i,j,k;
	
	printf("enter the amount of items you have brought: ");
	scanf("%d",&j);
	
	printf("Enter the details of the product you have brought: \n");
	
	
	for(i=1;i<=j;i++)
	{
	
		printf("enter the product name: \n");
		scanf("%s",&sl.product_name);
	
		printf("enter the model number of the product: \n");
		scanf("%d",&sl.product_model);
		
		printf("enter the price of the product: \n");
		scanf("%d",&sl.product_price);
		printf("----------------------------------------------------------------------------\n");
		printf("items you have brought are: \n");
		printf("Item no.:          |%d\n",i);
		printf("product Name:      |");
	    puts(sl.product_name);
	    printf("product model no.: |%d\n",sl.product_model);
	    printf("product price:     |%d\n", sl.product_price);
		printf("----------------------------------------------------------------------------\n");	

	}

	
}
