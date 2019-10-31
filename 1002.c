#include<stdio.h>
#include<string.h>

int main()
{
	int a[5];
	int i=0, j=0;
	int sum = 0;
	char pinyin[][9]={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	char ch[100];

	gets(ch);
	for(i=0; i<strlen(ch); i++)
	{
		sum = sum + ch[i] - 48;
		
	}
 
	while(sum != 0)
	{
		a[j] = sum % 10;
		sum = sum / 10;
		j++;
	}

	printf("%s", pinyin[a[j-1]]);

	for(j=j-2; j>=0; j--)
	{
		printf(" %s", pinyin[a[j]]);
	}

	return 0;

}