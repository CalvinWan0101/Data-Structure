//輸入9個數字
//刪除第1個字同時將第2個字排到子串後
//記錄刪除的字組合成新的數串
//輸出新的數串
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int head = 1,tail = 1;
	int input[100];
	for (int i = 1; i <= 9; i++)
	{
		cin >> input[i];
		tail++;
	}
	//當head!=tail也就是合法範圍不為0
	while (head< tail)
	{
		cout << input[head];
		head++;
		input[tail] = input[head];
		head++;
		tail++;
	}
	system("PAUSE");
	return 0;
}