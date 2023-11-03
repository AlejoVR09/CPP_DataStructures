#include<iostream>

using namespace std;
#define cost 880; 
int main(){
    float km = 88, gaso = 11;
    float gasoPerKM = gaso / km;
    float costPerKM = gasoPerKM * cost;

    cout<<gasoPerKM<<endl<<costPerKM<<endl;

    return 0;
}