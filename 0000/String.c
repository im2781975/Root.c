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

//print string
#define SIZE 20
__main(){
    char str[SIZE];
    char arr[] = "Here i am";
    puts("Ente String: ");
    //scanf("%19s", &str);
    fgets(str, SIZE, stdin);
    printf("string str[] is: %s", str);
    printf("\nstring arr[] is: %s", arr);
    puts("\nString with space between char is: ");
    for(size_t i = 0; i < SIZE && str[i]!= '\0'; ++i)
        printf("%c", str[i]);
}

#define Size 80
void ConCate(char *str, const char *Ing){
    while(*str != '\0')
        ++str;
    for(;*str = *Ing; ++str, ++Ing){}
    /*while(*Ing != '\0'){
        *str = *Ing;
        str++; Ing++;
    }
    *str = '\0';*/
}
__main(){
    char str[Size], Ing[Size];
    puts("Enter Strings: ");
    scanf("%79s%79s", &str, &Ing);
    ConCate(str, Ing);
    printf("%s", str);
}
