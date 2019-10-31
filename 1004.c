#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i,n;

int main()
{
	scanf("%d\n", &n);
	struct student{
		//char[10] name;
		//char[10] std_num;
		char name[11];
		char std_num[11];
		int sorce;
	}stu[n];
	struct student high_stu;
	struct student low_stu;

	for(i=0; i<n; i++)
	{
		scanf("%s %s %d", &stu[i].name, &stu[i].std_num, &stu[i].sorce);
	}
	high_stu = stu[0];
	low_stu = stu[0];
	for(i=0; i<n; i++)
	{
		if(stu[i].sorce > high_stu.sorce)
			high_stu = stu[i];
		if(stu[i].sorce < low_stu.sorce)
			low_stu = stu[i];
	}
	printf("%s %s\n", high_stu.name, high_stu.std_num);
	printf("%s %s\n", low_stu.name, low_stu.std_num);

	return 0;
}