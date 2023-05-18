#include <stdio.h>
#include <string.h>

#define SIZE 30

int strlen_user(char *str) {
	int len = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		len++;
	}

	return len;
}

int read_line(char* str, int limit) { //������ ��� ������ ���ڿ� �Է� �Լ�
	int ch, i = 0;
	char tmp = ' ';

	while ((ch = getchar()) != '\n') //getchar()�� ��ȯ���� int��!! ���
		if (i < limit) {
			if (tmp != ' ' || ch != ' ') {
				str[i++] = tmp = ch;
			}
		}

	if (str[i - 1] == ' ') 
		i--;


	str[i] = '\0';
	return i; //���ڿ� ���� ��ȯ
}

int main() {
	//ù��° ��������

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
	char str[SIZE];
	int len;

	while (1) {
		printf("& ");

		//scanf_s("%[^\n]*c", str, 10);
		len = read_line(str, SIZE);

		printf("%s:%d\n", str, len);
	}

}