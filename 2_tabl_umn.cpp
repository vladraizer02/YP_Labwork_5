#include <iostream>
#include <iomanip>
using namespace std;

void tabl_umn(int sistema)
{
    if (sistema == 10) {
        for (int i = 1; i < 10; i++) {
            for (int j = 1; j < 10; j++)
                cout << setw(5) << i*j;
            cout<<endl;
        }
    }
    else if (sistema == 8) {
        for (int i = 1; i < 8; i++) {
            for (int j = 1; j < 8; j++)
                cout << oct << setw(5) << i*j;
            cout<<endl;
        }
    }
    else if (sistema == 16) {
        for (int i = 1; i < 16; i++) {
            for (int j = 1; j < 16; j++)
                cout << hex << setw(5) << i*j;
            cout<<endl;
        }
    } else {
        cout << "Данная таблица не поддерживается" << endl;
    }
}

int main(int argc, char **argv)
{
    cout << "Введите систему счисления" << endl;
    int sistema;
    cin >> sistema;
    tabl_umn(sistema);
    return 0;
}
