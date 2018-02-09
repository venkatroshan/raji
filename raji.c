#include <stdio.h>
void main()
{
	int num,power,i,val=1;
	scanf("%d%d",&num,&power);
	for(i=1;i<=power;i++)
	{
		val=val*num;
	}
	printf("%d",val);
	
}
