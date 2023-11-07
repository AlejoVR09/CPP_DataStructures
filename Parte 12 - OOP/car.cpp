#include <iostream>
#include <string>

using namespace std;
class car {
    private:
        float speed;
        string brand;
        
        // car(string brand, float speed){
        //     brand = brand;
        //     speed = speed;
            
        // }

    public:
        void getBrand();
        car(string, float);

};

car::car(string brand, float speed){
    this->brand = brand;
    this->speed = speed;
    
};

int main(){
    car car("Mazda", 100);
    return 0;
}
