#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Nhap So ";
    cin >> number;

    cout << "Bang Cuu Chuong " << number << ":\n";
    for (int i = 1; i <= 10; ++i)
    {
        cout << number << " x " << i << " = " << (number * i) << "\n";
    }

    return 0;
}