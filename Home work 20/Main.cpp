#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

template <typename T>
void showArr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
		cout << "\n";
}
template <typename T>
int searchIndex(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}
template <typename T>
int searchLastIndex(T arr[], const int length, T value, int begin = 0) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
template <typename T>
int maxElement(T arr[], const int length) {
	int max = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] > max)
			max = arr[i];
		return max;
}
template <typename T>
int minElement(T arr[], const int length) {
	int min = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}
template <typename T>
int meanValue(T arr[], const int length) {
	int sum = 0;
	int res = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return res = sum / length;
}
template <typename T>
int range(T arr[], const int length, int A, int B) {
	for (int i = 0; i < length; i++)
		if(arr[i] > A && arr[i] < B)
	return arr[i];
}
template <typename T>
void counter(T arr[], const int length, T value) {
	int count = 0;
	for (int i = 0; i < length; i++)
	if(arr[i] == arr[i + 1])
	count++;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, n, m, v;
	const int  size = 100;
	int mass[size];
	cout << "������ ����������� ���������� �������: \n";
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		mass[i] = -100 + rand() % (100 - (-100)+ 1);
	showArr(mass, size);
	cout << "\n������� ����� ������� �������� ������� ������: \n";
	cin >> n;
	cout << "\n������� ������� ������� ��������� ��������: \n" << searchIndex(mass, size, n);
	cout << "\n������� ����� ������� �������� ������� ������: \n";
	cin >> m;
	cout << "\n������� ������� ���������� ��������� ��������: \n" << searchLastIndex(mass, size, m);
	cout << "\n������������ ������� �������: \n" << maxElement(mass, size);
	cout << "\n����������� ������� �������: \n" << minElement(mass, size);
	cout << "\n������� �����-� ���� ��������� �������: \n" << meanValue(mass, size);
	cout << "\n������� �������� ����� �� � ��: \n";
	cin >> a >> b;
	cout << "\n�������� �������, �������� � ��������: \n"  << range(mass, size, a, b);
	cout << "\n������� ������� �������, ����� ������ ���-�� ���������: \n";
	cin >> v;
	counter(mass, size,v);//�� ��������
	return 0;
}