#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	FILE *fp;
	fp = fopen("test.txt", "r");
	while((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
	}
	if(fclose(fp) != 0)
		printf("Error!!!\n");
	else printf("Successfully closed!\vn");
	return 0;
}

