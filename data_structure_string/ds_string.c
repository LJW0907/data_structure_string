#include <stdio.h>
#include <string.h>

int strlen_user(char *str) {
	int len = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		len++;
	}

	return len;
}

int read_line(char* str, int limit) { //단점을 모두 보완한 문자열 입력 함수
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < limit)
			str[i++] = ch;

	str[i] = '\0';

	return i; //문자열 길이 반환
 }

int main() {
	char str[10];

	while (1) {
		printf("& ");

		//scanf_s("%[^\n]*c", str, 10);
		//gets(str); 안전하지 않으므로 사용 지양
		fgets(str, 10, stdin); //stdin(표준 입출력) 방식으로 100글자를 입력해서 str에 저장
		str[strlen(str) - 1] = '\0';
		//fgets 단점 : 줄바꿈 문자(\n)까지 포함해서 str로 입력하기 때문에 오차 발생

		printf("%s:%d\n", str, strlen_user(str));
	}
}