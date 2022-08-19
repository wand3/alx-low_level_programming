#include "main.h"
#include <stdio.h>

int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000000110000100010");
	printf("%u\n", n);

	return (0);
}
