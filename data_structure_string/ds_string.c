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
	//gets(str); �������� �����Ƿ� ��� ����
	//fgets(str, 100, stdin); //stdin(ǥ�� �����) ������� 100���ڸ� �Է��ؼ� str�� ����

	printf("%s:%d", str, strlen_user(str));
}