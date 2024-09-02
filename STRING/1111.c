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
