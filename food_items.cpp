#include<stdio.h>
main()
{
    printf("right any no. between 1 and 5:");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("pizza \n ₹299");
        break;
        case 2: printf("burger \n ₹249");
        break;
        case 3: printf("samosa \n ₹149");
        break;
        case 4: printf("cheese chilli \n ₹99");
        break;
        case 5: printf("masala dosa \n ₹139");
        break;
        default: ("you have to  enter valid no. ");
        
    }
}