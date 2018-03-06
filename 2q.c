#include <stdio.h>

int main(void) {
	int a[2],i,s=0,f=0;
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
	if(a[i]>f)
	{
              s=f;
              f=a[i];
	}
	}
	printf("%d is largest number",f);
	return 0;
}
