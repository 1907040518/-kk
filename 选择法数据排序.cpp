////输入十个数字，让其从小到大输出
//#include<stdio.h>
//void f1(int team[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++) //选择法从小到大排序
//	{
//		k = i;
//		for (j = i+1; j < n; j++)
//			if (team[j] < team[k])
//				k = j;
//		if (k != 1)
//		{
//			t = team[i];
//			team[i] = team[k];
//			team[k] = t;
//		}
//	}
//}
//int main()
//{
//	int a[10], i;
//	for (i = 0; i < 10; i++)
//		int scanf("%d", &a[i]);
//	f1(a, 10);
//	for (i = 0; i < 10; i++)
//		printf("%5d", a[i]);
//	printf("\n");
//	return 0;
//}