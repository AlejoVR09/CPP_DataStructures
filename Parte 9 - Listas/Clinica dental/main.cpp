#include <iostream>

using namespace std;

#define priceCleaning 174000
#define priceBleach 70000
#define priceExtraction 40000
#define priceCovering 30000

struct date
{
    int year, month, day, hour;
};

struct service
{
    bool cleaning;
    bool bleach;
    int covering;
    int extraction;
};


struct clinic
{
    string name;
    float age;
    char genrer;
    int total;
    struct date dateTime;
    struct service service; 

}pacients[20];


void show(){
    for (int i = 0; i < 20; i++)
    {   
        cout<<"\n\n";
        cout<<"Name: "<<pacients[i].name<<endl;
        cout<<"Age: "<<pacients[i].age<<endl;
        cout<<"Genre: "<<pacients[i].genrer<<endl;
        cout<<"Total: "<<pacients[i].total<<endl;
        cout<<"\n"<<endl<<"___________________________________";
    }
    
    
}


int main(){
    show();
    return 0;
}