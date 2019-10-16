#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{

	int input = 0;
	printf("4자리 정수 입력");
	scanf("%d", &input);

	printf("%10\n", input);
	printf("%010d\n", input);
	printf("%+010d\n", input);
	printf("%d\n", input);
	printf("%10o\n", input);
	printf("%01o\n", input);
	printf("%10x\n", input);
	printf("%010x\n", input);

	return 0;

}