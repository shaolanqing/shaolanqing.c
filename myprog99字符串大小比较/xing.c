//�ַ����Ƚ�
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][10],t[10];//t[10]��������һ������ַ�
	int i,j;
	for(i=0;i<3;i++)
	gets(str[i]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i;j++)//�����һ���ַ���ͬ����Ƚϵڶ������Դ�����
			if(strcmp(str[j],str[j+1])>0)//str[j]>str[j+1],һ���ﰤ���ַ��ıȽ�
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


//��ָ��ķ�ʽ���Ƚ��ַ�����С
#include<stdio.h>
#include<string.h>
int main()
{
	char *p[3],t[10];//*pָ����
	int i,j;
	for(i=0;i<3;i++)
	{
		p[i]=(char*)malloc(10*sizeof(char));//Ϊp[i]����ÿ������Ŀռ�
		gets(p[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i;j++)
			if(strcmp(p[j],p[j+1])>0)//ֵ�ñȽ�
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


