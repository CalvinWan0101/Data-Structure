#include <iostream>
#include <string>
using namespace std;
//���|�G��i�Ӫ����X�h
int main(int argc, char** argv)
{
	string input;
	char orgin[100];
	char compare[100];
	cout << "��l��G";
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
	//�w���ƻs��P�ΥH��񪺤l��}�C
	cout << "�ƻs��G";
	for (int i = 0; i < len; i++)
		cout << orgin[i];
	cout << endl;
	cout << "����ΡG";
	for (int i = 0; i <= mid; i++)
		cout << compare[i];
	cout << endl;
	//�Ϥ����ƶ������P�_�ƶ�����
	//EX.length=5,mid=1
	//AHAHA�h�ݭn�q1+2�}�l���
	//EX.length=4,mid=1
	//AHHA�h�ݭn�q1+1�}�l���
	int next;
	//�o�w������l�ꪺ�_�l�I
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
	//�����۵���top=0
	//�G���۵��O�htop!=0
	if (top >0)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	system("PAUSE");
	return 0;
}