#include <stdio.h>

int main(int argc, char **argv) {

	char name[10][32] = {
		"ABC", "DEFGHI", "JK"
	};

	printf("%c\n", name[1][2]);
	printf("%c\n", name[1][32]);

	return 0;
}
