#include <cstdio>
#include <cstdlib>

void perfect (void)
{
	int num = 1;
	int perfect = 1;
	int sum = 0;
	for (num= 1; num < 10001; num = num + 1)
	{
		sum = 0; 
		//printf ("the number is %i \r\n", num);
		for (perfect = 1; perfect < num; perfect = perfect +1)
		{
		 if (num % perfect == 0)
		 {
			 sum = sum + perfect; 
			 //printf ("the perfect number is %i \r\n" , perfect); 
		 }

		}
		if (perfect == sum)
		{
			printf ("the perfect number is %i \r\n" , num);
		}
		
	}

	return; 
}