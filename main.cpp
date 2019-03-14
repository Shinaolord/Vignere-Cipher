#include <iostream>
#include <cstdlib>

std::string encrypt(std::string plaintext, std::string key);



int main(){
std::cout << "Please input the message, then the key, separated by a comma" << std::endl;
std::string plaintext,key;
 while(std::getline(std::cin,plaintext, ',') && std::getline(std::cin,key)){
        std::cout << encrypt(plaintext,key) << std::endl;

}

return 0;
}
