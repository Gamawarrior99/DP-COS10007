#include <stdio.h>
#include <math.h>



int main()
{
	
	
	int ans;
	printf("input a value ");
	scanf("%d", &ans);
	
	int count, i = 0;
			
			 while(ans != 0)
				{
					ans /= 10;
					++count;
					printf("%d", count);
				}
				
	
	if (ans <= 10)
	{
		printf("Invalid input Please Re-nter");
	}
	else
		if ((ans >=10) && (ans <=100))
	{
		printf("12");
		
		int D1, D2, SN, count;
		D1 = ans/10;
		D2 = ans %10;
		
		printf ("%d%d", D2,D1);
	}
	else 
		if ((ans >=100) && (ans <=999))
		{
			printf("13");
			int LD, FD, SN, count, temp;
			
			temp = ans;
			LD = temp % 10;
			count = (int)log10(temp);
 
				while(temp>=10)
				{
					temp /= 10;
				}
			FD = temp;
			SN = (LD * pow(10, count) + FD) + (ans - (FD * pow(10, count) + LD));
			printf("%d is swapped to %d\n", ans, SN);
		}
		else
			if (ans >999)
		{
			printf("1");
			
				printf("2");
				
				int d[count];
				while(ans > 0)
				{
					d[i]= ans % 10   ;
					ans /= 10   ;           
					++i;
					d[i] = (d[i]+ count+1)/10;
				}
				printf("3");
				
				while (i<0)
				{
					printf("%d", d[i]);
					--i;
					
				}
				printf("4");
			
		
		}
		
		else 
			if(count = 8)
			{
				int d[8], i, temp;
				while(i < 8)
				{
					d[i]= ans % 10;
					ans /= 10;           
					++i;
				
				}

					temp = d[1];
					d[1]= d[8];
					d[8] = temp;
					
					temp = d[2];
					d[2]= d[7];
					d[7] = temp;

					temp = d[3];
					d[3]= d[6];
					d[6] = temp;
					
					temp = d[4];
					d[4]= d[5];
					d[5] = temp;
					
			while (i<0)
				{
					printf("%d", d[i]);
					--i;
					
				}
				
				temp = d[1];
					d[1]= d[8];
					d[8] = temp;
					
					temp = d[2];
					d[2]= d[7];
					d[7] = temp;

					temp = d[3];
					d[3]= d[6];
					d[6] = temp;
					
					temp = d[4];
					d[4]= d[5];
					d[5] = temp;
					
			while (i<0)
				{
					printf("%d", d[i]);
					--i;
					
				}
			
					
}
}
