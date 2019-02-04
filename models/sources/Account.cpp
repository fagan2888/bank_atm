#include "../headers/Account.h"

// Constructor with Parameter; with Initializer List
User::User(int acnt_num_I, std::string type_I, std::string username_I,
std::string password_I, std::string first_nm_I, std::string last_nm_I):   
    acnt_num{acnt_num_I}, type{type_I}, username{username_I}, 
    password{password_I}, first_nm{first_nm_I}, last_nm{last_nm_I} {}

void User::deposit() 
{
    std::cout << "checking";
}


Admin::Admin(std::string type_I, std::string username_I, std::string password_I,
std::string first_nm_I, std::string last_nm_I):   
    type{type_I}, username{username_I}, password{password_I}, 
    first_nm{first_nm_I}, last_nm{last_nm_I} {}
