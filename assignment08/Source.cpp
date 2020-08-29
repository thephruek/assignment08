#include<stdio.h>
#include<math.h>
int main()
{
	int input, i, j = 0;
	scanf_s("%d", &input);
	while (input > 10) {
		i = input;
		while (i > 10) {
			j += i % 10;
			i = (i - (i % 10)) / 10;
		}
		j += i;
		printf("%d\n", j);
		input = j;
		j = 0;
	}
	return 0;
}