#include <stdio.h>
main()
{
	char  moji;
	printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%c", &moji);
	if (0x41 <= moji <= 0x5a) {
		printf("‘å•¶Žš‚Å‚·\n");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}

}