#include <stdio.h>

static int svar;
int gvar;

void increment();
void testglobal();

int maun(void)
{
	for (int count = 1; count <= 5; count++)
		increment();
	printf("�Լ� increment()�� �� %�� ȣ��Ǿ����ϴ�.\n", svar);

	testglobal();
	printf("���� ����: %d\n", gvar);
}

void increment()
{
	svar++;
}
