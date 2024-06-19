

#include <iostream>
using namespace std;

int main()
{
    int n, x, luythua = 1;
    cout << "Nhap so: ";
    cin >> n;
    cout << "Nhap so mu: ";
    cin >> x;


    for (int i = 1; i <= x; i++) {
        luythua *= n;
    }
    cout << "Luy thua: " << luythua;
    return 0;
}

