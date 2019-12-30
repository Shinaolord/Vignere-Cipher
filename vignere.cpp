#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>



std::string encrypt(std::string plaintext, std::string key, int encryptordecrypt){
std::string ciphertext="";
std::string dekey="";
/*
Moves all spaces to the end of the string and returns the position of the first space (ie "1 0 1 0 0 0 1" will modify
*the string to be "1010001     "  and then return the iterator of 7. This is the end of std::remove. key.erase then deletes everything
*from the iterator returned by std::remove to the end of the string
*/
 key.erase(std::remove(key.begin(), key.end(), ' '), key.end());
 unsigned int keylength=key.length();
    for(unsigned int j=0;j<keylength;j++){
        dekey[j]=div(26-(toupper(key[j])-65),26).rem +65;
    };
    for( unsigned int i=0; i<plaintext.length();i++){
        if(islower(plaintext[i])){
            plaintext[i]=toupper(plaintext[i]);
        };
if(islower(key[i])){
            key[i]=toupper(key[i]);
        };
    if(encryptordecrypt>0){
        if(plaintext[i]==' '){
             ciphertext+=' ';
            }
        else{

             div_t ptxtdiv= div(plaintext[i]+key[i%keylength]-65*2,26);
             int rema= ptxtdiv.rem;
             ciphertext+= char (rema+65);
        };
    }
else if(encryptordecrypt<0){
        if(plaintext[i]==' '){
             ciphertext+=' ';
            }
        else{

             int rema= div(plaintext[i]+dekey[i%keylength]-65*2,26).rem;
             ciphertext+= char (rema+65);
             };
    };


};
return ciphertext;
}
