//#define _CRT_SECURE_NO_WARNINGS 1;
//#include <stdio.h>;
//#include <string.h>;
//
////int main()
////{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum =%d\n", sum);
//	return 0;
//}

//int main()
//{
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	const int n = 10;
//	int arr[10] = { 0 };
//	return 0;
//}


//#define LOVE 99
//int main()
//{
//	int arr[LOVE] = { 0 };
//	printf("Love = %d", LOVE);
//	return 0;
//}

//enum sex 
//{	Male,
//	Female,
//	Secret
//};
//
//int main()
//{
//	enum sex Spector = Female;
//	printf("Sex of Spector is %s\n", Spector);
//	return 0;
//}

//enum colour
//{
//	Red,
//	Yellow,
//	Blue
//};
//
//int main()
//{
//	enum colour rose = Red;
//	return 0;
// }

//int main()
//{
//	char arr1[] = "spector";
//	char arr2[] = {'s', 'p', 'e', 'c', 't', 'o', 114, 0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "spector";
//	char arr2[] = {'s', 'p', 'e', 'c', 't', 'o', 'r', 0};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c\n", '\32');
//	printf("%c\n", '\132');
//	printf("%c\n", '\x61');
//	return 0;
//} 


//int main()
//{
//	int input = 0;
//	printf("Are you ready?\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("Game Starts!");
//	else
//		printf("Paused");
//	return 0;
//}

//int main()
//{//declare variables
//	int Exp = 0;
//	int input = 0;
//	printf("Game Starts\n"); 
//	printf("Auto Clearance?\n");
//	scanf("%d", &input);
//
//	if (input == 1)// choice of game starts or not
//	{
//		printf("Auto Clearance Starts");
//		while (Exp < 100)//repeat of battle clearance 
//		{
//			printf("Battle Clear!\n");
//			Exp++;
//		};
//		printf("Level Up!\n");
//		printf("Spector Is Promoted!\n");
//
//	}
//	else
//		printf("Paused");
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	printf("%d\n", z);
//	return x;
//};
//
//int main()
//{
//	int a = 299;
//	int b = 312;
//	int r = 64361;
//	int sum = 0;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr1[i]);
//		i++;
//	};
//
//	return 0;
//}
//
//int main()
//{
//	int a = 23 / 3;
//	int b = 23 % 3;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int a1 = a <<1 ;
//	int a2 = a >>1 ;
//	int a3 = a <<2 ;
//	printf("%d\n", a);
//	printf("%d\n", a1);
//	printf("%d\n", a2);
//	printf("%d\n", a3);
//	return 0;
//}

//int main()
//{
//	int a = 6; // 0110
//	int b = 3; // 0011
//	int c = a & b; //0010 
//	int d = a | b; //0111
//	int e = a ^ b; //0101
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	int a = 123;
//	{	a = a + 1;
//		printf("%d\n", a);
//	}
//
//	{	a += 1;
//		printf("%d\n", a);
//	}
//
//	{	a -= 1;
//		printf("%d\n", a);
//	}
//
//	{	a &= 2 ;
//		printf("%d\n", a);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 0;
//	printf("%d\n", a);
//	printf("%d\n", !b);
//	printf("%d\n", !a);
//	printf("%d\n", -a);
//	return 0;
//}

//int main()
//{
//	int arr1[12] = {0};
//	int no_arr1 = 0;
//	printf("%d\n", sizeof(arr1));
//	no_arr1 = sizeof(arr1) / sizeof arr1[0];
//	printf("%d\n",no_arr1);
//	return 0;
//}
