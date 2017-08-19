#include <stdio.h>
#include <string.h>

int main()
{
	char num[100];
	int dec = 0, p, j, len;
	printf("Enter a number: ");
	gets(num);
	len = strlen(num);
	for(i=0; i<len; i++)
  {
		dec = dec * 10 + ( num[p] - '0' );
	}
	printf("%d", dec);
	return 0;
}
