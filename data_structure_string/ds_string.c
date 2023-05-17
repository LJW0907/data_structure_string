#include <stdio.h>
#include <string.h>

int strlen_user(char *str) {
	int len = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		len++;
	}

	return len;
}

int read_line(char* str, int limit) { //������ ��� ������ ���ڿ� �Է� �Լ�
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < limit)
			str[i++] = ch;

	str[i] = '\0';

	return i; //���ڿ� ���� ��ȯ
 }

int main() {
	char str[10];

	while (1) {
		printf("& ");

		//scanf_s("%[^\n]*c", str, 10);
		//gets(str); �������� �����Ƿ� ��� ����
		fgets(str, 10, stdin); //stdin(ǥ�� �����) ������� 100���ڸ� �Է��ؼ� str�� ����
		str[strlen(str) - 1] = '\0';
		//fgets ���� : �ٹٲ� ����(\n)���� �����ؼ� str�� �Է��ϱ� ������ ���� �߻�

		printf("%s:%d\n", str, strlen_user(str));
	}
}