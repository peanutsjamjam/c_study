#include <stdio.h>

int main(int argc, char **argv) {

	int total = 0;
	int val, i;
	char buf[32];

	while (fgets(buf, sizeof(buf), stdin) != NULL) {
		val = 0;
		for (i=0; buf[i]>='0' && buf[i]<='9'; i++) {
			val *= 10;
			val += buf[i] - '0';
		}
		total += val;
	}

	printf("%d\n", total);

	return 0;
}
