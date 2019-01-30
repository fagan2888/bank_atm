#pragma once
#include <iostream>

class Account {
private:
    int acnt_num;        
    std::string type, username, password, first_nm, last_nm;  
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
