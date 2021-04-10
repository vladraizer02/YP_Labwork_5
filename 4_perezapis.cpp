#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    string stroka;
    ifstream f1("/home/student/file_1.txt");
    ofstream f2("/home/student/file_2.txt", ios::app);
    while (getline(f1, stroka)) {
        f2 << stroka << endl;
    }
    f1.close();
    f2.close();
    return 0;
}
