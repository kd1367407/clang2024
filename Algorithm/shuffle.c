#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, data[20], target, work;
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	}
	for (i = 0; i < 20; i++) {
		printf("data[%2d]=%2d\n",i, data[i]);
	}
	srand(time(0));
	rand();
	for (i = 0; i < 20; i++) {
		target = rand() % 20;//1~20‚Ü‚Å‚Ìƒ‰ƒ“ƒ_ƒ€‚È”Žš‚ðì‚Á‚Ä‚é
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}
	
		
		srand(time(0));
		rand();
		for (i = 19; i > 0; i--) {
			target = rand() % i;
			work = data[i];
			data[i] = data[target];
			data[target] = work;
		}
		printf("---------------------------------\n");
	for (i = 0; i < 20; i++) {
		printf("data[%2d]=%2d\n", i, data[i]);
	}
}