#include <iostream>
using namespace std;

void main() {
	int num = 10;
	printf("������ cpp ù �����Դϴ�.\n");
	printf("num�� ����ִ� ���� : %d\n", num);
	std::cout << "�ȳ��ϼ���" <<"num�� ����ִ� ���ڴ� "<<num<<"�Դϴ�.";

	// :: ������ ������, �Ҽ��� �˷��ش�.
	// std namespace �����ϱ� ���ؼ� ����Ѵ�.
	// << ��Ʈ������ �ƴ϶�, �������� �ߺ�����(overloading)�� ���� �ٸ��� �����Ѵ�.
	// �������� �����ϴ� ��� : overloading
	//cout�� �ٹٲ��� �ڵ����� ������ �ʴ´�.
	std::cout << "�ι�° �� �Դϴ�.";
	// �ٹٲ� �ϴ� ��� 1. ���ڿ� ���� "\n"�� ���ش�.
	std::cout << "1�� ����� ���� �� �ٲ� �߽��ϴ�.\n";\
	//2. endl�� Ȱ���Ͽ� �� �ٲ��� �Ѵ�.
	std::cout << "endl�� Ȱ���Ͽ� �ٹٲ� �߽��ϴ�." << std::endl;
	std::cout << "Ȯ�ο� �����Դϴ�."<<std::endl;
	// scanf(); c���
	// scanf_s(); c���
	// cin�� ���ؼ� �Է¹ޱ� c++
	std::cin >> num;
	//cout Ȱ���Ͽ� num : 100;
	std::cout << "num : " <<num << std::endl;
	

}