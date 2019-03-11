#include <iostream>
using namespace std;
int main()
{    
	int i, j, t, n=5;
	int a[100];
	cout << "输入五个数：" << endl;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i <= n - 1; i++) {
		for (j = 0; j <= n - i; j++) {
			if (a[j] < a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	for (i = 0; i <= n; i++) {
		cout << a[i] << endl;
	}

	return 0;
}
第一层循环控制跑多少趟
第二层循环j只比较自己的邻居，大于就换，不大于就不换。