#include <iostream>
#include <cstdlib>

std::string encrypt(std::string plaintext, std::string key);



int main(){
std::cout << "Please input the message, then the key, seperated by a comma (If the key is >1 word, remove the whitespaces" << std::endl;
std::string plaintext,key;
 while(std::getline(std::cin,plaintext, ',') && std::getline(std::cin,key)){
        std::cout << encrypt(plaintext,key) << std::endl;

}

return 0;
}
