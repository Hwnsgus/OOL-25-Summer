#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(const string& name, double initial) {
        // 생성자 로직을 작성해주세요.
        // 생성자 매개변수 설명: 소유자 이름(name), 초기 잔액(initial)

         owner = name;

        balance = initial;

    }

    void deposit(double amount) { 
        balance += amount;
    }

    bool withdraw(double amount) {
        // 출금 로직을 작성해주세요.
        if (amount < 0 || balance < amount)
        {
            return false;
        }

        if (balance > amount) {
            balance -= amount;

            return true;
        }
    }

    double getBalance() const {
        // 현재 잔액 반환 로직을 작성해주세요.
        return balance;
    }

    // 계좌 정보 출력하는 함수 (구현하실 필요 없음)
    void printInfo() const {
        cout << "Owner: " << owner << ", Balance: " << balance << " won\n";
    }
};

int main() {
    BankAccount account("Alice", 1000);
    account.printInfo(); // Owner: Alice, Balance: 1000 won

    account.deposit(500);
    account.printInfo(); // Owner: Alice, Balance: 1500 won

    if (account.withdraw(2000)) {
        cout << "Withdraw OK!\n"; // 이건 출력 안됨
    }
    else {
        cout << "Withdraw FAILED!\n"; // 이것이 출력됨
    }

    if (account.withdraw(1000)) {
        cout << "Withdraw OK!\n"; // 이것이 출력됨
    }

    account.printInfo(); // Owner: Alice, Balance: 500 won
}