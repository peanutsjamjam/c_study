#include <cstdio>

char *str_or(char *s, const char *s1, const char *s2) {
	for (int i=0; i<7; i++)
		s[i] = s1[i] | s2[i];
	return s;
}

char *str_and(char *s, const char *s1, const char *s2) {
	for (int i=0; i<7; i++)
		s[i] = s1[i] & s2[i];
	return s;
}

int main(int argc, char **argv) {
	char nengou[][7] = { "明治", "大正", "昭和", "平成", "令和"};
	char str[7];

	printf("二つの年号を or 。\n");
	for (int i1=0; i1<5; i1++) {
		for (int i2=i1+1; i2<5; i2++) {
			printf("%s | %s = %s\n", nengou[i1], nengou[i2], str_or(str, nengou[i1], nengou[i2]));
		}
	}
	printf("\n二つの年号を and 。\n");
	for (int i1=0; i1<5; i1++) {
		for (int i2=i1+1; i2<5; i2++) {
			printf("%s & %s = %s\n", nengou[i1], nengou[i2], str_and(str, nengou[i1], nengou[i2]));
		}
	}

	return 0;
}
