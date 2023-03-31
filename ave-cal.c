#include <stdio.h>
/**
 * main - enter 10 numbers to recieve the sum value and average
 *
 * Return: Always return 0.
 */


int main(void)
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

	{
		printf("Enter number1:");
		scanf("\n%d", &num1);

		printf("Enter number2:");
		scanf("\n%d", &num2);

		printf("Enter number3:");
		scanf("\n%d", &num3);

		printf("Enter number4:");
		scanf("\n%d", &num4);

		printf("Enter number5:");
		scanf("\n%d", &num5);

		printf("Enter number6:");
		scanf("\n%d", &num6);

		printf("Enter number7:");
		scanf("\n%d", &num7);

		printf("Enter number8:");
		scanf("\n%d", &num8);

		printf("Enter number9:");
		scanf("\n%d", &num9);

		printf("Enter number10:");
		scanf("\n%d", &num10);
	}
	int sum = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10);
	{
		printf("\n Sum of num1-num10 = %d", sum);
	}
	int average = sum / 10;
	{
		printf("\n Average = %d", average);
	}

	return (0);
}
