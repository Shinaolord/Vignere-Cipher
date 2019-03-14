#include <iostream>
#include <cstdlib>

std::string encrypt(std::string plaintext, std::string key,int encryptordecrypt);



int main(){
std::cout << "INSTRUCTIONS:: function used is of the form FUNCTION(plaintext,key,encryptordecrypt)\n. Plaintext and key are strings, they are seperated by a comma.\n If you include spaces in your key,";
std::cout<< "please put a space between the comma and the key\n ( Use the form (plaintext, key) if key contains spaces. For example, the input (attack at dawn, secret key) is a valid\n";
std::cout<<"Input for plaintext and key, respectively).\n If key has no spaces, the first space is irrelevant.";
std::cout<<" To encrypt, set encryptordecrypt >0. To decrypt, set it <0." <<std::endl;
std::string plaintext,key;
int enorde;
std::cout<<"\n \n \n Please input your message, key, and whether to encrypt or decrypt according to the instructions above"<<std::endl;
 while(std::getline(std::cin,plaintext, ',') && std::getline(std::cin,key,',') && std::cin>>enorde){
        std::cout << encrypt(plaintext,key,enorde) << std::endl;
        std::cin.ignore(1,'\n');

}

return 0;
}
