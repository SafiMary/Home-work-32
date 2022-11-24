#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
using namespace std;



template <typename T>
void fun(T*& ptr, int length1, int length2) {
	ptr = new T [length1];
for (int i = 0; i < length1; i++){
			ptr[i] = new int[length2];
	}

}

void string_ring(string& word, char ch1, char ch2) {
	replace(word.begin(), word.end(), ch1, ch2);
	cout << word;
}

struct route {
	int number = 0;
	string type{};
	string begin{};
	string end{};
};
void input_route(route& R) {
	cout << "������� ����� ����������: ";
	cin >> R.number;
	cout << "������� ��� ����������: ";
	cin >> R.type;
	cout << "������� ��������� ������ ��������: ";
	cin >> R.begin;
	cout << "������� �������� ���������: ";
	cin >> R.end;
}
void show_route(route& R) {
	cout << "����� ����������: " << R.number << '\n';
	cout << "��� ����������: " << R.type << '\n';
	cout << "��������� ������ ��������: " << R.begin << '\n';
	cout << "�������� ���������: " << R.end << '\n';
}
int sum_route(route& R, int num, int fare) {
	int sum = 0;
	cout << "��������� ������� " << num << " ������� ���������: \n";
	return sum = num * fare;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "������ 1\n";
	int **ptrmass = nullptr;
	cout << "�������  ����� ������ �������: \n";
	cin >> n;
	cout << "������� ����� ������� �������: \n";
	cin >> m;
	fun(ptrmass, n, m);
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ptrmass[i][j] = rand() % 30;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
		cout << ptrmass[i][j] << "\t";
		}
			cout << "\n";
	}
	

	for (int i = 0; i < n; i++) {
		delete[] ptrmass[i];
	}
	delete[] ptrmass;
	cout << "\n\n";
	cout << "������ 2\n";
	char a;
	char b;
	string str;
	cout << "������� ������: \n";
	getline(cin, str);
	cout << "������� ������� ������: \n";
	cin >> a;
	cout << "������� ������ ������� �������� ���������� ������: \n";
	cin >> b;
	cout << "������ � �����������: \n";
	string_ring(str, a, b);
	cout << '\n';
	cout << "������ 3\n";
	int f;
	const int fr = 35;
	route A{ 3, "�������", "���������", "�������"};
	route T{ 4, "�������", "���","���������"};
	route TT{ 5, "����������", "���", "�������� �����"};
	show_route(A);
	cout << "������� ���������� �������: \n";
	cin >> f;
	cout << sum_route(A, f, fr) << '\n';
	show_route(T);
	cout << "������� ���������� �������: \n";
	cin >> f;
	cout << sum_route(T, f, fr) << '\n';
	show_route(TT);
	cout << "������� ���������� �������: \n";
	cin >> f;
	cout << sum_route(TT, f, fr) << '\n';


	return 0;
}