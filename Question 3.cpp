#include <stdio.h>
int main()
{	
	int count=0,total1=0,total2=0,total3=0,total4=0,grandtotal=0,quantity1=0,quantity2=0,quantity3=0,quantity4=0;
	char firstsnack,secondsnack,thirdsnack,fourthsnack;
	printf("Please select from the following menu \n");
	printf("B=Burger (Rs200) \n");
	printf("F=French Fries (Rs50) \n");
	printf("P=Pizza (Rs500) \n");
	printf("S=Sandwiches (Rs150) \n");
	printf("How many types of snacks you need to order: \n");
	scanf("%d",&count);
	switch (count)
	{
		case 1:
			printf("Enter first snack you want to order: \n");
			scanf(" %c",&firstsnack);
			printf("Enter the quantity you want: \n");
			scanf("%d",&quantity1);
			switch (firstsnack)
			{
				case 'B':
					total1 = total1 + (200*quantity1);

					break;
				case 'F':
					total1 = total1 + (50*quantity1);
					break;
				case 'P':
					total1 = total1 + (500*quantity1);
					break;	
				case 'S':
					total1 = total1 + (150*quantity1);
					break;
				default:
					printf("Invalid choice");
			}
			printf("You have ordered! \n");
			if (firstsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity1,total1);
			}
			grandtotal=total1+total2+total3+total4;
			printf("Total: %d \n",grandtotal);
			printf("Thankyou for the order... have a nice day");
			break;
		case 2:
			printf("Enter first snack you want to order: \n");
			scanf(" %c",&firstsnack);
			printf("Enter the quantity you want: \n");
			scanf(" %d",&quantity1);
			switch (firstsnack)
			{
				case 'B':
					total1 = total1 + (200*quantity1);
					break;
				case 'F':
					total1 = total1 + (50*quantity1);
					break;
				case 'P':
					total1 = total1 + (500*quantity1);
					break;	
				case 'S':
					total1 = total1 + (150*quantity1);
					break;
				default:
					printf("Invalid choice");
	        }
	        printf("Enter second snack you want to order: \n");
			scanf(" %c",&secondsnack);
			printf("Enter the quantity you want: \n");
			scanf(" %d",&quantity2);
			switch (secondsnack)
			{
				case 'B':
					total2 = total2 + (200*quantity2);
					break;
				case 'F':
					total2 = total2 + (50*quantity2);
					break;
				case 'P':
					total2 = total2 + (500*quantity2);
					break;	
				case 'S':
					total2 = total2 + (150*quantity2);
					break;
				default:
					printf("Invalid choice");
			}
			printf("You have ordered! \n");
			if (firstsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity1,total1);
			}
			
			if (secondsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity2,total2);
			}
			grandtotal=total1+total2+total3+total4;
			printf("Total: %d \n",grandtotal);
			printf("Thankyou for the order... have a nice day");
			break;
		case 3:
			printf("Enter first snack you want to order: \n");
			scanf(" %c",&firstsnack);
			printf("Enter the quantity you want: \n");
			scanf("%d",&quantity1);
			switch (firstsnack)
			{
				case 'B':
					total1 = total1 + (200*quantity1);

					break;
				case 'F':
					total1 = total1 + (50*quantity1);
					break;
				case 'P':
					total1 = total1 + (500*quantity1);
					break;	
				case 'S':
					total1 = total1 + (150*quantity1);
					break;
				default:
					printf("Invalid choice");
			}
			printf("Enter second snack you want to order: \n");
			scanf(" %c",&secondsnack);
			printf("Enter the quantity you want: \n");
			scanf(" %d",&quantity2);
			switch (secondsnack)
			{
				case 'B':
					total2 = total2 + (200*quantity2);
					break;
				case 'F':
					total2 = total2 + (50*quantity2);
					break;
				case 'P':
					total2 = total2 + (500*quantity2);
					break;	
				case 'S':
					total2 = total2 + (150*quantity2);
					break;
				default:
					printf("Invalid choice");
			}
			printf("Enter third snack you want to order: \n");
			scanf(" %c",&thirdsnack);
			printf("Enter the quantity you want: \n");
			scanf(" %d",&quantity3);
			switch (thirdsnack)
			{
				case 'B':
					total3 = total3 + (200*quantity3);
					break;
				case 'F':
					total3 = total3 + (50*quantity3);
					break;
				case 'P':
					total3 = total3 + (500*quantity3);
					break;	
				case 'S':
					total3 = total3 + (150*quantity3);
					break;
				default:
					printf("Invalid choice");
			}
			printf("You have ordered! \n");
			if (firstsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity1,total1);
			}
			
			if (secondsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity2,total2);
			}
			if (thirdsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity3,total3);
			}
			else if (thirdsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity3,total3);
			}
			else if (thirdsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity3,total3);
			}
			else if (thirdsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity3,total3);
			}
			grandtotal=total1+total2+total3+total4;
			printf("Total: %d \n",grandtotal);
			printf("Thankyou for the order... have a nice day");
			break;
		case 4:
			printf("Enter first snack you want to order: \n");
			scanf(" %c",&firstsnack);
			printf("Enter the quantity you want: \n");
			scanf("%d",&quantity1);
			switch (firstsnack)
			{
				case 'B':
					total1 = total1 + (200*quantity1);

					break;
				case 'F':
					total1 = total1 + (50*quantity1);
					break;
				case 'P':
					total1 = total1 + (500*quantity1);
					break;	
				case 'S':
					total1 = total1 + (150*quantity1);
					break;
				default:
					printf("Invalid choice");
			}
			printf("Enter second snack you want to order: \n");
			scanf(" %c",&secondsnack);
			printf("Enter the quantity you want: \n");
			scanf(" %d",&quantity2);
			switch (secondsnack)
			{
				case 'B':
					total2 = total2 + (200*quantity2);
					break;
				case 'F':
					total2 = total2 + (50*quantity2);
					break;
				case 'P':
					total2 = total2 + (500*quantity2);
					break;	
				case 'S':
					total2 = total2 + (150*quantity2);
					break;
				default:
					printf("Invalid choice");
			}
			printf("Enter third snack you want to order: \n");
			scanf(" %c",&thirdsnack);
			printf("Enter the quantity you want: \n");
			scanf(" %d",&quantity3);
			switch (thirdsnack)
			{
				case 'B':
					total3 = total3 + (200*quantity3);
					break;
				case 'F':
					total3 = total3 + (50*quantity3);
					break;
				case 'P':
					total3 = total3 + (500*quantity3);
					break;	
				case 'S':
					total3 = total3 + (150*quantity3);
					break;
				default:
					printf("Invalid choice");
			}
			printf("Enter fourth snack you want to order: \n");
			scanf(" %c",&fourthsnack);
			printf("Enter the quantity you want: \n");
			scanf(" %d",&quantity4);
			switch (fourthsnack)
			{
				case 'B':
					total4 = total4 + (200*quantity4);
					break;
				case 'F':
					total4 = total4 + (50*quantity4);
					break;
				case 'P':
					total4 = total4 + (500*quantity4);
					break;	
				case 'S':
					total4 = total4 + (150*quantity4);
					break;
				default:
					printf("Invalid choice");
			}
			
			printf("You have ordered! \n");
			if (firstsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity1,total1);
			}
			else if (firstsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity1,total1);
			}
			
			if (secondsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity2,total2);
			}
			else if (secondsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity2,total2);
			}
			if (thirdsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity3,total3);
			}
			else if (thirdsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity3,total3);
			}
			else if (thirdsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity3,total3);
			}
			else if (thirdsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity3,total3);
			}
			if (fourthsnack=='B')
			{
				printf("%d Burger(s) value %d PKR \n",quantity4,total4);
			}
			else if (fourthsnack=='F')
			{
				printf("%d French Fries (s) value %d PKR \n",quantity4,total4);
			}
			else if (fourthsnack=='P')
			{
				printf("%d Pizza(s) value %d PKR \n",quantity4,total4);
			}
			else if (fourthsnack=='S')
			{
				printf("%d Sandwich(es) value %d PKR \n",quantity4,total4);
			}
			grandtotal=total1+total2+total3+total4;
			printf("Total: %d \n",grandtotal);
			printf("Thankyou for the order... have a nice day");
			break;
	}
}
			
	
	
