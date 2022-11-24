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
	cout << "Введите номер транспорта: ";
	cin >> R.number;
	cout << "Введите тип транспорта: ";
	cin >> R.type;
	cout << "Введите остановку начала маршрута: ";
	cin >> R.begin;
	cout << "Введите конечную остановку: ";
	cin >> R.end;
}
void show_route(route& R) {
	cout << "Номер транспорта: " << R.number << '\n';
	cout << "Тип транспорта: " << R.type << '\n';
	cout << "Остановка начала маршрута: " << R.begin << '\n';
	cout << "Конечная остановка: " << R.end << '\n';
}
int sum_route(route& R, int num, int fare) {
	int sum = 0;
	cout << "Стоимость проезда " << num << " человек составила: \n";
	return sum = num * fare;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Задача 1\n";
	int **ptrmass = nullptr;
	cout << "Введите  длину строки массива: \n";
	cin >> n;
	cout << "Введите длину столбца массива: \n";
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
	cout << "Задача 2\n";
	char a;
	char b;
	string str;
	cout << "Введите строку: \n";
	getline(cin, str);
	cout << "Введите искомый символ: \n";
	cin >> a;
	cout << "Введите символ который заместит предыдущий символ: \n";
	cin >> b;
	cout << "Строка с изменениями: \n";
	string_ring(str, a, b);
	cout << '\n';
	cout << "Задача 3\n";
	int f;
	const int fr = 35;
	route A{ 3, "автобус", "Калиновка", "Зеленая"};
	route T{ 4, "трамвай", "ЖБИ","Ракитовая"};
	route TT{ 5, "троллейбус", "ЗКИ", "Институт связи"};
	show_route(A);
	cout << "Введите количество человек: \n";
	cin >> f;
	cout << sum_route(A, f, fr) << '\n';
	show_route(T);
	cout << "Введите количество человек: \n";
	cin >> f;
	cout << sum_route(T, f, fr) << '\n';
	show_route(TT);
	cout << "Введите количество человек: \n";
	cin >> f;
	cout << sum_route(TT, f, fr) << '\n';


	return 0;
}