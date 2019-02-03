#include "../../models/headers/my_funcs.h"
#include "../../models/headers/Account.h"

#include<iostream>
#include<tuple>

int main_menu() 
{
    print(" _____ Main Menu _____ \
    \n 1.  Users Login \
    \n 2.  Admin Login \
    \n 3.  Create Account \
    \n 4.  Exit" ); 
    print("\n\n Enter Command #:   ");
    int cmd;
    std::cin >> cmd;
    return cmd;
}

// void user_info(int* usrnm, int* pswrd) {
//     int* arr = 
// 

// int user_login() 
// {
//     print("\n_______ User Login _______");
//     int rand_var1;
//     int rand_var2;
//     std::cin >> rand_var1;
//     std::cin >> rand_var2;
//     int* arr = new int[2];
//     arr[0] = rand_var1;
//     arr[1] = rand_var2;
//     return arr;
// }


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

void user_menu() {
    print("1. Deposit");
    print("2. Withdraw");
    print("3. History");
}