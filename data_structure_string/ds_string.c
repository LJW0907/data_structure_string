#include <stdio.h>
#include <string.h>

int strlen_user(char *str) {
	char word;
	int len = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		len++;
	}

	return len;
}

int main() {
	char str[100];

	printf("& ");
	
	scanf("%[^\n]s", str);

	printf("%s:%d", str, strlen_user(str));
}