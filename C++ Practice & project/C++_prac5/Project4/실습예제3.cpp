#include <iostream>
using namespace std;
int main() {
	int n;
	char name[100];
	while (true) {
		cout << "정수 ID 입력 >> ";
		cin >> n;
		cout << "이름 문자열 입력 >> ";
		cout << "ID: " << n << ' ' << name << endl;
	}
	return 0;
}
