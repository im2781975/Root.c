void String(){
    int n; scanf("%d", &n);
    char str[100][100];
    getchar();
    for(int i = 0; i < n; i++)
        fgets(str[i], sizeof(str[i]), stdin);
    for(int i = 0; i < n; i++)
        printf("%s", str[i]);
}
/***/
#define SZ 128
__main(){
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
    puts("\n");
}
/***/
__main(){
    int n; scanf("%d", &n);
    int i;
    char str[100];
    getchar();
    char arr[n][100];
    for(int i = 0; i < n; i++){
        printf("Enter line %d: ", i + 1);
        fgets(arr[i], sizeof(arr[i]), stdin);
    }
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
}
/***/
__main(){
    int n; scanf("%d", &n);
    int i;
    char str[100];
    getchar();
    for(int i = 0; i < n; i++){
        printf("Enter line %d: ", i + 1);
        fgets(str, sizeof(str), stdin);
        printf("%s\n", str);
    }
}
/***/
//shift char
__main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i]!= '\0'; i++){
        str[i] = str[i] + 2;
    }
    printf("%s", str);
}
/***/
__main(){
    char str[50] = {'\0'}, arr[50] = "Best";
    strcpy(str, "Hello");
    int x = strlen(str) * (0.5);
    for(int i = 0; str[i]!= '\0'; ++i)
        str[x + i] = arr[i];
    printf("arr = %s\tstr = %s\n", arr, str);
    strncpy(str, arr, 4);
    printf("str = %s\tarr = %s\n", str, arr);
    strcat(str, arr);
    printf("str = %s\tarr = %s\n", str, arr);
    (strcmp(arr, str) > 0)?strcat(str, " Flash") : strcat(arr, "lash");
    printf("str = %s\tarr = %s\n", str, arr);
}
/***/
void func(char *str, int d){
    for(int i = 0; i < strlen(str); ++i){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            str[i] = 'a' + (ch - 'a' + d) % 26;
        else if(ch >= 'A' && ch <= 'Z')
            str[i] = 'A' + (ch - 'A' + d) % 26;
    }
}
__main(){
    char str[50]; strcpy(str, "message");
    puts(str);
    strcat(str, " Send"); puts(str);
    func(str, 2); puts(str);
    strcpy(str, "# AhYaT"); puts(str);
    func(str, 2); puts(str);
}
/***/
__main(){
    int n; scanf("%d", &n);
    char str[100], buffer[1000] = " ";
    getchar();
    for(int i = 0; i < n; i++){
        fgets(str, sizeof(str), stdin);
        strcat(buffer, str);
    }
    printf("%s", buffer);
}
/***/
