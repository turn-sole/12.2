#include<stdio.h>
//从键盘上输入三个整数，并尝试在屏幕上显示第二个整数。
//int main()
//{
//    int arr[3];
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("%d ", arr[1]);
//    return 0;
//}
//读入一个字符，然后在屏幕上显示用这个字符组成的 3 * 3 的矩形。
//int main() 
//{
//    char a = 0;
//    scanf("%c", &a);
//    char arr[3][3] = { 0 };
//    for (int i = 0; i < 3; i++)
//    {
//        for (int m = 0; m < 3; m++)
//        {
//            arr[i][m] = a;
//            printf("%c", arr[i][m]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//读入一个字符，然后在屏幕上显示一个用这个字符填充的对角线长5个字符，倾斜放置的菱形。
//int main() {
//    char a = 0;
//    scanf("%c", &a); \
//        int i = 0;
//    int j = 0;
//    for (i = 1; i <= 3; i++)
//    {
//        for (j = 0; j < 3 - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < (2 * i - 1); j++)
//        {
//            printf("%c", a);
//        }
//        printf("\n");
//    }
//    for (i = 1; i < 3; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * (3 - i) - 1; j++)
//        {
//            printf("%c", a);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//输入一个字符，输出该字符相应的ASCII码。
//int main() {
//    char i = 0;
//    scanf("%c", &i);
//    printf("%d\n", i);
//    return 0;
//}
//将浮点数转换为整数类型，要求四舍五入。
//int main() {
//    double d;
//    scanf("%lf", &d);
//    if (d >= 0) {
//        int a = d + 0.5;
//        printf("%d\n", a);
//    }
//    else
//    {
//        int a = d - 0.5;
//        printf("%d\n", a);
//    }
//    return 0;
//}
//输入3科成绩，然后把三科成绩输出，成绩为整数形式。
//int main() {
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}
// 依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
//int main() {
//    int a;
//    float b, c, d;
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//    printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.", a, b, c, d);
//    return 0;
//}
// 输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//int main() {
//    int a, b, c;
//    scanf("%4d%2d%2d", &a, &b, &c);
//    printf("year=%d\nmonth=%02d\ndate=%02d\n", a, b, c);
//    return 0;
//}
//#define PRINT(X) printf("the value of "#X" is %d",X)
//int main()
//{
//	int a = 10;
//	PRINT(a);
//	int b = 20;
//	PRINT(b);
//	int c = 30;
//	PRINT(c);
//	return 0;
//}
//#define CAT(X,Y) X##Y
//int main()
//{
//	int class101 = 100;
//	printf("%d\n", CAT(class, 101));
//	return 0;
//}
//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("%d\n", m);
//}
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int 
//}
