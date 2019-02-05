#include "../headers/Accounts.h"

/*                              User Methods                                */
// Constructor with Parameter; with Initializer List
User::User(int acnt_num_I, std::string type_I, std::string username_I,
std::string password_I, std::string first_nm_I, std::string last_nm_I):   
    acnt_num{acnt_num_I}, type{type_I}, username{username_I}, 
    password{password_I}, first_nm{first_nm_I}, last_nm{last_nm_I} {}

std::ostream& operator <<(std::ostream& out, const User& user)
{
    out << user.acnt_num << std::endl;
    return out;
}


/*                              Admin Methods                                */
Admin::Admin(std::string type_I, std::string username_I, std::string password_I,
std::string first_nm_I, std::string last_nm_I):   
    type{type_I}, username{username_I}, password{password_I}, 
    first_nm{first_nm_I}, last_nm{last_nm_I} {}
