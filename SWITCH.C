#include<stdio.h>
int main()
{
int ch;
printf("\n 1.pizza \n2. burger \n3. pasta \n 4.french fries \n 5.sandwich\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:
		printf("food item -  pizza\n");
		printf("price -239\n");
		break;
	case 2:
		printf("food item - burger\n");
		printf("price -129\n");
		break;
	case 3:
		printf("food item -pasta\n");
		printf("price -179\n");
		break;
	case 4:
		printf("food item -french fries\n");
		printf("price -99\n");
		break;
	case 5:
		printf("food item -sandwich\n");
		printf("price -149\n");
		break;
	default:
		printf("invalid choice");

		}
	 return 0;
	 }


