//#include<stdio.h>
//switch语句
//int main()
//{
//    int n = 1;
//    int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++, n++;
//
//		default:
//			break;
//		}
//	case 4:m++;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//    return 0;
//}
//循环
//#include<stdio.h>
//int main() {
//	int ch = 0;
//	while ((ch = getchar() )!= EOF) //文件结束标志
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//只打印字符0到字符9之间的
#include<stdio.h>
int main() {
	int ch = 0;
	while ((ch = getchar() )!= EOF) {
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);

	}
	return 0;
}
