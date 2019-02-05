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
    auto [acnt_num, type, first_nm, last_nm,
            username, password] = create_account();
    return new User(acnt_num,type,first_nm,last_nm,username,password);
}

void account_log()
{
    // Returning a pointer to a User class, had we just returned a 
    // class then it would've been slower b/c we would need a copy.
    User* user = account_creation();
    std::cout << (*user).get_acnt_num();
    std::ofstream out("students.txt",ios::app);
    out << *user;
    delete user;
}

std::string find_line(std::ifstream& in, std::string username) 
{
    std::string line;
    while (std::getline(in, line)) {
        if (line.find(username) != string::npos) {
            return line;
        }
    }
    return "None";
}

void user_login() 
{
    bool test;
    while (!test) {
        auto [username, password] = user_login_menu();
        std::ifstream in("students.txt");
        std::string line = find_line(in,username);
        if (line.find(password) != string::npos) {
            std::cout << line << std::endl;
            test = 1;
        }
        else {
            std::cout << "Try Again, No Record Found" << std::endl;
        }
    }
}


int main() 
{
    user_login();
    return 0;
}