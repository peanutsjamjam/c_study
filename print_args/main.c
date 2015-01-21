#include <stdio.h>

int main(int argc, char **argv) {

	int i;

	printf("argc is %d\n", argc);

	for (i=0; i<argc; i++) {
		printf("%s\n", argv[i]);
	}

	printf("%d\n", sizeof(char *));

	return 0;
}
