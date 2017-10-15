#include <stdio.h>
#include <stdlib.h>
#define LENGTH 4

char *tildie(char *bits) {
	if (bits[0] == '~') {
		for (int i = 1; i - 1 < LENGTH; i++)
			bits[i] = bits[i] == '0' ? '1' : '0';
		return bits + 1;
	}
	return (bits);
}

int main(int ac, char **av) {
	if (ac == 2)
		printf("{%s}:{%s}\n", strdup(av[1]), tildie(av[1]));
	return (1);
}
