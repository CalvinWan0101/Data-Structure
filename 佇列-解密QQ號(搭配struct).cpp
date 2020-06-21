#include <iostream>
//輸入9個數字
//刪除第1個字同時將第2個字排到子串後
//記錄刪除的字組合成新的數串
//輸出新的數串
using namespace std;
//注意：struct的敘述結束之後在【}】後面還需要再加【;】
struct 連QQ都不想給的學妹
{
	int QQ[100];
	int head;
	int tail;
};
int main(int argc, char** argv)
{
	連QQ都不想給的學妹 A;
	A.head = 1;
	A.tail = 1;
	for (int i = 1; i <= 9; i++)
	{
		cin >> A.QQ[i];
		A.tail++;
	}
	while (A.head < A.tail)
	{
		cout << A.QQ[A.head];
		A.head++;
		A.QQ[A.tail] = A.QQ[A.head];
		A.tail++;
		A.head++;
	}
	system("PAUSE");
	return 0;
}