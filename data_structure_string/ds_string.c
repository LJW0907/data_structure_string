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
	//gets(str); 안전하지 않으므로 사용 지양
	//fgets(str, 100, stdin); //stdin(표준 입출력) 방식으로 100글자를 입력해서 str에 저장

	printf("%s:%d", str, strlen_user(str));
}