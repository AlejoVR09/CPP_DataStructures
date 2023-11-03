#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a = 1, b = 4, c = 4;
    float root1 = 0, root2 = 0;

    root1 = -b + sqrt((pow(b, 2) - 4 * a * c));
    root2 = -b - sqrt((pow(b, 2) - 4 * a * c));
    
    cout<<root1<<endl;
    cout<<root2<<endl;
    return 0;
}