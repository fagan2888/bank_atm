#include "models/headers/Account.h"
#include "models/headers/my_funcs.h"
#include "views/headers/view.h"

#include<iostream>
#include<string>
#include<tuple>
using namespace std;

void Account_creation() 
{
    auto [acnt_num,type,first_nm,last_nm,
            username,password] = create_account();
    User user(acnt_num,type,first_nm,last_nm,username,password);
}

int main() 
{
    Account_creation();
    return 0;
}