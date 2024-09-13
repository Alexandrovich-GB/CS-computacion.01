#include <string>

class Account {
public:
    Account(std::string accountName, int initialBalance)
        :name{accountName} { 
            
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }
    void deposit(int depositAmount ) {
        if (depositAmount > 0 ){
            balance = balance + depositAmount;
        }
    }

    int getBalance() const{
        return balance;
    }

    void reti(int retiAmount) {
        if( retiAmount <= balance){
            balance= balance-retiAmount;
        }
    }   

    
    void setName(std::string accountName){
        name = accountName;
    }
    std::string getName() const{
        return name;
    }
private:
    int balance{0};    
    std::string name;


};