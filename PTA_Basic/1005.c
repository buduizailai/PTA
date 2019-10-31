#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i,j,k,m,n;
int table[101] = {0};//保存测试值

int main()
{
	scanf("%d\n", &k);
	//int table[101] = {0};//保存测试值
	//int a[];

	for(i=0; i<k; i++)//输入k个测试值
	{
		scanf("%d", &n);
		table[n] = 1;
	}

	for(i=1; i<=100; i++)
	{
		if(table[i])
		{
			j = i;
			while((j>1) && (j>=i))
			{
				if(j%2)
					j = (3*j+1)/2;//注意，C语言中乘号*一定不能省略
				else
					j = j/2;
				if(table[j])
				{
					table[j] = 0;
					m = k-1;
				}
			}
		}
	}

	for(i=100; i>=1; i--)
	{
		if(table[i] == 1)
		{
			//m--;
			printf("%d ", i);
		}
		//else if(table[i] && (m==1))
		//	printf("%d", i);
	}

	return 0;
}