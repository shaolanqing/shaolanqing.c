#include<stdio.h>
int max(int a[3][4])     //���ά��������ֵ
{
	int i,j,m;
	m=a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
	     if(m<a[i][j])
		m=a[i][j];
	
	return m ;
}
int main()
{int i,j,k; 
    int a[3][4];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
		k=max(a); 
		
			
		printf("%d\n",k);
		return 0;
}
