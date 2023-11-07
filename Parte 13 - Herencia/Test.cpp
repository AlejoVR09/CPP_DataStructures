#include <iostream>

using namespace std;

class user{
    public:
        user (string nombre) {};
    protected:
        string nombre;
};

class worker : public user{
    public:
        
    private:
};

class engineer : public user, public worker {
    public:

    private:
};

int main(){

    return 0;
}