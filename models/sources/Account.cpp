#include "../headers/Account.h"

// Constructor with Initializer List
Account::Account(const int acnt_num_I, std::string type_I, std::string username_I, std::string password_I, std::string first_nm_I, std::string last_nm_I)
    :   acnt_num{acnt_num_I}, type{type_I}, username{username_I}, 
        password{password_I}, first_nm{first_nm_I}, last_nm{last_nm_I}
{
}

// int main()
// {
//     Account Yes(1,"a","b","c","d","e");
//     std::cout << Yes.get_acnt_num() << std::endl;
//     return 0;
// }

