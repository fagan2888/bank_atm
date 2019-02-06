#include "models/headers/Accounts.h"
#include "models/headers/my_funcs.h"
#include "views/headers/view.h"

#include<iostream>
#include<string>
#include<tuple>
#include<fstream>
#include<sstream>
using namespace std;

/*                          Create Account                           */
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
    std::ofstream out("students.txt",ios::app);
    out << *user;
    delete user;
}

/*                          User Login                              */
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

User* user_login() 
{
    bool test;
    int acnt_num; 
    bool type;     
    std::string usrnm, pswrd, first_nm, last_nm; 
    while (!test) {
        auto [username, password] = user_login_menu();
        std::ifstream in("students.txt");
        std::string line = find_line(in,username);
        if (line.find(password) != string::npos) {
            std::istringstream line_stream(line);
            line_stream >> acnt_num >> type >> first_nm >> 
            last_nm >> usrnm >> pswrd;
            test = 1;
        }
        else {
            std::cout << "\n Try Again, No Record Found" << std::endl;
        }
    }
    return new User(acnt_num,type,first_nm,last_nm,usrnm,pswrd);
}


int main() 
{
    int init_cmd;
    while (init_cmd != 4) {
        init_cmd = main_menu();
        if (init_cmd == 1) {
            account_log();
        }
        if (init_cmd == 2) {
            User* user = user_login();
            int cmd = user_main_menu();
            std::cout << cmd;
        }
    }
    std::cout << "\n Exiting Now!";
    return 0;
}