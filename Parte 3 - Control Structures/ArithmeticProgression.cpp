#include<iostream>

using namespace std;

int main(){
    int a = 2, b = 10, aum = 3,sum = 0;
    sum = a;
    for (int i = 0; i <= b; i++)
    {
        sum=a+(aum*i);
        cout<<sum<<endl;
    }
    
    return 0;
}