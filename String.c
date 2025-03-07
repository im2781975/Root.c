#include<stdio.h>
int main(){
    char ch;
    puts("Enter char: ('q' for quit)");
    while((ch = getchar()) != 'q'){
        if(ch != '\n'){
            printf("Char is: %c", ch);
            puts("\nEnter char: ");
        }
    }/*
    char str[20];
    scanf("%19s", str);
    printf("%s", str); */
}
#include<stdio.h>
#define SIZE 20
int main(){
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
    char *ch = "Hello";
    copy1(ring, ch);
    printf("%s", ring);
}
#include<stdio.h>
#include<string.h>
#define SIZE 80
void concat(char *str, const char *ing){
    while(*str != '\0')
        ++str;
    for(;*str = *ing; ++str, ++ing){}
    /* while(*ing != '\0'){
        *str = *ing; 
        str++; ing++;
    }
    *str = '\0'; */
}
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
int length(char *arr){
    int len = 0, i = 0;
    while(arr[i]!= '\0'){
        len++; i++;
    }
    printf("Length of the string is: %d", len);
}
int main(){
    char str[32] = "molla", ing[] = " vai";
    strnCat(str, ing, 2);
    int len = strlen(str);
    strrev(str, ing, len);
    length(str);
    
    char str[SZ], ring[SZ];
    scanf("%79s%79s", &str, &ring);
    concat(str, ring);
    printf("%s", str);
}
#include<stdio.h>
//Reverse string
int main(){
    char str[100]; scanf("%s", str);
    int len = 0, i = 0;
    while(str[i] != '\0'){
        i++; len++;
    }/*
    for(i = 0, j = len - 1; i < len / 2; i++, j--){
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    printf("%s", str); */
    for(i = len - 1; i >= 0; i--)
        printf("%c ", str[i]);
    return 0;
}
#include<stdio.h>
//concatenate string
int main(){
    char rin[1000]; scanf("%s", rin);
    int n; scanf("%d", &n);
    for(int i = 0; i < n - 1; i++){
        char ing[50]; scanf("%s", &ing);
        int len = 0; 
        while(rin[len] != '\0')
            ++len;
        rin[len] = ' ';
        ++len;
        for(int j = 0; ing[j] != '\0'; ++j, ++len)
            rin[len] = ing[j];
        rin[len] = '\0';
    }
    puts(rin);
}
#include<stdio.h>
//concatenate
char ans[1000]; int k = 0;
void catenate(int len, char str[]){
    if(k > 0){
        ans[k] = ' ';
        k++;
    }
    for(int j = 0; j < len; j++){
        ans[k++] = str[j];
    }
}
int main(){
    int n, len; scanf("%d", &n);
    char str[100];
    for(int i = 0; i < n; i++){
        scanf("%s", str);
        catenate(strlen(str), str);
    }
    ans[k] = '\0';
    printf("%s", ans);
    return 0;
}
#include<stdio.h>
//Grade Count
int main(){
    unsigned int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    puts("Enter Grade:('q' for Quit)");
    int grade;
    while((grade = getchar())!= 'q'){
        switch(grade){
            case 'A': //ignore
            case 'a':++countA; break;
            case 'B': //ignore
            case 'b': ++countB; break;
            case 'C': //ignore
            case 'c':++countC; break;
            case 'D': //ignore
            case 'd': ++countD; break;
            case 'F': //ignore
            case 'f': ++countF; break;
            case ' ': //ignore
            case 't': //ignore
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
#include<stdio.h>
#define SIZE 80
int TestPalindrome(char *arr, int left, int right){
    if(left >= right) return 1;
    else if(arr[left] != arr[right]) return 0;
    else return TestPalindrome(arr, left + 1, right - 1);
}
int main(){
    char str[SIZE], ing[SIZE];
    char ch;
    unsigned int cnt = 0;
    while((ch = getchar()) != '\n' && cnt < SIZE - 1){
        str[cnt++] = ch;
    }
    str[cnt] = '\0';
    unsigned int copyCnt = 0;
    for(unsigned int i = 0; str[i] != '\0'; ++i){
        if(str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != '!')
            ing[copyCnt++] = tolower(str[i]);
    }
    ing[copyCnt] = '\0';
    (TestPalindrome(ing, 0, copyCnt - 1))? printf("%s is palindrome", str): printf("%s isn't palindrome", str);
}
#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    char str[100][100];
    getchar();
    for(int i = 0; i < n; i++)
        fgets(str[i], sizeof(str[i]), stdin);
    for(int i = 0; i < n; i++)
        printf("%s\n", str[i]);
    /*   
    char ing[n][100];
    getchar();
    for(int i = 0; i < n; i++){
        printf("Enter line %d: ", i + 1);
        fgets(ing[i], sizeof(ing[i]), stdin);
    }
    for(int i = 0; i < n; i++)
        printf("%s\n", ing[i]); */
    /*    
    char ring[100];
    getchar();
    for(int i = 0; i < n; i++){
        printf("Enter line %d: ", i + 1);
        fgets(ring, sizeof(ring), stdin);
        printf("%s\n", ring);
    } */
    /*
    char str[SIZE], ing[SIZE] = "Lateral";
    scanf("%19s", str);
    printf("str is: %s\ning is: %s\n", str, ing);
    for(size_t i = 0; i < SIZE && str[i] != '\0'; ++i)
        printf("%c ", str[i]); */
    /*
    char country[] = {'A', 'R', 'A', 'B'};
    int len = 4;
    printf("%s\n", country);
    for(int i = 0; i < len; i++){
        if(country[i] >= 65 && country[i] <= 90)
            country[i] = 'a' + (country[i] - 'A');
    }
    printf("%s", country); */
    /*
    char line[80];
    scanf("%79[^\n]", line);
    printf("%s\n", line);
    char ch; ch = getchar();
    printf("%c", ch); */
    
    // shift char
    char str[100];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] + 2;
    }
    printf("%s", str);
    
    //strcat
    char str[100], buffer[1000] = " ";
    getchar();
    for(int i = 0; i < n; i++){
        fgets(str, sizeof(str), stdin);
        strcat(buffer, str);
    }
    printf("%s", buffer);
    
    //length
    char str[100];
    while(fgets(str, sizeof(str), stdin)){
        int cnt = 0;
        for(int i = 0; str[i] != '\0'; i++){
            if(((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') || (str[i + 1] >= 'a' && str[i + 1] <= 'z')))
                cnt++;
        }
        printf("%d", cnt);
    }
}
#include<stdio.h>
// Not Palindrome
int main(){
    char str[21];
    while(scanf("%s", &str) != EOF){
        int l = 0, r = strlen(str) - 1, cnt = 0;
        while(l < r){
            if(str[l] != str[r])
                cnt++;
            l++; r--;
        }
        printf("%d", cnt);
    }
}
#include<stdio.h>
// check palindrome
int main(){
    int flag =0;
    char str[100]; scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++){
        if(str[i] != '0' && str[len - i - 1] != '1')
            flag = 1;
    }
    (flag == 0) ? puts("Yes") : puts("No");
}
#include<stdio.h>
int main() {
    int t; scanf("%d", &t);
    char str[100];
    getchar();  
    while (t--) {
        fgets(str, sizeof(str), stdin); 
        str[strcspn(str, "\n")] = '\0';
        printf("%s\n", str);
    }
}
#include<stdio.h>
#define SZ 128
int main(){
    char str[10][10];
    int i = 0, total = 0;
    while(i < 10){
        printf("Input line %d: ", i + 1);
        if (fgets(str[i], SZ, stdin) != NULL){
            //Remove newline if present
            str[i][strcspn(str[i], "\n")] = '\0';
            i++;
        }
        else
            break;
    }
    total = i;
    for(int i = 0; i < total; i++)
        printf(" %s\n", str[i]);
    puts("");
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[50] = {'\0'}, arr[50] = "Best";
    strcpy(str, "Hello");
    int x = strlen(str) * (0.5);
    for(int i = 0; str[i] != '\0'; ++i)
        str[x + i] = arr[i];
    printf("arr = %s\tstr = %s\n", arr, str);
    strncpy(str, arr, 4);
    printf("str = %s\tarr = %s\n", str, arr);
    strcat(str, arr);
    printf("str = %s\tarr = %s\n", str, arr);
    (strcmp(arr, str) > 0)?strcat(str, " Flash") : strcat(arr, "lash");
    printf("str = %s\tarr = %s\n", str, arr);
}
#include<stdio.h>
void func(char *str, int d){
    for(int i = 0; i < strlen(str); ++i){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            str[i] = 'a' + (ch - 'a' + d) % 26;
        else if(ch >= 'A' && ch <= 'Z')
            str[i] = 'A' + (ch - 'A' + d) % 26;
    }
}
int main(){
    char str[50]; strcpy(str, "message");
    puts(str);
    strcat(str, " Send"); puts(str);
    func(str, 2); puts(str);
    strcpy(str, "# AhYaT"); puts(str);
    func(str, 2); puts(str);
}
#include<stdio.h>
int main(){
    int x, sum = 0; char str[20];
    scanf("%s", &str);
    if(strcmp(str, "donate") == 0){
        scanf("%d", &x);
        sum += x;
    }
    else printf("%d", sum);
    while(gets(str)){
        if(strcmp(str, "*") == 0) break;
        else if(strcmp(str, "Hajj") == 0) puts("Hazz-e-Akbar");
        else if(strcmp(str, "Umrah") == 0) puts("Hazz-e-Asghar")
    }
    gets(str);
    if(strlen(str) == 5) puts("3");
    else if((str[0] == 'o' && str[1] == 'n') || (str[0] == 'o' && str[1] == 'e') || (str[1] == 'n' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'n')) puts("1");
    else puts("2");
}
#include<stdio.h>
int main(){
    char str[100]; gets(str);
    int cnt = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if((str[i] == 'a') || (str[i] == 'd') || (str[i] == 'g') || (str[i] == 'j') || (str[i] == 'm') || (str[i] == 'p') || (str[i] == 't') || (str[i] == 'w') || (str[i] == ' '))
            cnt += 1;
        else if((str[i] == 'b') || (str[i] == 'e') || (str[i] == 'h') || (str[i] == 'k') || (str[i] == 'n') || (str[i] == 'q') || (str[i] == 'u') || (str[i] == 'x'))
            cnt += 2;
        else if((str[i] == 'c') || (str[i] == 'f') || (str[i] == 'i') || (str[i] == 'l') || (str[i] == 'o') || (str[i] == 'r') || (str[i] == 'v') || (str[i] == 'y'))
            cnt += 3;
        else if((str[i] == 's') || (str[i] == 'z'))
            cnt += 4;
    }
    printf("%d", cnt);
}
#include<stdio.h>
//alphabet position
int main(){
    int cnt = 0;
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    while(str[cnt] != '\0'){
        int pos = (str[cnt] - 'a') + 1;
        printf("(%c %d) ", str[cnt], pos);
        cnt++;
    }
}
#include<stdio.h>
// change the cases of the characters.If it is capital, change it to small and if is small change it to capital 
int main(){
    char str[100]; scanf("%s", &str);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            printf("%c ", str[i] - 32)
        if(str[i] >= 'A' && str[i] <= 'Z')
            printf("%c ", str[i] + 32);
    }
    /**/
    // char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    char country[] = "Bangladesh";
    int length = strlen(country);
    for(int i = 0; i < length; i++){
        if(country[i] >= 'a' && country[i] <= 'z')
            country[i] = 'A' + (country[i] - 'a');
    }
    printf("Modified string: %s\n", country);
}
#include<stdio.h>
// find out wheather the string wis a binary string or not.[binary string contains only 0 & 1]
int is_binary(int len, char str[]){
    int flag = 0;
    for(int i = 0; i < len; i++){
        if(str[i] != '0' && str[i] != '1')
            flag++;
    }
    if(flag == 0) return 1;
    else return 2;
}
int main(){
    int flag =0;
    char str[100]; scanf("%s", str);
    (is_binary(strlen(str), str) == 1) ? puts("Yes") : puts("No");
}
#include<stdio.h>
//calculate the cost of the string[a = 1..z = 26] is a power of two or not
int delta(int len, char str[]){
    int arr[1000], ans = 0, flag = 9999;
    for(int i = 0; i < len; i++)
        arr[i] = (int)(str[i] - 96);
    for(int i = 0; i < len; i++)
        ans += arr[i];
    int res = 1;
    while(1){
        if(res == ans){
            flag = 1; break;
        }
        else if(res > ans){
            flag = 0; break;
        }
        res *= 2;
    }
    if(flag == 1) return 1;
    else if(flag == 0) return 0;
}
int main(){
    char str[100]; scanf("%s", str);
    if(delta(strlen(str), str) == 1)
        puts("Yes");
    else if(delta(strlen(str), str) == 0)
        puts("No");
}
#include<stdio.h>
//calculate the cost of the string[a = 1..z = 26] is a power of two or not
int check(int cnt){
    int res;
    while(cnt != 1){
        int rem = cnt % 2;
        cnt /= 2;
        if(rem != 0){
            res = 0; break;
        }
        res++;
    }
    return res;
}
#include<stdio.h>
int main(){
    int cnt = 0;
    char str[100]; scanf("%s", str);
    for(int i = 0; str[i]!= '\0'; i++)
        cnt += str[i] - 'a' + 1;
    int res = check(cnt);
    if(res != 0){
        puts("Yes");
        printf("cost->2^%d\n", res);
    }
    else puts("No");
}
#include<stdio.h>
//count vowel & consonent
int main(){
    int vowel = 0, conso = 0;
    char str[100]; scanf("%s", str);
    getchar();
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowel++;
        else conso++;
    }
    printf("Vowel - %d\n", vowel);
    printf("Consonant - %d\n", conso);
}
#include<stdio.h>
//count vowel
int main(){
    char ch[25];
    int i = 0, vowel = 0;
    fgets(ch, sizeof(ch), stdin);
    while(ch[i] != '\0'){
        if(ch[i] == "a" || ch[i] == "e" || ch[i] == "i" || ch[i] == "o" || ch[i] == "u")
            vowel++;
        i++;
    }
    printf("%d", vowel);
}
#include<stdio.h>
// find a particular char in a string and call that function to find each of 1,9, and 7 in the given string
int checkDig(char str[], char digit){
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == digit)
            return 1;
    }
    return 0;
}
int main(){
    char str[100]; scanf("%s", &str);
    (checkDig(str, '1') == 1 && checkDig(str, '7') == 1 && checkDig(str, '9') == 1) ? puts("Yes") : puts("No");
}
#include<stdio.h>
//print unique char
int main(){
    char str[100], res[233];
    scanf("%s", str); int k = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] != str[i + 1])
            res[k++] = str[i];
    }
    res[k] = '\0';
    printf("%s", res);
}
#include<stdio.h>
// Shift all the characters of a string by the numerical value
int main(){
    char str[100]; scanf("%s", str);
    int k; scanf("%d", &k);
    for(int i = 0; i < strlen(str); i++){
        int val = str[i];
        if(val + k <= 122)
            printf("%c", val + k);
        else{
            int rem = ((val + k) - 122) % 26;
            (rem == 0) ? printf("z") : printf("%c", rem + 96);
        }
    }
}
//print smaller
int main(){
    char ch[100]; fgets(ch, sizeof(ch), stdin);
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z')
            ch[i] -= 32;
    }
    puts(ch);
}
#include<stdio.h>
//make the string decimal value in uppercase
int main(){
    char str[1000]; scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        if(((int)(str[i])) % 2 == 0)
            str[i] = str[i] - 32;
    }
    printf("%s", str);
}
#include<stdio.h>
int main() {
    char str[1020];
    while (fgets(str, sizeof(str), stdin)){
        size_t len = strlen(str);
        if (str[len - 1] == '\n'){
            str[len - 1] = '\0'; len--;
        }
        if (len == 1 && str[0] == '0') 
            break;
        int rem = 0;
        for (int i = 0; i < len; i++) {
            rem = (rem * 10 + (str[i] - '0')) % 17;
        }
        (rem == 0)? puts("1") : puts("0");
    }
    return 0;
}
#include<stdio.h>
// print the odd pos char in twice & even position once
int main(){
    char str[100]; scanf("%s", &str);
    int len = strlen(str);
    for (int j = 0; j < n; j++){
       if ((j + 1) % 2 == 0)
            printf("%c%c", str[j], str[j]);
       else if ((j + 1) % 2 != 0){
            printf("%c", str[j]);
       }
    }
}
#include<stdio.h>
// sort the string in ascending order using frequency array
int main(){
    char str[100]; scanf("%s", &str);
    int arr[27] = {0}, i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z')
            arr[str[i] - 97]++;
        i++;
    }
    for(int i = 0; i < 27; i++)
        printf("(%d %d) ", i, arr[i]);
    printf("\n");
    for(int i = 0; i < 27; i++)
    {
        if(arr[i] > 0){
            for(int j = 1; j <= arr[i]; j++)
                printf("%c ", 97 + i);
        }
    }
}
#include<stdio.h>
//sort the string on the basis of count in descending order
int main(){
    char str[100]; scanf("%s", str);
    int arr[27], ix, mx;
    for(i = 0; i < 26; i++) {
        arr[i] = 0;
    }
    for(int i = 0; i < 26; i++)
        arr[i] = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        ix = str[i] - 'a';
        arr[ix]++;
    }
    for(int i = 0; i < 26; i++){
        printf("(%c %d) ", (char)i + 'a',  arr[i]);
    printf("\n");
    int j = 0;
    while(j < len){
        mx = 0;
        for(int i = 0; i < 26; i++) {
            if(arr[i] > mx) {
                mx = arr[i];
                ix = i;
            }
        }
        while(mx--) {
            str[j] = (char)(ix + 'a');
            j++;
        }
        arr[ix] = 0;
    }
    printf("%s\n",str);
    return 0;
}
#include<stdio.h>
//sort the string in descending order on the basis of count of characters by using frequency array
int main(){
    char str[] = "bbbbaccddd";
    int len = strlen(str), largest = 26;
    int freq[largest + 1];
    for(int i = 0; i <= largest; i++)
        freq[i] = 0;
    for(int i = 0; i < len; i++)
        freq[(str[i] - 'a') + 1]++;
    int total=0;
    for(int i = 1; i <= 26; i++){
        if(freq[i] >= 1)
            total++;
    }
    int nxt = 0;
    while(nxt != total){
        int max = -1, index = -1;
        char ch;
        for(int i = 1; i <= 26; i++){
            if(freq[i] > max){
                max = freq[i];
                ch = i + 96;
                index = i;
            }
        }
        for(int i = 1; i <= max; i++)
            printf("%c", ch);
        freq[index] = 0;
        nxt++;
    }
    puts("");
}
#include<stdio.h>
//check upper or lower
int main(){
    char ch ='W';
    if (ch >= 'a' && ch <= 'z') 
        printf("%c is lower case\n", ch);
    if(ch >='A' && ch <='Z')
        printf("%c is upper case\n",ch);
    /**/
    int x = 'A';
    while (x <= 'Z'){
        printf("%c = %d\n", x, x);
        x++;
    }
}
#include<stdio.h>
int main(){
    char ing[1000];
    while (scanf("%s", ing) != EOF) {
        int sum = 0, res = 0;     
        int len = strlen(ing);
        for (int i = 0; i < len; i++) {
            int ch = ing[i];
            if (ch >= 'a' && ch <= 'z')
                sum += ch - 'a' + 1;     
            else if (ch >= 'A' && ch <= 'Z')
                sum += ch - 'A' + 27;
            else if (ch >= '0' && ch <= '9')
                sum += ch - '0';         
            res = (res * 10 + (ch - '0')) % 5;
        }
        printf("%d\n", res);
    }
}
