#include <stdio.h>

void print_all_names(char name[][32]) {
	int i;

	for (i=0; i<10; i++) {
		printf("%2d, %s\n", i, name[i]);
	}
	name[0][0]++;
}

int main(int argc, char **argv) {

	char name[10][32] = {
		"ABC",
	   	"DEFGHI",
	   	"JK",
	   	"",
	   	"",
		"ABC",
	   	"DEFGHI",
	   	"JK",
		"",
		"x"
	};

	print_all_names(name);
	print_all_names(name);

	return 0;
}
