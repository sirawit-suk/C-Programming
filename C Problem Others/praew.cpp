#include <stdio.h>
int main()
{
 	long x=0,i=0,temp=0,box[33]={},count=0,digit=32,check =0,sum = 0;
 	
	printf(" ** Display integer in Hexadecimal and 2's Complement format ***\nEnter a number : ");
 	scanf("%d",&x); // insert answers in x

 	if(x>=0) // If x is positive
 	{
	 	printf("       %d in Hexadecimal    : %08x\n",x,x);
	  	printf("       %d in 2's Complement :",x);
	 	 
		while(digit > 0) // 32 bits
	  	{
			temp = x % 2;   // get remainder
	  		box[digit-1] = temp; // store the bit in box[]
	  		x /= 2;   // divide by 2 to get the rest of it ...
	  		digit--;   // take it out 1 bit 
	  	}
	  	for(temp=0;temp<32;temp++) // get value out of the box...
	  	{
	   		if(count%4==0)// for 4 bits
	   		{
	    		printf(" "); // make space " "
	  		} 
	   		printf("%d",box[temp]); // print 4 bits 
	   		count++;
	 	}
 	}

	else if(x<0) // If x is negative
	{
	  		printf("        %d in Hexadecimal    : %08x\n",x,x);
	  		printf("        %d in 2's Complement :",x);
	
	  		x = x*-1;
		while(digit > 0)
		{
		   temp = x % 2;
		   box[digit-1] = temp;
		   x /= 2;
		   digit--;
		}
		
		for(temp=0;temp<=31;temp++)
		{
			if(box[temp] == 0)
			{
				box[temp] = 1;
			}
			else if(box[temp] == 1)
			{
				for(check=temp; check<=31; check++)
				{
					sum+=box[check+1];				
				}
				if(sum == 0)
				{
					break;
				}
				sum = 0;
				box[temp] = 0;
			}
		} 
		     
		for(temp=0;temp<=31;temp++)
		{
		   
		    if(count%4==0)
		    {
		    	printf(" ");
			}
		   	printf("%d",box[temp]);
		  	count++;
		}
	 }
	 printf("\n");
	 return 0;
}
