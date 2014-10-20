
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	char arr[32];
	char *f;
	unsigned int num, dig, i, d, sum = 0;

	while((f = fgets(arr, 32, stdin)) != NULL){
		dig = strlen(f) - 1; // digit

		for(i = 1; i <= dig; i++){
			if(i > 1){
				d = d * 10;
			} else {
				d = i;
			}

			if(f[i -1] >= '0' && f[i -1] <= '9') {
				num = (f[dig - i] - '0') * d;
				sum = sum + num;
			}
		}	
		printf("sum : %d\n", sum);
	}
	return 0;
}

