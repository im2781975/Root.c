/***/
void strCpy(char *str, char *ing, int n){
    int i = 0, j = 0;
    while(str[i] != '\0'){
        if(i == n)
            break;
        ing[j] = str[i];
        i++; j++;
    }
    ing[j] = '\0';
    printf("copied string is: %s", ing);
}
__main(){
    char str[32], ing[32];
    int n; scanf("%s%d", &str, &n);
    strCpy(str, ing, n);
}
/***/
/*
void strCat(char *str, char *ing, int n){
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
    printf("After Concat string is: %s", str);
}*/
void strCat(char *str, char *ing, int n){
    int i = 0, j = 0, len = 0;
    while(str[i] != '\0'){
        len++; i++;
    }
    while(ing[j] != '\0'){
        if(j == n)  
            break;
        str[len + j] = ing[j];
        j++;
    }
    printf("After Concat String is: %s", str);
}
__main(){
    char str[32] = "molla", ing[] = "vai";
    int n = 3;
    strCat(str, ing, 2);
}
/***/
void strrev(char *str, char *ing, int len){
    int i = 0, j = 0;
    while(str[i]!= '\0'){
        ing[j] = str[len - 1];
        i++; j++; len--;
    }
    printf("Reverse of %s is: %s", str, ing);
}
__main(){
    char str[30] = "i am", ing[30];
    int len = strlen(str);
    strrev(str, ing, len);
}
/***/
// copy String
void copy1(char *a, char *b){
    for(int i = 0; (a[i] = b[i])!= '\0'; ++i){}
}
void copy2(char *a, const char *b){
    /*for(int i = 0; (a[i] = b[i])!= '\0'; ++i){}*/
    for(;(*a = *b)!= '\0'; ++a, ++b){}
}

void printChar(){
    char ch;
    puts("Enter char: ('q' for quit)");
    while((ch = getchar())!= 'q'){
        if(ch != '\n'){
            printf("Char is: %c", ch);
            puts("\nEnter char: ");
        }
    }
}
void CharArr(){
    char str[20];
    scanf("%19s", str);
    printf("%s", str);
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
/***/
int length(char *arr){
    int len = 0, i = 0;
    while(arr[i]!= '\0'){
        len++; i++;
    }
    printf("Length of the string is: %d", len);
}
__main(){
    char arr[100]; scanf("%s", &arr);
    length(arr);
}
/***/
void strCpy(char *str, char *ing){
    int i = 0, j = 0;
    while(str[i] != '\0'){
        ing[j] = str[i];
        i++; j++;
    }
    printf("Copied string is: %s", ing);
}
__main(){
    char str[32], ing[32];
    scanf("%s", &str);
    strCpy(str, ing);
}
/***/
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

void GradeCount(){
    unsigned int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    puts("Enter Grade:('q' for Quit)");
    int grade;
    while((grade = getchar())!= 'q'){
        switch(grade){
            case 'A'://ignore
            case 'a':++countA; break;
            case 'B'://ignore
            case 'b': ++countB; break;
            case 'C'://ignore
            case 'c':++countC; break;
            case 'D'://ignore
            case 'd': ++countD; break;
            case 'F'://ignore
            case 'f': ++countF; break;
            case ' '://ignore
            case 't'://ignore
            case '\n': //ignore;
                break;
            default:
                puts("Enter new grade");
                break;
        }
    }
    puts("Total for Each Letter are");
    printf("A: %d\n", countA);
    printf("B: %d\n", countB);
    printf("C: %d\n", countC);
    printf("D: %d\n", countD);
    printf("F: %d\n", countF);
}
#define SIZE 80
int TestPalindrome(char *arr, int left, int right){
    if(left >= right)
        return 1;
    else if(arr[left]!= arr[right])
        return 0;
    else
        return TestPalindrome(arr, left + 1, right - 1);
}
__main(){
    char str[SIZE], ing[SIZE];
    puts("Enter sentence: ");
    char ch;
    unsigned int cnt = 0;
    while((ch = getchar())!= '\n' && cnt < SIZE - 1){
        str[cnt++] = ch;
    }
    str[cnt] = '\0';
    unsigned int copyCnt = 0;
    for(unsigned int i = 0; str[i] != '\0'; ++i){
        if(str[i]!= ' ' && str[i]!= ',' && str[i]!= '.' && str[i]!= '!')
            ing[copyCnt++] = tolower(str[i]);
    }
    ing[copyCnt] = '\0';
    (TestPalindrome(ing, 0, copyCnt - 1))? printf("%s is palindrome", str): printf("%s isn't palindrome", str);
}
