#include <iostream>
#include <string>
using namespace std;
//堆疊：後進來的先出去
int main(int argc, char** argv)
{
	string input;
	char orgin[100];
	char compare[100];
	cout << "原始串：";
	cin >> input;
	int len = input.length();
	for (int i = 0; i < len; i++)
		orgin[i] = input[i];
	int mid = len / 2 - 1;
	int top = 0;
	for (int i = 0; i <= mid; i++)
	{
		compare[top] = orgin[i];
		top++;
	}
	if (top > mid)
		top = mid;
	//預覽複製後與用以對比的子串陣列
	cout << "複製後：";
	for (int i = 0; i < len; i++)
		cout << orgin[i];
	cout << endl;
	cout << "比較用：";
	for (int i = 0; i <= mid; i++)
		cout << compare[i];
	cout << endl;
	//區分偶數項元素與奇數項元素
	//EX.length=5,mid=1
	//AHAHA則需要從1+2開始比較
	//EX.length=4,mid=1
	//AHHA則需要從1+1開始比較
	int next;
	//卻定欲比較子串的起始點
	if (len % 2 == 0)
		next = mid + 1;
	else
		next = mid + 2;
	for (int i = next; i < len; i++)
	{
		if (orgin[i] != compare[top])
			break;
			top--;
	}
	//當完全相等時top=0
	//二不相等是則top!=0
	if (top >0)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	system("PAUSE");
	return 0;
}