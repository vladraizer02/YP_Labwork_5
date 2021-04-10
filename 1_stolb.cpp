#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
    int massiv[10];
    int chislo;
    int i;
    cout << "Введите 10 целых чисел" << endl;
    for (i = 0; i < 10; i++) {
        cin >> chislo;
        if (cin.good()) {
            massiv[i] = chislo;
        } else {
            cout << "Введено не целое число" << endl;
            break;
        }

    }
    if (i > 9) {
        cout << "Вывод столбцов целых чисел" << endl;
        for (int i = 0; i < 10; i++) {
            cout << setw(5) << oct << massiv[i] << setw(5) << dec << massiv[i] << setw(5) << hex << massiv[i] << endl;
        }
    }
    return 0;
}
