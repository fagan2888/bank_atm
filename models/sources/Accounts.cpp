#include "../headers/Accounts.h"

/*                              User Methods                                */
// Constructor with Parameter; with Initializer List
User::User(int acnt_num_I, bool type_I, std::string username_I,
std::string password_I, std::string first_nm_I, std::string last_nm_I):   
    acnt_num{acnt_num_I}, type{type_I}, username{username_I}, 
    password{password_I}, first_nm{first_nm_I}, last_nm{last_nm_I} {}

// The purpose of returning references is so we can perform a chain of
// << insertions, rather than just making copies. out.operator<<(user)
std::ostream& operator <<(std::ostream& out, const User& user)
{
    out << user.acnt_num << " " << user.type << " " << user.username << " " 
    << user.password << " " << user.first_nm << " " << user.last_nm << std::endl;
    return out;
}

/*                              Admin Methods                                */
Admin::Admin(std::string type_I, std::string username_I, std::string password_I,
std::string first_nm_I, std::string last_nm_I):   
    type{type_I}, username{username_I}, password{password_I}, 
    first_nm{first_nm_I}, last_nm{last_nm_I} {}
