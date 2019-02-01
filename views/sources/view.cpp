#include "../../models/headers/my_funcs.h"
#include "../../models/headers/Account.h"

#include<iostream>

int main_menu() 
{
    print("\t _____ Main Menu _____\n \
    \t 1. Users Login\n \
    \t 2. Admin Login\n \
    \t 3. Create Account\n \
    \t 4. Exit\n" ); 
    print("\n \t Enter Command #:      ");
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


std::string get_username() {
    print("\nEnter Username:          ");
    std::string username;
    std::cin >> username;
    return username;
}

std::string get_password() {
    print("Enter Password:          ");
    std::string password;
    std::cin >> password;
    return password;
}

void create_account() {
    print("\n_______ Create Account _______");
    int acnt_num;
    std::string type, username, password, first_nm, last_nm;
    print("\nEnter Account Number:    ");
    std::cin >> acnt_num;
    print("\nType (User or Admin):    ");
    std::cin >> type;
    print("\nEnter First Name:        ");
    std::cin >> first_nm;
    print("\nEnter Last  Name:        ");    
    std::cin >> last_nm;
    print("\nEnter Username:          ");
    std::cin >> username;
    print("\nEnter Password:          ");
    std::cin >> password;
    
}

void user_menu() {
    print("1. Deposit");
    print("2. Withdraw");
    print("3. History");
}