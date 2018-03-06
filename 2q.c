#include <stdio.h>

int main(void) {
	int a[10],i,s=0,f=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
	if(a[i]>f)
	{
              s=f;
              f=a[i];
	}
	}
	printf("%d \t %d are largest number",s,f);
	return 0;
}
