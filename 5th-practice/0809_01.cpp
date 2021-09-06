#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) {
	cout << "�Ϲ� add()�Լ�" << endl;
	return a + b;
}
//
//double add(double a, double b) {
//	return a + b;
//}
//���ø� �Լ� �Լ��� ����Ҷ� Ÿ���� �˷��༭
//��ġ �Ű�����ó�� �޾ƿ� Ȱ���ϴ� �Լ��̴�.
//���� T�� ����Ѵ�.
template <typename T>
T add(T a, T b) {
	return a + b;
}
class Coord {
	int x;
	int y;
public:
	Coord(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	Coord operator+(Coord c) {
		return Coord(this->x+c.x,this->y+c.y);
	}
};
template <typename T>
void show(T a) {
	cout << a << endl;
}
// ���ø� �Լ��� ����� Ư��ȭ
// ���� �ش��ϴ� Ÿ���� �Ű�����ó�� �Ѿ�´ٸ�
// �Ϲ�ȭ�� ���Ǹ� ������ �ʰ�,
// Ư��ȭ�� ���Ǹ� ������ ����� �����̴�.
template<>
void show<Coord>(Coord a) {
	a.show();
}
// Ÿ���� �ٸ� ģ���� ������ �޾ƿ� ���
// �޸��� �����Ͽ� �ۼ��ϸ� �ȴ�.
template<typename T1, typename T2>
void print(T1 a,T2 b) {
	cout << "a : " <<a<< endl;
	cout << "b : " <<b<< endl;
}
void main() {
	print<int, double>(10, 5.1);
	// dynamic_cast <Student*>(p);
	// <Ÿ��>�� ��������� ���� �ʴ��� �˾Ƽ� Ÿ���� �Ѱ��ش�.
	cout << add(10, 50) << endl;
	// ���ø� �Լ��� �Ȱ��� �̸��� �Լ��� �����Ѵٸ�
	// �Ϲ��Լ��� �����ϱ� ������ Ȥ�� �� ��Ȳ�� �����ϱ� ����
	// Ÿ���� ��������� �Ѱ��ִ� ���� ����.
	cout << add<int>(10, 50) << endl;
	cout << add<double>(10.5, 20.9) << endl;
	// ������ ���ڿ��� ��� ���ڿ� ����� Ÿ���� �Ѱ��ֱ⶧����
	// ����ġ ���� ������ �߻��� �� �ֵ�.
	// ���� ���ø��� ����� ��� ��������� Ÿ���� ���ִ� ����
	// �ٶ����ϴ�.
	cout << add<string>("�ȳ��ϼ���","�ݰ����ϴ�") << endl;
	Coord c1 = Coord(10, 10);
	Coord c2 = Coord(20, 20);
	add<Coord>(c1, c2).show();
	show< int > (10);
	show<Coord>(c1);
	/*cout << add(10, 50) << endl;
	add(10.5, 30.9);*/
}
