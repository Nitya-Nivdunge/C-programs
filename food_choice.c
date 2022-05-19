#include<stdio.h>
main()
{
	//.display the menu
	printf("PICK ANY FOOD ITEM : \n 1.FRENCH FRIES \n 2.PASTA \n 3.PIZZA \n 4.BURGER \n 5.SANDWICH\n");
	//.read their choice
	int choice=0;
	scanf("%d",&choice);
	//.display based on their choice
	switch(choice)
	{
	 case 1: printf("YOU PICKED FRENCH FRIES\nPRICE IS RS.99");
	break;
	case 2: printf("YOU PICKED PASTA\nPRICE IS RS.179");
	break;
	case 3: printf("YOU PICKED PIZZA\nPRICE IS RS.239");
	break;
	case 4:printf("YOU PICKED BURGER\nPRICE IS RS.129");
	break;
	case 5: printf("YOU PICKED SANDW5ICH\nPRICE IS RS.149");
	break;
	default:printf("INVALID CHOICE\nPLEASE PICK FOOD ITEM MENTIONED IN THE MENU ONLY"); 
	}
}