#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1; 
        ptr++;
    }
}
void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1; 
        ptr++;
    }
}

int main(){
    char c[] = "come to this room";

    printf("Original String is %s\n" , c);

    encrypt(c);
    printf("Encrypted string is: %s\n", c);

    decrypt(c);
    printf("Decrypted string is: %s\n", c);

    return 0;
}