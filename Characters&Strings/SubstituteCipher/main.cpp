#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"};
    string key {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr8521390647"};

    string message;
    cout << "Enter your secret message: ";
    getline(cin, message);

    cout << "\nEncrypting message..." << endl;
    string encrypted_message {};

    for (char c: message){
        size_t position = alphabet.find(c);
        if (position != string::npos){
            encrypted_message += key.at(position);
        }else{
            encrypted_message += c;
        }
    }

    cout << "\nEncrypted message: " << encrypted_message << endl;;

    string decrypted_message {};
    cout <<"\nDecrypting message..." << endl;

    for (char c: encrypted_message){
        size_t position = key.find(c);
        if (position != string::npos){
            decrypted_message += alphabet.at(position);
        }else{
            decrypted_message += c;
        }
    }

    cout << "\nDecrypted message: " << decrypted_message << endl;

    return 0;
}
