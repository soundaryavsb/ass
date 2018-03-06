#include <stdio.h>

int main(void) {
	int a[10],i,f=0,s=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>f)
		{
			f=a[i];
		}
	}
		for(i=0;i<10;i++)
	{
		if(a[i]>s&&a[i]!=f)
		{
			s=a[i];
		}
	}
	printf("%d,%d are tha largest number");
	return 0;
}
