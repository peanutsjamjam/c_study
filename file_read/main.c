#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <err.h>
#include <errno.h>




int main(int argc, char **argv) {
	int fd, i;
	char buf[32];
	ssize_t size;

	fd = open("/COPYRIGHT", O_RDONLY);
	if (fd == -1) {
		err(1, ":");
	}

	while ((size = read(fd, buf, 32)) > 0) {
		for (i=0; i<size; i++) {
			fputc(buf[i], stdout);
		}
	}
	if (size == 0) {
		close(fd);
	} else {
		err(1, ":");
	}


	return 0;
}
