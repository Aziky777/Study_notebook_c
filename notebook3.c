#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = { 'b', 'i', 't', 0};
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//int main()
//{
//	char ch[] = { "hello world" };
//	int no = 0;
//	no = sizeof ch / sizeof ch[0];
//	printf("%d\n", no);
//	printf("%d\n",strlen(ch));
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1 , &num2);
//	if (num1 > num2)
//		printf("%d\n", num1);
//	else
//		printf("%d\n", num2);
//	return 0;
//}

//int Greater(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int greater = Greater(num1, num2); 
//	scanf("%d%d", &num1, &num2);
//	
//	printf("The greater one is %d\n", Greater(num1, num2));
//	return 0;
//}	

//int main()
//{
//	unsigned int a = 0 ;
//	unsigned int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int battle_record = 123;
//	int exp = --battle_record;
//	printf("battle record = %d\nexp = %d\n",battle_record ,exp);
//	return 0;
//}

//int main()
//{
//	double pie = (long)3.1415;
//	printf("pie = %d\n", pie);
//	return 0;
//}

//int main(void)
//{
//	int age = 0;
//	int EL = 0;
//	printf("Your age:\n");
//	scanf("%d", &age);
//	printf("Your English results:\n");
//	scanf("%d", &EL);
//	if (age >= 18 && EL <= 3)
//		printf("You get the offer!");
//	else
//		printf("Your application is declined.");
//	return 0;
//}

//int main()
//{
//	int true = 1;
//	int false = 0;
//	printf("%d\n%d\n", true && false, true || false);
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	(age >= 18) ?
//		printf("Wlecome~") :
//		printf("Sorry. Minors are disallowed to enter.");
//	return 0;
//}

//int main()
//{
//	int test1 = 0;
//	int test2 = 0;
//	scanf_s("%d%d", &test1, &test2);
//	int test_b = ((test1 > test2 )? test1 : test2);
//	printf("%d\n", test_b);
//	return 0;
//}

//int main()
//{
//	typedef unsigned int usint;
//	usint age = 12;
//	unsigned int age2 = 28;
//	printf("%d\n", sizeof age2);
//	return 0;
//}

//int main()
//{
//	int temp = 24;
//	int* add_temp = &temp;
//	printf("%p\n", add_temp);
//	*add_temp += 9;
//	printf("%d\n", temp);
//
//	return 0;
//}

//int main()
//{
//	double test1 = 3.14;
//	double test2 = 2.75;
//	double* add_test1 = &test1;
//	double* add_test2 = &test2;
//	&test1 = ;// &test1 cannot be modified
//	return 0;
//}

//int main()
//{
//	int test = 0;
//	int* add_test = &test;
//	printf("%d\n",sizeof add_test);
//	return 0;
//}

//#define MAX (a > b)

//int main()
//{
//	double pie = 3.1415;
//	double* add_pie = &pie;
//	printf("%p\n", add_pie);
//	pie += 4.735;
//	printf("%p\n", add_pie);
//
//	return 0;
//}

//int main()
//{
//	int time = 0;
//	while (time <= 5)
//		{
//		time++;
//		int test = 0;
//		/*int* add_test = &test;
//		printf("%p\n", add_test);*/
//		test++;
//		printf("%d\n", test);
//		}
//		
//
//	return 0;
//}



//struct Operator
//{
//	char code[20];
//	char job[20];
//	char name[20];
//	short birthday;
//};
//
//int main()
//{
//	struct Operator Spector = { "Spector", "Specialist", "Laurantina", 727};
//	printf("New Operator Recruited!\n");
//	printf("Code : %s\n", Spector.code);
//	printf("job : %s\n", Spector.job);
//	printf("Name : %s\n", Spector.name);
//	printf("Birthday : %d\n", Spector.birthday);
//
//	struct Operator* p_Spector = &Spector;
//	printf("%s\n", (*p_Spector).name);
//	printf("%s\n", p_Spector->name);
//
//	strcpy(Spector.job, "Gaurd");
//	printf("%s\n", Spector.job);
//
//	return 0;
//}