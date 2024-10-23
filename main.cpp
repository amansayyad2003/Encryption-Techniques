#include <iostream>
#include "encryption_algorithms.h"

using namespace std;

int main(){

    string plain_text;
    string temp;
    cout << "Input text: ";
    
    std::getline(std::cin, plain_text);

    cout << "\nPolyalphanumeric Technique" << endl;
    string cipher_text = encrypt_polyalphabetic_cipher(plain_text);
    cout << "Encrypted text: " << cipher_text << endl;
    
    plain_text = decrypt_polyalphabetic_cipher(cipher_text);
    cout << "Decrypted text: " << plain_text << endl;

    cout << "\nVernam Cipher Technique" << endl;
    cipher_text = encrypt_vernam_cipher(plain_text);
    cout << "Encrypted text: " << cipher_text << endl;
    
    plain_text = decrypt_vernam_cipher(cipher_text);
    cout << "Decrypted text: " << plain_text << endl;

    return 0;
}


