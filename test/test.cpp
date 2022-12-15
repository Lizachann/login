#include <fstream>
#include <string>
#include<iostream>
using namespace std;
int main()
{
    fstream f;
    f.open("Geeks for Geeks.txt", ios::app);
    if (!f)
        cout<< "No such file found";
    else {
        f << " String_fstream";
        cout << "Data appended successfully\n";
        f.close();
        string word;
        f.open("Geeks for Geeks.txt");
        while (f >> word) {
            cout << word << " ";
        }
        f.close();
    }
    return 0;
}
