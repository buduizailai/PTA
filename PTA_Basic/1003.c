#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*条件一最最基本，暂且不管。条件二，xPATx 就是正确的形式；在此基础上，如果 aPbTc 是正确的，那么 aPbATca 也是正确的。如果二者放在一起考虑，
就是中间每增加一个A，后面就增加一个a，似乎数学关系出来了。我们知道aPbTc中a b c 段都只能包含“A"，其长度分别为len(a)、len(b)、len(c)，
则其关系满足len(a)*len(b) = len(c)！这完美的契合了条件二与条件三，xPATx 就是当len(b) = 1，（a=x,c=c,b=A）的情况，
在此基础上演化到条件三B中每增加一个A，c中相应增加一段”a“以上的乘法关系式成立。*/

int i, j, k;//i is 输入字符串个数也是行数，j is 中间变量
char ch[10][101];
int s[4];//s[0]保存第一个P前a的个数也是第一个P的序号，s[1]保存最后一个T的序号，s[2]保存最后一个T和第一个P之间的A的个数，s[3]保存最后一个T之后的a的个数

int main()
{
	scanf("%d", &i);
	//gets(i);
	for(j=0; j<i; j++)
	{
		//gets(ch[j]);
		scanf("%s", ch[j]);
	}
	for(j=0; j<i; j++)
	{
			for(k=0; k<strlen(ch[j]); k++)//确保不存在P A T之外的字符
			{
				if((ch[j][k] != 'A') && (ch[j][k] != 'P') && (ch[j][k] != 'T'))
				{
					printf("NO\n");
					//break;
					goto jixu;
				}
			}
			for(k=0; k<strlen(ch[j]); k++)//寻找第一个P
			{
					if(ch[j][k] == 'P')
					{
						s[0] = k;
						break;
					}		
			}
			for(k=strlen(ch[j]); k>0; k--)//寻找最后一个T
			{
					if(ch[j][k] == 'T')
					{
						s[1] = k;
						break;
					}		
			}
			for(k=s[0]+1; k<s[1]; k++)//确保第一个P与最后一个T之间没有P T
			{
				if((ch[j][k] == 'P') || (ch[j][k] == 'T'))
				{
					printf("NO\n");
					break;
				}
			}
			s[2] = s[1] - s[0] - 1;
			s[3] = strlen(ch[j]) - s[1] - 1;
			if(((s[0]*s[2]) == s[3]) && (strlen(ch[j]) >= 3))
				printf("YES\n");
			else
				printf("NO\n");
		jixu:
			//k = 0;
		continue;
	}

	return 0;		
}