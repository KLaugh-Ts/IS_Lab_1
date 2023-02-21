#include <iostream>
#include <string>
using namespace std;

void init(char**& a, int const n) { // ������� ������������� �������
	a = new char* [n];
	for (int i = 0; i < n; i++)
		a[i] = new char[n];
}


void input(char** a, int const n, string str) { // ������ ���� � ������� �� ����� ������ �1 = [1 5 4 3 2]
	for (int i = 0; i < n; i++) {
		a[i][0] = str[n * i - 1 + 1];
		a[i][1] = str[n * i - 1 + 5];
		a[i][2] = str[n * i - 1 + 4];
		a[i][3] = str[n * i - 1 + 3];
		a[i][4] = str[n * i - 1 + 2];
	}
}

void input_(char** a, int const n, string str) { // ������ ���� � ������� �� ����� ������ �2 
	for (int i = 0; i < n; i++) {
		a[i][0] = str[n * i - 1 + 1];
		a[i][1] = str[n * i - 1 + 4];
		a[i][2] = str[n * i - 1 + 5];
		a[i][3] = str[n * i - 1 + 3];
		a[i][4] = str[n * i - 1 + 2];
	}
}

void output(char** a, int const n, string& str) { // ���������� ���� �� ������� � ����� ������ �� ����� ������ �2 = [1 4 5 3 2]
	for (int j = 0; j < n; j++) {
		str += a[0][j];
		str += a[3][j];
		str += a[4][j];
		str += a[2][j];
		str += a[1][j];
	}
}

void output_(char** a, int const n, string& str) { // ���������� ���� �� ������� � ����� ������ �� ����� ������ �1
	for (int j = 0; j < n; j++) {
		str += a[j][0];
		str += a[j][4];
		str += a[j][3];
		str += a[j][2];
		str += a[j][1];
	}
}

void print(char** a, int const n) { // ����� ������� � �������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}
	cout << '\n';
}

int main() {
	setlocale(0, "");
	string str = "����������_�������������_";

	int n = 5;
	char** arr;
	init(arr, n);	input(arr, n, str); // ������������� � ������ ���� � ������� ����� ������� �� ����� �1
	print(arr, n);

	string new_str = "";
	output(arr, n, new_str); // �������� ����� ������ ���� ���������� ���� �� ������� ������ ���� �� ����� �2
	cout << new_str;
	cout << "\n\n";

	char** arr1;
	init(arr1, n);	input_(arr1, n, str);
	//print(arr, n);

	string old_str = "";
	output_(arr, n, old_str); // ������������� 
	cout << old_str;
	cout << '\n';


	return 0;
}