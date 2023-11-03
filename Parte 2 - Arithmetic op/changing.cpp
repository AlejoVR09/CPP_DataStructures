#include<iostream>

using namespace std;
int main(){
    int a = 25, aux = 0, b = 20;

    a = 25;
    aux = b;
    b = a;

    a = aux;

    cout << a << endl;
    cout << b << endl;
    return 0;
}