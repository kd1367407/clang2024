#include <stdio.h>
main()
{
	int a=1,an=0;
	
	while (an<=300) {
		printf("%d+",a);
		a++;
		an += 1;
	}
	printf("\b=%d", an);
}