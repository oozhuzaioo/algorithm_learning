#include <iostream>
using namespace std;
int main()
{
	int a[11]{};
	int i, j, t;
	cout << "输入五个10以内的数" << endl;
	for (i = 0; i < 5; i++) {
		cin >> t;
		a[t] += 1;
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < a[i]; j++) {
			cout << i << endl;
		}
	}
	
	return 0;
}

只能输入五个数