#define _CRT_SECURE_NO_WARNINGS 1;

#include <stdio.h>;
#include <string.h>;

//IF Statements

//int main()
//{
//	int Orundum = 0;
//	int Originium = 0;
//	scanf("%d%d", &Orundum, &Originium);
//
//	if (Orundum >= 18000)
//	{
//		printf("New Operator is obtained!\n");
//	}
//
//	else if (180 * Originium + Orundum >= 18000)
//	{
//		int n = (18000 - Orundum) / 180;
//		if ((18000 - Orundum) % 180 != 0)
//			n++;
//		printf("Do you want to spend %d Originium to obtain %d Orundum?\n", n, 180 * n);
//	}
//
//	else
//		printf("Please Top up Originium.\n");
//
//	return 0;
//}


//int main()
//{
//	int temp = 1;
//	int temp2 = 0;
//	if (temp2 == 1)
//		if (temp == 0)
//			printf("gong&shou");
//		else
//			printf("youshouma");
//	else
//		printf("yougongma");
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (1 == (num % 2))
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}

//int Odd(int x)
//{
//	if (1 == (x % 2))
//	{
//		printf("%d\n", x);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	while ((n >= 1) && (n <= 100))
//	{
//		Odd(n);
//		n++;
//	}
//	return 0;
//}

//int main()
//{
//	int num_temp = 0;
//	for (num_temp = 1; num_temp <= 100; num_temp++)
//	{
//		if ((num_temp % 2) == 1)
//			printf("%d ", num_temp);
//	}
//	return 0;


//int main()
//{
//	int num = 1;
//	while (num <= 10)
//	{	
//		printf("%d\n", num);
//		num++;
//	}
//		return 0;
//}


//int main()
//{
//	int level = 50;
//
//	while (level < 80)
//	{
//		if (level == 70)
//			continue;
//		printf("%d\n", level);
//		level += 5;
//	}
//
//	return 0;
//}

//int main()
//{
//	int exp = 0;
//
//	while ((exp = getchar() )!= EOF)
//	{
//		putchar(exp);
//	}
//
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	for (/*num1 = 0*/; num1 < 3; num1++)
//	{
//		for (/*num2 = 0*/; num2 < 3; num2++)
//			printf("Flatline Here\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int lmd = 0;
//	int exp = 0;
//	for (lmd = 12994, exp = 292; lmd > 100 && exp > 10; lmd -= 100, exp -= 10)
//	{
//		printf("Spector ranks up!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while (num = 0)
//		printf("am");
//	return 0;
//}

//int main()
//{
//	int integer = 0;
//	do
//	{
//		integer += 1;
//		printf("%d ", integer);
//	} while (integer < 10);
//	return 0;
//}

//int main()
//{
//	int x = 2;
//	int power = 10;
//	/*printf("The base of the expression:\n");
//	scanf("%d", &x);
//	printf("The power of the expression:\n");
//	getchar();
//	scanf("&d", &power);*/
//	int results = x;
//	while (power > 1)
//	{
//		results *= x;
//		power--;
//	}
//	printf("The result of expression: %d\n", results);
// 
//	return 0;
//}

//int main()
//{
//	int sequence = 0;
//	int result = 0;
//	for (sequence = 5; sequence > 0; sequence--)
//	{
//		int num = sequence;
//		int result1 = num;
//		for (; num > 1; num--)
//		{
//			result1 *= (num-1);
//		}
//		result += result1;
//	}
//
//	printf("%d ", result);
//	return 0;
//}

int binsearch(int x, int v[], int n)
{
	while (v[n] != x)
	{
		if (n == 0)
			return -1;
		n--;
	}
	return n;
}


int main()
{
	int arr[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	printf("%d\n", binsearch(7, arr, 20));

	return 0;
}

