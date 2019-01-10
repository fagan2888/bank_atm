#pragma once
#include <iostream>

class Account {
private:
    int acnt_num;               // 00011120302
    std::string type;                // User or Admin
    std::string username;            // ex. julio1021
    std::string password;            // ex. is_password
    std::string first_nm;            // ex. Julio
    std::string last_nm;             // ex. Cernadas
public:
    Account(int acnt_num_I, std::string type_I, std::string username_I,
    std::string password_I, std::string first_nm_I, std::string last_nm_I);
    
    void show_acnt();

    // Getters
    int get_acnt_num() {return acnt_num;}
    std::string get_acnt_type() {return type;}
    std::string get_name() {return first_nm + " " + last_nm;}

    // Delete
    void delete_acnt();
};
