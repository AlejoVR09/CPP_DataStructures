#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main (){

    int vector[100]={};
    srand(time(NULL));
    for (int i = 0; i <= 100; i++)
    {
        vector[i]=rand()%100;
        cout<<vector[i]<<endl;
    }
    
    return 0;
}