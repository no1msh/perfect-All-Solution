#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("������, ������, ���������� ���� �Է��Ͻÿ�.\n");
	scanf("%d %o %x", &a, &b, &c);
	printf("%d %#o %#x\n\n", a, b, c);

	printf("������, ������, ��������(0����), ��������(0x����)�� ���� �Է��ϼ���.\n");
	scanf("%i %i %i", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);


	return 0;
}