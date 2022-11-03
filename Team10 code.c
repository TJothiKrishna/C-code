#include <stdio.h>
    char name[50];
    char cod1[10];
    char phno[50];
    char add1[150];
    int total=0;
    int totalcost=0;
    int cost[10];
    
int main()
{
    printf("Welcome to our Online Purchase System\n\n");
    personaldet();
    menu();
}

int personaldet()
{
    printf("Enter your name:");
    gets(name);
    printf("Enter your phone number:");
    gets(phno);
    printf("Enter your address:");
    gets(add1);
    printf("Cash on delivery(YES/NO):");
    gets(cod1);
    printf("\n");
    printf("User Details:\n");
    printf("Name:%s",name);
    printf("\n");
    printf("Phone Number :%s",phno);
    printf("\n");
    printf("Address:%s",add1);
    printf("\n");
    printf("Cash on delivery ? :%s",cod1);
return 0;
    
}

int menu()
{
	while(1)
	{
	
    printf("\n\n!!!!!!!   Menu   !!!!!!!!\n\n1.Computer Accessories\n2.Shoes\n3.Mobiles\n4.Any other number to exit\nEnter product number:");
    int i;
    scanf("%d",&i);
    if(i>3)
    {
    	break;
	}
    switch(i)
    {
        case 1:
        comacc();
        break;
        
        case 2:
        shoes();
        break;
        
        case 3:
        break;
    }
}
}

int comacc()
{
while(1){

    int accessoriesChoice;
    printf("\nEnter\n1.Sandisk 16 GB - Rs.455\n2.Logitech Mouse - Rs.500\n3.Dell Keyboard - Rs.550\nAny other number to exit\n");
    scanf("%d",&accessoriesChoice);
    cost[0]=455;
    cost[1]=500;
    cost[2]=550;
    if(accessoriesChoice>3){
    	break;
}
    switch(accessoriesChoice)
    {
     case 1:
     {
      int num;
      printf("You chose Sandisk 16GB with Rs.455.Enter number of quantity:");
      scanf("%d",&num);
      totalcost=totalcost+(cost[0]*num);
      total=total+num;
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Logitech Mouse with Rs.500.Enter number of quantity:");
      scanf("%d",&num);
      totalcost=totalcost+(cost[1]*num);
      total=total+num;
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Dell Keyboard with Rs.550.Enter number of quantity:");
      scanf("%d",&num);
      totalcost=totalcost+(cost[2]*num);
      total=total+num;
      break;
     }
     default:
    
	  break;
    }
}
}
int shoes()
{
while(1){

    int accessoriesChoice;
    printf("\nEnter\n1.Adidas - Rs.855\n2.Nike - Rs.700\n3.Puma - Rs.750\nAny other number to exit\n");
    scanf("%d",&accessoriesChoice);
    cost[3]=855;
    cost[4]=700;
    cost[5]=750;
    if(accessoriesChoice>3){
    	break;
}
    switch(accessoriesChoice)
    {
     case 1:
     {
      int num;
      printf("You chose Adidas shoe with Rs.855.Enter number of quantity:");
      scanf("%d",&num);
      totalcost=totalcost+(cost[3]*num);
      total=total+num;
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Nike shoe with Rs.700.Enter number of quantity:");
      scanf("%d",&num);
      totalcost=totalcost+(cost[4]*num);
      total=total+num;
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Puma shoe with Rs.750.Enter number of quantity:");
      scanf("%d",&num);
      totalcost=totalcost+(cost[5]*num);
      total=total+num;
      break;
     }
     default:
    
	  break;
    }
}
}

