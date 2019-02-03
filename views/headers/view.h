#pragma once

#include<iostream>
#include<tuple>

int main_menu();
int user_login();
std::tuple<int,std::string,std::string,std::string,
std::string,std::string> create_account();
std::string get_username();
std::string get_password();
void user_menu();