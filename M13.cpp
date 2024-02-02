#include <stdio.h>

void House(int t) 
{
    int checkin, checkout;
    printf("Chechin: ");scanf("%d", &checkin);
    printf("Checkout: ");scanf("%d", &checkout);
    
    
    int totaltime = 0;
    bool isovernight = checkout < checkin;
    if(isovernight)
	{
		totaltime = 24 - checkin + checkout;
	}
	else
	{
		totaltime = checkout-checkin;
	}
	printf("Total usage time is :%d\n ",totaltime);
    
    if( totaltime > 24) 
	{
		printf("Invalid input time!");
	} 

	int amounttopay1 = 0;
	int amounttopay = 0;
	
	if(totaltime<2)
	{
		amounttopay1 = (totaltime*70);
	}
	else
	{
		amounttopay1 = ((totaltime-2)*50+140);
	}
	
	if(!isovernight)
	{
		amounttopay = amounttopay1;
	}
	
    if(isovernight)
	{
		if(checkout<8)
		{
			amounttopay = amounttopay1 + 160;
		}
		else
		{
			amounttopay = amounttopay1 + 160 + (checkout - 8)*40;
		}
	}	
	printf("The total amount to be paid by guests when renting a room is :%d\n",amounttopay);
}

