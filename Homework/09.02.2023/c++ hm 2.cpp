#include <iostream>
using namespace std;
int main()
{	
	setlocale(LC_ALL, "RU");
	int seconds = 0;
	int minute = 0;
	int hours = 0;
	cout << "������� ������� :";
	cin >> seconds;
	if (seconds >= 60)
		minute = seconds / 60;
	if (minute >= 60)
		hours = minute / 60;
	cout 
		<< "\n������� :" << seconds
		<< "\n������ :" << minute 
		<< "\n���� :" << hours;
	return 0;
}