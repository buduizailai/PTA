#include<stdio.h>

int main()
{
	int n, step = 0;
	scanf("%d", &n);
	while(n > 1)
	{
		if(n%2)
			n = (3*n + 1) / 2;
		else
			n = n / 2;
		step++;
	}

	/*if(n != 1)
	{
		printf("calculate error\n");
		return 1;
	}*/

	printf("%d\n", step);

	return 0;
}