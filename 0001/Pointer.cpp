// copy String
void copy1(char *a, char *b){
    for(int i = 0; (a[i] = b[i])!= '\0'; ++i){}
}
void copy2(char *a, const char *b){
    /*for(int i = 0; (a[i] = b[i])!= '\0'; ++i){}*/
    for(;(*a = *b)!= '\0'; ++a, ++b){}
}
__main(){
    char str[20];
    char *ing = "Hello";
    copy1(str, ing);
    int i = 0;
    puts("After copy str is: ");
    while(str[i]!= '\0'){
        printf("%c", str[i]);
        i++;
    }
    
    char arr[20];
    char *ch = "Hello";
    copy2(arr, ch);
    
    printf("\nAfter Copy Str is: %s", arr);
}
