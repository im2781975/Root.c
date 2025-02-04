//digit count
int main(){
    int n, cnt = 0; scanf("%d", &n);
    while(n != 0){
        n /= 10;
        ++cnt;
    }
    printf("%d", cnt);
}
// multiplication table
int main(){
    int n = 5;
    for(int i = 1; i <= 10; i += 1)
        printf ("%d* %d = %d\n",n, i, n * i);
}
int main(){
    int n = 5, m = 0;
    for(int i = 1; i <= 10; i+= 1){
        m += n;
        printf ("%d * %d = %d\n", n, i, m);
    }
}
int main(){
    int n = 5, i = 1;
    while (i <= 10){
        printf("%d * %d = %d\n", n, i, n*i);
        i += 1;
    }
}
//prime numbers
int main(){
    int n; scanf("%d", &n);
    int Isprime = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            Isprime = 0;
            break;
        }
    }
    if(Isprime)
        puts("prime");
    else
        puts("Not prime");
}
//prime between
int isPrime(int num) {
    if (num < 2) 
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n; scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            printf("%d\n", i);
    }
}
int main(){
    int i = 2, j;
    while(i <= 100){
        Isprime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                Isprime = 0;
                break;
            }
        }
        if(Isprime)
            printf("%d ", i);
        i++;
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d ", n - i + 1);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", n - i + 1);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = 1; j <= n - i + 1; j++)
            printf("%d", j);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++)
            printf("%d", j);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n - i; j++)
            printf(" ");
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for(int j = i; j <= n - i; j++)
            printf(" ");
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for(int j = n; j > i; j--)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d",&n);
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = i; j <= n; j++)
            printf("%d", i);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++)
            printf("%d", i);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", n - i + 1);
        printf("\n");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
