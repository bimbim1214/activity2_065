#include <iostream>
using namespace std;

double Luas, P, L;
void input(){
    cout << "masukan panngjangnya = ";
    cin >> P;
    cout << "masukan lebarnya = ";
    cin >> L;
}

void proses(){
    Luas = P*L;
}

void output(){
    cout << "luasnya = " << Luas;
}

int main (){
    input();
    proses();
    output();
}