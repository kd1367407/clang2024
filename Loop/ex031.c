#include<stdio.h>
main()
{
	int nu, an;
	an = 0;
	for (nu = 1; nu <= 10; nu += 1) {
		an += nu;
		printf("1から%dまでの和=%d\n", nu, an);
	}
}