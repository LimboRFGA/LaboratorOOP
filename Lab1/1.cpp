#include <cstdio>

int atoiDeBuget(char* string) {
	int rezultat = 0, i = 0;

	while (string[i] == ' ' || string[i] == '\n' || string[i] == '\r' || string[i] == '\t')
		i++;

	while (string[i] >= '0' && string[i] <= '9') {
		rezultat *= 10;
		rezultat += (string[i] - '0');
	}

	return rezultat;
}

int fisiere() {
	FILE* file = fopen("in.txt", "r");

	char text[256];
	int sum = 0;

	while (fgets(text, sizeof(text), file))
		sum += atoiDeBuget(text);
	
	printf("%d\n", sum);
	fclose(file);

	return 0;
}