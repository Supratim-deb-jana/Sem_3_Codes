/*...To read and display a text using a character pointer to a string.
Also count the number of characters,word and lines in the text...*/

#include<stdio.h>
#define MAX 100
int Count_characters(char *ptr);
int Count_word(char *ptr);
int Count_line(char *ptr);

void main(){
    char str[MAX];
    int character,word,line;
    printf("Enter a String: ");
    scanf("%[^\:]",str);
    
    character = Count_characters(str);
    word = Count_word(str);
    line =  Count_line(str);

    printf("Total Characters are:%d\n",character);
    printf("Total Words are:%d\n",word);
     printf("Total lines are:%d\n",line);
}

int Count_characters(char *ptr){
    int C=0;
    while(*ptr != '\0'){
        if(*ptr!=' ' && *ptr!='\n' && *ptr!='\t' && *ptr!=':'){
            C++;
        }
        ptr++;
        
    }
    return C;
}

int Count_word(char *ptr){
    int C=0;
    int inword=0;
    while(*ptr != '\0'){
        if(*ptr!=' ' && *ptr!='\t' && *ptr!=':'){// I AM A BOY  INWORD=0
            if(inword==0){
                C++;
                inword=1;
            }
        }else{
            inword=0;
        }
        ptr++;
        
    }
    return C;
}

int Count_line(char *ptr){
    int C=1;
    if(*ptr!='\0'){
        while(*ptr != '\0'){
        if(*ptr=='\n'){
            C++;
        }
        ptr++;
        
    }
    }else{
        return 0;
    }
    return C;
}