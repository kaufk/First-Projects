#include<iostream>
#include<string>
using namespace std;


int main()
{
    cout << "Trocarei a primeira letra pela ultima!" << endl;
    string name;
    getline(cin, name);
    char letra1 = name[0];
    int ultimo = name.length() - 1;
    char letra2 = name[ultimo];
    name[0] = letra2, name[ultimo] = letra1;
    cout << name;
    return 0;
}