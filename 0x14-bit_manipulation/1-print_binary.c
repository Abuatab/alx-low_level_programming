#include "main.h"

void binPrint(unsigned long int n)
{
	int l = sizeof(unsigned long int) * 8;
	int z = 1;
	unsigned long int m = 1UL << (l - 1);

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (!(n & m))
	{
		z++;
		m >>= 1;
	}

	for (int i = 0; i < l - z; i++)
	{
		unsigned long int b = (n & m) ? 1 : 0;

		printf("%lu", b);
		m >>= 1;
	}
}
