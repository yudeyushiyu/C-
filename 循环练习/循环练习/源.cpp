//#include<stdio.h>
//switch���
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
//ѭ��
//#include<stdio.h>
//int main() {
//	int ch = 0;
//	while ((ch = getchar() )!= EOF) //�ļ�������־
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//ֻ��ӡ�ַ�0���ַ�9֮���
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
