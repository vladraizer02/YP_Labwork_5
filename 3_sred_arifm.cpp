#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    string stroka;
    int len, kol;
    ifstream f("/home/student/data_v16.txt");
    double chislo, summa;
    summa = 0;
    kol = 0;
    while (getline(f, stroka)) {
        len = stroka.length();
        string s;
        int sdvig;
        sdvig = 0;
        for (int i = 0; i <= len; i++) {
            if ((stroka[i] == ' ') or (stroka[i] == '\t') or (stroka[i] == '\0')) {
                s = stroka.substr(sdvig,i);
                chislo = stod(s);
                summa += chislo;
                sdvig = i+1;
                kol += 1;
            } 
        }
    }
    f.close();
    cout << "Среднее арифметическое: " << summa/kol << endl;
    return 0;
}
