# Vignere-Cipher
Vignere Cipher, automatically repeats key if plaintext.length() > key.length()
The input format for the function is plaintext,key. plaintext and key can include spaces, but spaces within the key will be removed.

Note that this is a generalization of the Caesar Cipher, say, for example, we want a caesar cipher shift of 5, then we can type into the vignere cipher plaintext,f, since a=0,b=1,c=2,d=3,e=4,f=5 in standard encrypton.


Need to incorporate decryption, so you don't have to find key[i]+26%26 (or -key[i] % 26, but this can cause numbers <0 in C++ without using 26-key[i] (congruent to) -key[i],
