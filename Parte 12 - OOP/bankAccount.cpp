#include<iostream>

using namespace std;

class bankAccount {
    
    public:
        float getMoney();
        void setMoney(float money){
            money = money;
        };
        bankAccount(string, float);
        void addMoney(float moneyRecieve);
        void retireMoney(float moneyRetire);

    private:
        string accountId;
        float money;
};

float bankAccount::getMoney(){
    return money;
};

bankAccount::bankAccount(string _accountId, float _money){
    money = _money;
    accountId = _accountId;
};

void bankAccount::addMoney(float moneyRecieve){
    money = money + moneyRecieve;
};

void bankAccount::retireMoney(float moneyRetire){
    money = money - moneyRetire;
};

int main (){
    fflush(stdin);
    bankAccount account_1("1234567890", 10000);
    fflush(stdin);
    cout<<account_1.getMoney()<<endl;
    account_1.addMoney(123546);
    cout<<account_1.getMoney()<<endl;
    account_1.addMoney(12);
    cout<<account_1.getMoney()<<endl;
    return 0;
}