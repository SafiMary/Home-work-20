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

int counter(int arr[], const int length, int value) {
	int count = 0;
	for (int i = 0; i < length; i++)
	if(arr[i] == value)
	count++;
	return count;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, n, m, v;
	const int  size = 100;
	int mass[size];
	cout << "Ìàññèâ çàïîëíåííûé ñëó÷àéíûìè ÷èñëàìè: \n";
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		mass[i] = -100 + rand() % (100 - (-100)+ 1);
	showArr(mass, size);
	cout << "\nÂâåäèòå ÷èñëî ïîçèöèþ êîòîðîãî æåëàåòå óçíàòü: \n";
	cin >> n;
	cout << "\nÔóíêöèÿ èíäåêñà ïåðâîãî âõîæäåíèÿ ýëåìåíòà: \n" << searchIndex(mass, size, n);
	cout << "\nÂâåäèòå ÷èñëî ïîçèöèþ êîòîðîãî æåëàåòå óçíàòü: \n";
	cin >> m;
	cout << "\nÔóíêöèÿ èíäåêñà ïîñëåäíåãî âõîæäåíèÿ ýëåìåíòà: \n" << searchLastIndex(mass, size, m);
	cout << "\nÌàêñèìàëüíûé ýëåìåíò ìàññèâà: \n" << maxElement(mass, size);
	cout << "\nÌèíèìàëüíûé ýëåìåíò ìàññèâà: \n" << minElement(mass, size);
	cout << "\nÑðåäíåå àðèôì-å âñåõ ýëåìåíòîâ ìàññèâà: \n" << meanValue(mass, size);
	cout << "\nÂâåäèòå äèàïàçîí ÷èñåë îò è äî: \n";
	cin >> a >> b;
	cout << "\nÝëåìåíòû ìàññèâà, âîøåäøèå â äèàïàçîí: \n"  << range(mass, size, a, b);
	cout << "\nÂâåäèòå ýëåìåíò ìàññèâà, ÷òîáû óçíàòü êîë-âî âõîæäåíèé: \n";
	cin >> v;
	cout << counter(mass, size,v);//íå ðàáîòàåò
	return 0;
}
