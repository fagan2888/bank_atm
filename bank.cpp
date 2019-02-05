#include "models/headers/Accounts.h"
#include "models/headers/my_funcs.h"
#include "views/headers/view.h"

#include<iostream>
#include<string>
#include<tuple>
#include<fstream>
using namespace std;

User* account_creation() 
{
    auto [acnt_num,type,first_nm,last_nm,
            username,password] = create_account();
    return new User(acnt_num,type,first_nm,last_nm,username,password);
}

void account_log()
{
    User* user = account_creation();
    std::cout << (*user).get_acnt_num();
    std::ofstream out("students.txt",ios::app);
    out << *user;
    delete user;
}

int main() 
{
    account_log();
    return 0;
}