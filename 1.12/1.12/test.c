//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//&arrȡ��������������ĵ�ַ��������ָ��������
//	return 0;//����������ʹ��
//}
//void Print1(int arr[2][5], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Print2(int(*arr)[5], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	Print1(arr, 2, 5);
//	//arr��������ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά������arr��ʾ��ά�����һ���еĵ�ַҲ����һά����ĵ�ַ
//	//���Կ���������ָ��������.
//	Print2(arr, 2, 5);
//	return 0;
//}


//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)
//{
//}//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}
//( *( void (*)() )0 )();
