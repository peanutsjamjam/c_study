
#include <cstdio>
#include <err.h>
#include <unistd.h>

extern int errno;
static int lineno;

void do_line(const char *buf) {
	int idx;

	for (idx=0; buf[idx]!='\n' && buf[idx]!=0; idx++) {
		if (lineno==1 && idx==0) {
			printf("%02x\n", buf[idx]);
		}
	}
	printf("%d: %s", lineno, buf);
}

void do_file(const char *path) {
	FILE *fp;
	char buf[2048];

	if ((fp = fopen(path, "r")) == NULL) {
		err(1, "%s", path);
	}
	lineno = 0;
	while (fgets(buf, sizeof(buf), fp) != NULL) {
		lineno++;
		do_line(buf);
	}

	if (ferror(fp)) {
		err(1, "%s", path);
	}

	fclose(fp);
}

void usage() {
	fprintf(stderr, "usage:\n");
	fprintf(stderr, "\tprogram [-b] file...\n");
}

int main(int argc, char **argv) {
	int ch;
	while ((ch = getopt(argc, argv, "bf:")) != -1) {
		switch (ch) {
			case 'b':
				printf("b\n");
				break;
			case 'f':
				printf("f %s\n", optarg);
				break;
			default:
				usage();
		}
	}
	argc -= optind;
	argv += optind;
	for (int i=0; i<argc; i++) {
		do_file(argv[i]);
	}
	return 0;
}
