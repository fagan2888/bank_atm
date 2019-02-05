#include "../../models/headers/my_funcs.h"
#include "../../models/headers/Accounts.h"

#include<iostream>
#include<tuple>

int main_menu() 
{
    print(" _____ Main Menu _____ \
    \n 1.  Create Account \
    \n 2.  Users Login \
    \n 3.  Admin Login \
    \n 4.  Exit" ); 
    print("\n\n Enter Command #:   ");
    int cmd;
    std::cin >> cmd;
    return cmd;
}

// Acquiring all user inputs to create account type
std::tuple<int,std::string,std::string,std::string,
std::string,std::string> create_account() {
    print("_______ Create Account _______");
    int acnt_num;
    std::string type, username, password, first_nm, last_nm;
    print("\nEnter Account Number:    ");
    std::cin >> acnt_num;
    print("Type (User or Admin):    ");
    std::cin >> type;
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
