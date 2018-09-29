#include <iostream>
#include <map>
using namespace std;

int main() {

	//map�� key�� value�� �̷���� �ִ�. 
	map<int, int> d1; //���̰� 0�� ��

	map<int, int> d2 = { {1,2}, {3,4}, {5,6} };
	
	cout << "d1.size() = " << d1.size() << '\n';
	cout << "d2.size() = " << d2.size() << '\n';

	d1[10] = 20;
	cout << "d1[10] = " << d1[10] << '\n'; //10�� ���ε� 20�� ���
	cout << "d2[1] = " << d2[1] << '\n'; //1�� ���ε� 2�� ��µȴ�.
	cout << "d2.size() = " << d2.size() << '\n';
	cout << "d2[2] = " << d2[2] << '\n';//2�� ���ε� ���� ��� 0���� ����. ũ�Ⱑ 1�� �����Ѵ�.
	cout << "d2.size() = " << d2.size() << '\n';
	cout << "d2[3] = " << d2[3] << '\n';//3�� ���ε� �� 4�� ��µȴ�.
	cout << "d2[4] = " << d2[4] << '\n';
	cout << "d2[5] = " << d2[5] << '\n';

	/*map�� �̿��� ������ ���ϱ�*/
	map<int, int> d3;
	map<int, int> d4;

	for (int i = 1; i <= 9; i += 2) {
		d3[i] = i * i;
		d4[i] = i * i;
	}

	cout << "d3.size() = " << d3.size() << '\n';
	cout << "d4.size() = " << d4.size() << '\n';

	for (int i = 1; i <= 10; i++) {
		if (d3[i]) { // ���� ������ 0�� �����Ͽ� ũ�Ⱑ 1�� ����
			cout << i << ' '; //���� �����Ѵٸ� ���
		}
	}
	cout << '\n';
	for (int i = 1; i <= 10; i++) {
		if (d4.count(i)) {// key���� �ش��ϴ� ���ҵ�(value)�� ������ ��ȯ�Ѵ�.
			
			cout << i << ' ';
		}
	}
	cout << '\n';
	cout << "d3.size() = " << d3.size() << '\n';
	cout << "d4.size() = " << d4.size() << '\n';

	/*map�� ���ͷ�����*/
	map<int, int> d = { {1,2}, {3,4}, {5,6} };

	for (auto it = d.begin(); it != d.end(); ++it) {//���ͷ����͸� �̿��Ͽ� Ű�� ���� ���
		// first�� Ű, second�� ���̴�.
		cout << (it->first) << ' ' << (it->second) << '\n';
	}

	for (auto p : d) {
		cout << p.first << ' ' << p.second << '\n';
	}


















	return 0;
}