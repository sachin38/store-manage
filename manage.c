#include <stdio.h>

struct goods
{
	char item[10];
	int price;
	float quantity;
	float itotal;
};

int main()
{
	int i, sold;
	float total = 0;

	struct goods sale[20];

	printf("Enter the number of items sold: ");
	scanf("%d", &sold);
	printf("\n\n\n");

	for(i=0; i<sold; i++)
	{
		printf("Enter the name of item %d: ", i+1);
		scanf("%s", sale[i].item);
		printf("Enter the price of item %d: ", i+1);
		scanf("%d", &sale[i].price);
		printf("Enter the quantity of item %d: ", i+1);
		scanf("%f", &sale[i].quantity);

		printf("\n\n\n");
		
		sale[i].itotal = sale[i].price * sale[i].quantity;
		total = total + sale[i].itotal;
	}

	for(i=0; i<sold; i++)
	{
		printf("%s %.2f kg cost = %.2f\n", sale[i].item, sale[i].quantity, sale[i].itotal);
	}

	printf("Total price: %.2f\n\n\n\n", total);

	return 0;
}
