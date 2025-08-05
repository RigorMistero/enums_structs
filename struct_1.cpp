#include <iostream>
#include <cstring>

struct account
{
int account_number;
std::string acc_owner_name;
float money_amount;
};

void update_balance (account& acc, float new_balance)
{
    acc.money_amount = new_balance;

}

int main(int argc, char** argv)
{

account acc{};

int account_num{};
std::string name{};
float balance{};
float new_balance{};


std::cout << "Enter the account number: ";
std::cin >> acc.account_number;

std::cout << "Enter name: ";
std::cin >> acc.acc_owner_name;

std::cout << "Enter balance: ";
std::cin >> acc.money_amount;

std::cout << "Enter new balance: ";
std::cin >> new_balance;

update_balance (acc,new_balance );

std::cout << std::endl;
std::cout << "Your account: " << acc.acc_owner_name << ", " << acc.account_number << ", " << acc.money_amount;


    return EXIT_SUCCESS;
}
