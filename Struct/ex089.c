#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	printf("–¼‘O‚ğ“ü—Í>");
	gets( data.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í>");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], &data.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í>");
	scanf("%s",data.blood);
	
	printf("–¼‘O:%s\n", data.name);
	printf("%d”N%dŒ%d“ú¶‚Ü‚ê\n", data.birth[0], data.birth[1], data.birth[2]);
	printf("ŒŒ‰tŒ^:%s\n", data.blood);
}