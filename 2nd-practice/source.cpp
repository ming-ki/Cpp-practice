#include <iostream>
using namespace std;

int g = 20; //���� ����

int add(int x, int y) //���� �Լ�
{
	return x + y;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

int main()
{ 
	int a, b, sum;
	int n[10];
	double d[] = { 0.1,0.2,9.5,3.9 };
	int i;

	cout << "�� ������ �Է��ϼ��� >>";
	cin >> a >> b; //�� ������ �о� a�� b�� �Է�
	sum = a + b;
	cout << "���� " << sum << "\n";
	cout << "���� " << add(a,b) << "\n";
	cout << "���� ���� g ���� " << g;
	for (i = 0; i < 10; i++)
		n[i] = i * 2;
	for (i = 0; i < 10; i++)
		cout << "\n";

	double sum = 0;
	for (i = 0; i < 4; i++)
		sum += d[i];

	cout << "�迭�� d�� ����" << sum;


	return 0; //return ���� �����ϸ� �ڵ����� return 0; ���Եȴ�.
	
}