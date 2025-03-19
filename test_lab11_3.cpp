#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
    srand(time(0));

    int n;
    cout << "Введіть розмір масивів: ";
    cin >> n;

    int* p = new int[n];
    int* q = new int[n];

    int a = 0, b = 0;
    cout << "Масив p: ";
    for (int i = 0; i < n; i++) {
        p[i] = rand() % 2;
        cout << p[i] << " ";
        if (p[i] == 1) a++;
    }

    cout << "\nМасив q: ";
    for (int i = 0; i < n; i++) {
        q[i] = rand() % 2;
        cout << q[i] << " ";
        if (q[i] == 1) b++;
    }

    cout << "\nКількість одиниць у p: " << a << "\n";
    cout << "Кількість одиниць у q: " << b << "\n";

    if (a > b)
        cout << "Масив p має більше елементів, рівних 1." << "\n";
    else if (a < b)
        cout << "Масив q має більше елементів, рівних 1." << "\n";
    else
        cout << "Обидва масиви мають однакову кількість одиниць." << "\n";

}
