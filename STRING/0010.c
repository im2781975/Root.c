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
