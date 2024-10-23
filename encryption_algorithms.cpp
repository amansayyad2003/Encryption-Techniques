#include "encryption_algorithms.h"
#include <iostream>

#define KEY                 ("deceptive")
#define ALPHABET_SIZE       (96)

// Polyalphabetic encryption 
std::string encrypt_polyalphabetic_cipher(std::string &plain_text){
    std::string cipher_text = "";

    std::string key = KEY;
    int i;

    char temp;
    for(i = 0; i < key.size() && i < plain_text.size(); i++){
        if(plain_text[i] == '\n'){
            break;
        }
        temp = ((plain_text[i] - ' ' + key[i] - ' ') % (ALPHABET_SIZE)) + ' ';
        cipher_text += temp;
    }


    for(int j = 0; j < plain_text.size() && i < plain_text.size(); j++, i++){
        if(plain_text[i] == '\n'){
            break;
        }
        temp = ((plain_text[i] - ' ' + plain_text[j] - ' ') % (ALPHABET_SIZE)) + ' ';
        cipher_text += temp;
    }
    
    return cipher_text;
}

// Polyalphabetic decryption 
std::string decrypt_polyalphabetic_cipher(std::string &cipher_text){
    std::string plain_text = "";

    std::string key = KEY;
    int i;

    char temp;
    for(i = 0; i < key.size() && i < cipher_text.size(); i++){
        temp = (cipher_text[i] - ' ') - (key[i] - ' ');
        if(temp < 0){
            temp = (temp + ALPHABET_SIZE) + ' ';
        }
        else{
            temp = (temp % ALPHABET_SIZE) + ' ';
        }
        plain_text += temp;
    }

    for(int j = 0; j < cipher_text.size() && i < cipher_text.size(); j++, i++){
        temp = (cipher_text[i] - ' ') - (plain_text[j] - ' ');
        if(temp < 0){
            temp = (temp + ALPHABET_SIZE) + ' ';
        }
        else{
            temp = (temp % ALPHABET_SIZE) + ' ';
        }
        plain_text += temp;
    }
    
    return plain_text;
}

// Vernam cipher encryption
std::string encrypt_vernam_cipher(std::string &plain_text){
    std::string cipher_text = "";

    std::string key = KEY;
    int i;

    char temp;
    for(i = 0; i < key.size() && i < plain_text.size(); i++){
        if(plain_text[i] == '\n'){
            break;
        }
        
        temp = (plain_text[i] ^ key[i]) + ' ';
        cipher_text += temp;
    }


    for(int j = 0; j < plain_text.size() && i < plain_text.size(); j++, i++){
        if(plain_text[i] == '\n'){
            break;
        }
        temp = (plain_text[i] ^ plain_text[j]) + ' ';
        cipher_text += temp;
    }
    
    return cipher_text;
}

// vernam cipher decryption 
std::string decrypt_vernam_cipher(std::string &cipher_text){
    std::string plain_text = "";

    std::string key = KEY;
    int i;

    char temp;
    for(i = 0; i < key.size() && i < cipher_text.size(); i++){
        temp = (cipher_text[i] ^ key[i]) + ' ';
        plain_text += temp;
    }

    for(int j = 0; j < cipher_text.size() && i < cipher_text.size(); j++, i++){
        temp = (cipher_text[i] ^ plain_text[j]) + ' ';
        plain_text += temp;
    }
    
    return plain_text;
}


