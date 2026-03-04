/*Write a program to enter a string and count present of vowels in that string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    printf("Enter a string: ");
    scanf("%s", str);

    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
        
    }

    printf("The Number of Vowles is:%d\n",count);


    return 0;
}
