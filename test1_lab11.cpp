#include <iostream>

using namespace std;

int main()
{
    char a, b, c;
    char *ptr_a = &a,
        *ptr_b = &b,
        *ptr_c = &c;

    cout << "Введіть значення для a: ";
    cin >> a;
    cout << "Введіть значення для b: ";
    cin >> b;
    cout << "Введіть значення для c: ";
    cin >> c;

    char temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    char temp1 = *ptr_a;
    *ptr_a = *ptr_c;
    *ptr_c = temp1;

    cout << "Значення a: " << *ptr_a << "\n";
    cout << "Значення b: " << *ptr_b << "\n";
    cout << "Значення с: " << *ptr_c << "\n";
}
