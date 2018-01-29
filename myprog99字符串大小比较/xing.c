//字符串比较
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][10],t[10];//t[10]用来储存一行里的字符
	int i,j;
	for(i=0;i<3;i++)
	gets(str[i]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i;j++)//如果第一个字符相同，则比较第二个，以此类推
			if(strcmp(str[j],str[j+1])>0)//str[j]>str[j+1],一行里挨个字符的比较
			{
				strcpy(t,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],t);
			}
	}
	for(i=0;i<3;i++)
		puts(str[i]);
	return 0;
}


//用指针的方式来比较字符串大小
#include<stdio.h>
#include<string.h>
int main()
{
	char *p[3],t[10];//*p指向行
	int i,j;
	for(i=0;i<3;i++)
	{
		p[i]=(char*)malloc(10*sizeof(char));//为p[i]开辟每行所需的空间
		gets(p[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i;j++)
			if(strcmp(p[j],p[j+1])>0)//值得比较
			{
				strcpy(t,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],t);
			}
	}
	for(i=0;i<3;i++)
		puts(p[i]);
	return 0;
}*/


