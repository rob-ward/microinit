#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	(void)argc;
	(void) argv;
	execl("/bin/sh", "sh", NULL);
	return 0;
}

