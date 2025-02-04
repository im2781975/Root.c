#include<stdio.h>
int main(){
    int x, sum = 0; char str[20];
    scanf("%s", &str);
    if(strcmp(str, "donate") == 0){
        scanf("%d", &x);
        sum += x;
    }
    else
        printf("%d", sum);
        
    while(gets(str)){
        if(strcmp(str, "*") == 0)
            break;
        else if(strcmp(str, "Hajj") == 0)
            puts("Hazz-e-Akbar");
        else if(strcmp(str, "Umrah") == 0)
            puts("Hazz-e-Asghar")
    }
    
    gets(str);
    if(strlen(str) == 5)
        puts("3");
    else if((str[0] == 'o' && str[1] == 'n') || (str[0] == 'o' && str[1] == 'e') || (str[1] == 'n' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'n'))
        puts("1");
    else
        puts("2");
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
void delta(char *str, int d){
    for(int i = 0; i < strlen(str); i++){
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
            str[i] = 'a' + (c - 'a' + d) % 26;
        else if (c >= 'A' && c <= 'Z') 
            str[i] = 'A' + (c - 'A' + d) % 26;
    }
}
int main() {
    char msg[50]; 
    strcpy(msg, "Eb"); strcat(msg, "iil");
    delta(msg, 3); puts(msg);
    strcpy(msg, "# Ayh T"); delta(msg, 6);
    puts(msg);
}
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
// change the cases of the characters.If it is capital, change it to small and if is small change it to capital 
int main(){
    char str[100]; scanf("%s", &str);
 
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            printf("%c ", str[i] - 32)
        if(str[i] >= 'A' && str[i] <= 'Z')
            printf("%c ", str[i] + 32);
    }
}
//concatenate string
int main(){
    char rin[1000];
    int n; scanf("%d", &n);
    scanf("%s", &rin);
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
//concatenate
char ans[1000]; int k = 0;
void catenate(int len, char str[]){
    if(k > 0){
        ans[k] = ' ';
        k++;
    }
    for(int j = 0; j < len; j++){
        ans[k] = str[j];
        k++;
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
//concatenate
int main(){
    char rin[50]="Phi", ing[]="tron";
    int i = 0, len = 0, j = 0;
    while(rin[i] != '\0'){
        len++;
        i++;
    }
    while(ing[j] != '\0'){
        rin[len + j] = ing[j];
        j++;
    }
    printf("String = %s",rin);
    return 0;
}

// find out wheather the string wis a binary string or not.[binary string contains only 0 & 1]
int is_binary(int len, char str[]){
    int flag = 0;
    for(int i = 0; i < len; i++){
        if(str[i] != '0' && str[i] != '1')
            flag++;
    }
    if (flag == 0)
        return 1;
    return 2;
}
int main(){
    int flag =0;
    char str[100]; scanf("%s", str);
    (is_binary(strlen(str), str) == 1) ? puts("Yes") : puts("No");
}
// check binary string or not
int main(){
    int flag =0;
    char str[100]; scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] != '0' && str[i] != '1')
            flag++;
    }
    (flag == 0) ? puts("Yes") : puts("No");
}
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
    if(flag == 1)
        return 1;
    else if(flag == 0)
        return 0;
}
int main(){
    char str[100]; scanf("%s", str);
    if(delta(strlen(str), str) == 1)
        puts("Yes");
    else if(delta(strlen(str), str) == 0)
        puts("No");
}
//calculate the cost of the string[a = 1..z = 26] is a power of two or not
int check(int cnt){
    int res;
    while(cnt != 1){
        int rem = cnt % 2;
        cnt /= 2;
        if(rem != 0){
            res = 0;
            break;
        }
        res++;
    }
    return res;
}
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
    else
        puts("No");
}
//count vowel & consonent
int main(){
    int vowel = 0, conso = 0;
    char str[100]; scanf("%s", str);
    getchar();
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowel++;
        else
            conso++;
    }
    printf("Vowel - %d\n", vowel);
    printf("Consonant - %d\n", conso);
}
//count vowel
int main(){
    char ch[25];
    int i = 0, vowel = 0;
    fgets(ch, sizeof(ch), stdin);
    while(ch[i] != '\0'){
        if(ch[i] == 'a' || ch[i] == "e" || ch[i] == "i" || ch[i] == "o" || ch[i] == "u")
            vowel++;
        i++;
    }
    printf("%d", vowel);
}
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
// Shift all the characters of a string by the numerical value & printed the string
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
// Shift all the characters of a string by the numerical value & printed the string
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
int main()
{
    char ch[100]; fgets(ch, sizeof(ch), stdin);
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z')
            ch[i] -= 32;
    }
    puts(ch);
}
//make the string decimal value in uppercase
int main(){
    char str[1000]; scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        if(((int)(str[i]))%2 == 0)
            str[i] = str[i]-32;
    }
    printf("%s", str);
}
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
//sort the string in descending order on the basis of count of characters by using frequency array
int main(){
    char str[] = "bbbbaccddd";
    int len = strlen(str),largest = 26;
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
    printf("\n");
}
int main(){
    char ch; ch = getchar();
    printf("%c", ch)
}
//check upper or lower
int main (){
    char ch ='W';
    if (ch >= 'a' && ch <= 'z') 
        printf("%c is lower case\n", ch);
    if(ch >='A' && ch <='Z')
        printf("%c is upper case\n",ch);
}
int main() {
    int x = 'A';
    while (x <= 'Z'){
        printf("%c = %d\n", x, x);
        x++;
    }
}
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
