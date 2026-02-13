#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* args[]) {
	char input[256];
	char *conf = "test -f .progrc";
	char *license = "THIS SOFTWARE IS ...\n";
	printf("%s", license);
	if (argc > 1) {
		strncpy(input, args[1], sizeof(input) - 1);
		input[sizeof(input) - 1] = '\0';
	} else {
		printf("No input argument provided.\n");
		return 1;
	}
	if (system(conf)) {
		printf("Missing .progrc\n");
	}
	printf("Input: %s\n", input);
	return 0;
}