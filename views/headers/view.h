#pragma once

#include<iostream>
#include<tuple>

int main_menu();
std::tuple<int,bool,std::string,std::string,
std::string,std::string> create_account();
std::tuple<std::string,std::string> user_login_menu();
std::string get_username();
std::string get_password();
void user_menu();