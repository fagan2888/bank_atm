#include "../headers/Account.h"

#include <string>
#include <iostream>
using namespace std;


Account :: Account(int acnt_num_I, string type_I, string username_I,string password_I, string first_nm_I, string last_nm_I) {
        acnt_num = acnt_num_I;
        type     = type_I;
        username = username_I;
        password = password_I;
        first_nm = first_nm_I;
        last_nm  = last_nm_I;
    }


// Delet