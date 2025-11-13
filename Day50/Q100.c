//Print all sub-strings of a string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *str = NULL;
    str = (char*)malloc(100*sizeof(char));
    if(str == NULL){
        printf("Error memory not allocated.");
        return -1;
    }
    printf("Enter the string: ");
    fgets(str,100,stdin);

    int len = strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
        len--;//\n was removed
    }
    int start = 0;
    for(int i = start;str[i]!='\0';i++){
        printf("%c",str[i]);
        if(i==len){
            start++;
            printf(", ");
        }
    }
    return 0;
}