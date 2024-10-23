#include <string>

// polyalphabatic cipher
std::string encrypt_polyalphabetic_cipher(std::string &plain_text);
std::string decrypt_polyalphabetic_cipher(std::string &cipher_text);

// vernam cipher
std::string encrypt_vernam_cipher(std::string &plain_text);
std::string decrypt_vernam_cipher(std::string &cipher_text);
