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
