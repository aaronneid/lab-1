//Lab 1 B

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	float cost;
	float price;
	float profit;
	
	printf("Please input the manufacturing cost of the item. \n> $");
	scanf("%f", &cost);
	printf("Please input the customer sell price of the item. \n> $");
	scanf("%f", &price);
	profit = cost - price;

	if(profit > 0)
		printf("This item makes a profit of $%.2f per unit sold!\n", profit);
	else{
		profit *= -1;
		printf("This item losses $%.2f per unit sold!\n", profit);
	}
	
	return EXIT_SUCCESS;
}