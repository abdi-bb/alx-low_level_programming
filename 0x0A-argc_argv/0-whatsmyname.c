#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc > 1)
		printf("%d\n", argc);
	printf("%s\n", argv[0]);

	return (0);
}
