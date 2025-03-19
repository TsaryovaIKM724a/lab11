#include <iostream>

using namespace std;
int main() {
    int* ptr1 = new int(22);
    int* ptr2 = new int(33);

    cout << "До обмена:" << endl;
    cout << "ptr1: " << *ptr1 << ", ptr2: " << *ptr2 << "\n";

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "Посля обмена:" << "\n";
    cout << "ptr1: " << *ptr1 << ", ptr2: " << *ptr2 << "\n";
}
