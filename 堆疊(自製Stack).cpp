#include <iostream>
using namespace std;
int main()
{
	//1-刪除頂端元素
	//2-輸出頂端元素
	//3-丟數字進堆疊
	
	//設一個變數top讓他跟著操作跑
	//基本就能確定先進先出了
	int n;
	cin >> n;
	int a, b;
	int array[10000] = { 0 };
	int top = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		switch (a)
		{
		case 1:
			top--;
			array[top] = 0;
			break;
		case 2:
			cout << array[top - 1] << endl;
			break;
		case 3:
			cin >> b;
			array[top] = b;
			top++;
			break;
		}
	}
	return 0;
}
