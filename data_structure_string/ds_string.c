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

	while ((ch = getchar()) != '\n') //getchar()�� ��ȯ���� int��!! ���
		if (i < limit)
			str[i++] = ch;

	str[i] = '\0';

	return i; //���ڿ� ���� ��ȯ
 }

void printString(char* str) {
	char tmp = ' ';
	int i = 0;
	int len = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (tmp != ' ' || str[i] != ' ') {
			printf("%c", str[i]);
			tmp = str[i];
			len++;
		}
	}

	printf(":%d\n", len);
}

int main() {
	//char str[10];

	//while (1) {
	//	printf("& ");

	//	//scanf_s("%[^\n]*c", str, 10);
	//	//gets(str); �������� �����Ƿ� ��� ����
	//	fgets(str, 10, stdin); //stdin(ǥ�� �����) ������� 100���ڸ� �Է��ؼ� str�� ����
	//	str[strlen(str) - 1] = '\0';
	//	//fgets ���� : �ٹٲ� ����(\n)���� �����ؼ� str�� �Է��ϱ� ������ ���� �߻�

	//	printf("%s:%d\n", str, strlen_user(str));
	//}



	//�� ��° ��������, ���ʿ��� ������ �����ϰ� ����϶�
	//���� �յڿ� ���� ������ ����, �� �� �̻��� ���ӵ� ������ �ϳ��� ��ü
	char str[10];

	while (1) {
		printf("& ");

		//scanf_s("%[^\n]*c", str, 10);
		read_line(str, 30);

		printString(str);
	}

}