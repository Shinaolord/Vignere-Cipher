#include <iostream>
#include <cstdlib>

std::string encrypt(std::string plaintext, std::string key,int encryptordecrypt);



int main(){
std::cout << "Please input the message, then the key, separated by a comma, and then after another comma, either true=encrypt or false=decrypt" << std::endl;
std::string plaintext,key;
int enorde;
 while(std::getline(std::cin,plaintext, ',') && std::getline(std::cin,key,',') && std::cin>>enorde){
        std::cout << encrypt(plaintext,key,enorde) << std::endl;
        std::cin.ignore(1,'\n');

}

return 0;
}
