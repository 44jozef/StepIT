#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    float number{};
    cout << "������� ����� ����� :";
    cin >> number;
    int dollars = number;
    float cent1 = number - dollars;
    float cent2 = cent1 * 100;
    int cent = cent2;
    cout << dollars << " �������� �  " << cent << " ������";
    return 0;
}

