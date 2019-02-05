#include "../../models/headers/my_funcs.h"
#include "../../models/headers/Accounts.h"

#include<iostream>
#include<tuple>

int main_menu() 
{
    print(" _____ Main Menu _____ \
    \n 1.  Create Account \
    \n 2.  User  Login \
    \n 3.  Admin Login \
    \n 4.  Exit" ); 
    print("\n\n Enter Command #:   ");
    int cmd;
    std::cin >> cmd;
    return cmd;
}

// Acquiring all user inputs to create account type
std::tuple<int,bool,std::string,std::string,
std::string,std::string> create_account() {
    print("_______ Create Account _______");
    int acnt_num;
    bool type;
    std::string type_Input, username, password, first_nm, last_nm;
    print("\nEnter Account Number:    ");
    std::cin >> acnt_num;
    print("Type (User or Admin):    ");
    std::cin >> type_Input;
    if (type_Input == "User") {
        type = 0; 
    }
    else {
        type = 1;
    }
    print("Enter First Name:        ");
    std::cin >> first_nm;
    print("Enter Last  Name:        ");    
    std::cin >> last_nm;
    print("Enter Username:          ");
    std::cin >> username;
    print("Enter Password:          ");
    std::cin >> password;
    return std::make_tuple(acnt_num, type, first_nm, last_nm,
                            username, password);
}

std::tuple<std::string,std::string> user_login_menu() {
    std::string username;
    std::string password;
    print(" _____ Login Menu _____ \
    \n Enter Username:          ");
    std::cin >> username;
    print("Enter Password:          ");
    std::cin >> password;
    return std::make_tuple(username,password);
}

int user_menu() {
    print(" _____ User Menu _____ \
    \n 1. Deposit \
    \n 2. Withdraw \
    \n 3. History");
    print("\n\n Enter Command #:   ");
    int cmd;
    std::cin >> cmd;
    return cmd;
}
