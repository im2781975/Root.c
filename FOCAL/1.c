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
//Factorial
int main(){
    int num; scanf("%d", &num);
    int res = 1;
    for(int i = 1; i <= num; i++)
        res *= i;
    printf("%d", res);
}
//Fib series
int main() {
    int first = 0, second = 1, next;
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
}
//Odd Even
int main() {
    int arr[1000];
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    for (int i = 1; i <= n; i++) {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
}
int main() {
    int  arr[100];
    int n; scanf("%d", &n);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int trg; scanf("%d", &trg);
    int flag = 0;
    for (for i = 0; i < n; i++) {
        if (arr[i] == trg)
            flag = i + 1;  
            // Storing the (1-based) position
    }
    if (flag > 0)
        printf("Number is found at %d", flag);
    else
        printf("Number not found");
}
int main(){
    float arr[100], sum = 0, add = 0;
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%f", &arr[i]);
    for(int i = 0; i < n; i++)
        sum += arr[i];
    float avg = sum / n;
    for(int i = 0; i < n; i++)
        add += pow(arr[i] - avg, 2);
    float reg = add / n;
    float deviation = sqrt(reg)
    printf("%0.2f", deviation)
}
