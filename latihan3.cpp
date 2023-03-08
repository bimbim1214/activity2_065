#include <iostream>
using namespace std;
double P, L;

void input(){
    cout << "masukan pangjangnya = ";
    cin >> P;
    cout << "masukan lebarnya = ";
    cin >> L;
}

double proses(){
    return P*L;
}

double proses2(double a, double b){
    return a*b;
}

void output(){
    cout << "luasnya = " << proses();
    cout << "\nluasnya ke 2 = " << proses2(P,L);
}

int main (){
    input();
    output();
}