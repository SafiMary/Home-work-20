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
	cout << "Массив заполненный случайными числами: \n";
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		mass[i] = -100 + rand() % (100 - (-100)+ 1);
	showArr(mass, size);
	cout << "\nВведите число позицию которого желаете узнать: \n";
	cin >> n;
	cout << "\nФункция индекса первого вхождения элемента: \n" << searchIndex(mass, size, n);
	cout << "\nВведите число позицию которого желаете узнать: \n";
	cin >> m;
	cout << "\nФункция индекса последнего вхождения элемента: \n" << searchLastIndex(mass, size, m);
	cout << "\nМаксимальный элемент массива: \n" << maxElement(mass, size);
	cout << "\nМинимальный элемент массива: \n" << minElement(mass, size);
	cout << "\nСреднее арифм-е всех элементов массива: \n" << meanValue(mass, size);
	cout << "\nВведите диапазон чисел от и до: \n";
	cin >> a >> b;
	cout << "\nЭлементы массива, вошедшие в диапазон: \n"  << range(mass, size, a, b);
	cout << "\nВведите элемент массива, чтобы узнать кол-во вхождений: \n";
	cin >> v;
	counter(mass, size,v);//не работает
	return 0;
}