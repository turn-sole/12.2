#include<stdio.h>
//�Ӽ�����������������������������Ļ����ʾ�ڶ���������
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
//����һ���ַ���Ȼ������Ļ����ʾ������ַ���ɵ� 3 * 3 �ľ��Ρ�
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
//����һ���ַ���Ȼ������Ļ����ʾһ��������ַ����ĶԽ��߳�5���ַ�����б���õ����Ρ�
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
//����һ���ַ���������ַ���Ӧ��ASCII�롣
//int main() {
//    char i = 0;
//    scanf("%c", &i);
//    printf("%d\n", i);
//    return 0;
//}
//��������ת��Ϊ�������ͣ�Ҫ���������롣
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
//����3�Ƴɼ���Ȼ������Ƴɼ�������ɼ�Ϊ������ʽ��
//int main() {
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}
// ��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�������Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���ע������ɼ�ʱ��������������ұ���2λС������
//int main() {
//    int a;
//    float b, c, d;
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//    printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.", a, b, c, d);
//    return 0;
//}
// ����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ������
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
