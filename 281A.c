// #include <stdio.h>
// int main(){
//     char word[1000];
//     scanf("%s", word);
//     if (word[0]>='a')
//     {
//         word[0]=word[0]-32;
//     }
//     printf("%s\n", word);
//     return 0;   
// }

#include <stdio.h>
#include <ctype.h>
int main(){
    char word[1000];
    scanf("%s", word);
    word[0]=toupper(word[0]);
    printf("%s\n", word);
    
}