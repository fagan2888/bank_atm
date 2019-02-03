#include "models/headers/Account.h"
#include "models/headers/my_funcs.h"
#include "views/headers/view.h"

#include<iostream>
#include<string>
#include<tuple>
using namespace std;


int main() 
{
    auto [acnt_num,type,first_nm,last_nm,
            username,password] = create_account();
    Account user(acnt_num,type,first_nm,last_nm,username,password);
    std::cout << user.get_acnt_num();
    return 0;
}