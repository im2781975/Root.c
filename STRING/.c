#include<stdio.h>
#include<string.h>
void copy1(char *a, char *b){
    for(int i = 0; (a[i] = b[i]) != '\0'; i++){}
}
void copy2(char *a, const char *b){
    for(;(*a = *b) != '\0'; ++a, ++b){}
}
void strCpy(char *str, char *ing){
    int i = 0, j = 0;
    while(str[i] != '\0')
        ing[j++] = str[i++];
    ing[j] = '\0';
    printf("%s", ing);
}
int main(){
    char str[100], ing[100];
    scanf("%s", str);
    strCpy(str, ing);
    char ring[100];
    //copy1(ring, ing);
    copy2(ring, ing);
    int i = 0;
    while(ring[i] != '\0'){
        printf("%c", ring[i]); i++;
    }
}
include<stdio.h>
#include<string.h>
void strnCat(char *str, char *ing, int n){
    int i = 0, j = 0, len = 0;
    while(str[i] != '\0'){
        i++; len++;
    }
    while(ing[j] != '\0'){
        if(j == n) break;
        str[j + len] = ing[j];
        j++;
    }
    printf("%s", str); /*
    int i = 0, j = 0, len = 0;
    while(str[i] != '\0'){
        if(i == n)
            break;
        len++; i++;
    }
    while(ing[j] != '\0'){
        str[len + j] = ing[j];
        j++;
    }
    printf("After Concat string is: %s", str); */
}
void strrev(char *str, char *ing, int len){
    int i = 0, j = 0;
    while(str[i] != '\0'){
        ing[j] = ing[len - 1];
        j++; i++; len--;
    }
printf("\nReverse of %s is: %s", str, ing);
}
int main(){
    char str[32] = "molla", ing[] = " vai";
    strnCat(str, ing, 2);
    int len = strlen(str);
    strrev(str, ing, len);
}
