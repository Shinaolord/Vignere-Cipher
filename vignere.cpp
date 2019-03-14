#include <iostream>
#include <cstdlib>
#include<algorithm>
std::string encrypt(std::string plaintext, std::string key, int encryptordecrypt){
std::string ciphertext="";
std::string dekey="";
    if(key[0]==' '){
       key.erase(std::remove(key.begin(),key.end(),' '),key.end()); }
       unsigned int keylength=key.length(); /* Gets rid of leading spaces */
for( unsigned int i=0; i<plaintext.length();i++){
        if(islower(plaintext[i])){
            plaintext[i]=toupper(plaintext[i]);
        };
        if(islower(key[i%keylength])){
            key[i]=toupper(key[i%keylength]);
        };
    if(encryptordecrypt>0){
            if(plaintext[i]==' '){
                ciphertext+=' ';
            }
            else{

                div_t ptxtdiv= div(plaintext[i]+key[i%keylength]-65*2,26);
                int rem= ptxtdiv.rem;
                ciphertext+= char (rem+65);
        };
    }
   else if(encryptordecrypt<0){
            if(plaintext[i]==' '){
                ciphertext+=' ';
            }
            else{
                dekey+=26-key[i%keylength]+65*2;
                div_t ptxtdiv= div(plaintext[i]+dekey[i%keylength]-65*2,26);
                int rem= ptxtdiv.rem;
                ciphertext+= char (rem+65);
                    };
        };


};
return ciphertext;
}
