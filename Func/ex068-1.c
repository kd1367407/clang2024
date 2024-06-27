#include<stdio.h>
main() {
	int a, b, c, d;
	printf("3‚Â‚Ì®”‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í>");
	d=scanf("%d%d%d", &a, & b, &c);//d‚É‚Í‚R‚ª“ü‚éB“ü—Í‚·‚éŒÂ”‚ª3‚Â‚¾‚©‚ç
	printf("d=%d a=%d b=%d c=%d\n", d, a, b, c);

	printf("®”‚ð“ü—Í(ctrl Z‚ÅI—¹)a>");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		printf("®”‚ð“ü—Í(ctrl Z‚ÅI—¹)a>");
	}
}