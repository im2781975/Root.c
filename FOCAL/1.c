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
#include <stdio.h>
int main(){
    int count, price; scanf("%d%d", &count, &price);
        if (count == 1)
            printf("%d\n", price);
        else if (count > 1)
            printf("%d\n", (count * price) - (count - 1) * 2); 
}
int main() {
    char text[100];
    int vowel = 0, consonant = 0;
    fgets(text, sizeof(text), stdin);
    int len = strlen(text);
    for(int i = 0; i < len; i++) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowel++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
            consonant++;
    }
    printf("vowels: %d\nconsonant: %d", vowel, consonant);
    printf("Total number of consonants = %d\n", consonant);
}
int main(){
    char number[1000];
    int i, rem, len, sum;
    while (fgets(number, sizeof(number), stdin)) {
        // Remove trailing newline character if present
        number[strcspn(number, "\n")] = '\0';
        int len = strlen(number);
        if (len == 1 && number[0] == '0')
            break;
        rem = 0;
        for (int i = 0; i < len; i++) {
            sum = rem * 10 + (number[i] - '0');
            rem = sum % 11;
        }
        (rem == 0)? puts("Yes") : puts("No");
    }
}
int main(){
    int n, x, k; scanf("%d %d %d", &n, &x, &k);
    int total = n * (n + 1) / 2;
    int rem = (x * (2 * k + (x - 1) * 1)) / 2;
    printf("%d", total - rem);
}
int main() {
    int arr[1000], j;
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 1; i < n; i++){
        int temp = arr[i];    
        j = i - 1;
        while (j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp; 
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}
int main() {
    int t, n;
    while (scanf("%d %d", &t, &n) != EOF){
        if (n == 0) {
            printf("Error: Division by zero is not allowed.\n");
            continue;
        }
        int div = t / n;
        int mod = t % n;
        printf("div = %d, mod = %d\n", div, mod);
    }
}
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int row = ceil((sqrt(1 + 8 * n) - 1) / 2);
        int last = (row * (row - 1)) / 2;
        int x, y;
        if(row % 2 == 0){
            x = 0;
            y = row + 1;
        }else{
            x = row + 1;
            y = 0;
        }
        for(int i = last + 1;; i++) {
            if(row % 2 == 0) {
                x++; y--;
            }else{
                x--; y++;
            }
            if(i == n) {
                printf("TERM %d IS %d/%d\n", n, x, y);
                break;
            }
        }
    }
    return 0;
}
