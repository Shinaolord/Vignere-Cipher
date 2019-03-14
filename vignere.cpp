#include <iostream>
#include <cstdlib>
#include<algorithm>
std::string encrypt(std::string plaintext, std::string key){
std::string ciphertext="";
    if(key[0]==' '){
       key.erase(std::remove(key.begin(),key.end(),' '),key.end()); }
       unsigned int keylength=key.length(); /* Gets rid of leading spaces */
    for( unsigned int i=0; i<plaintext.length();i++){
        if(islower(plaintext[i])){
            plaintext[i]=toupper(plaintext[i]);
        };
        if(islower(key[i])){
            key[i]=toupper(key[i]);
        };

        if(plaintext[i]==' '){
            ciphertext+=' ';
        }
        else{
                div_t ptxtdiv= div(plaintext[i]+key[i%keylength]-65*2,26);
        std::cout << ptxtdiv.rem <<std::endl;
                int rem= ptxtdiv.rem;
                ciphertext+= char (rem+65);
        };

    };
return ciphertext;
}
