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
//swap
int main(){
    int x, y; scanf("%d%d", &x, &y);
    x += y;
    y = x - y;
    x -= y;
    printf("After swapping,the numbers are %d %d\n", x, y);
}
int main(){
    int n; scanf("%d", &n);
    printf("%d", (sqrt(1 + 8 * n) - 1) / 2);
    printf("%d", ceil(sqrt(1 + 8 * n) - 1) / 2)
    }
}
//seperate even or odd
int main() {
    int n; scanf("%d", &n);
    int arr[100], even[100], odd[100];
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even[evenCount++] = arr[i];
        else
            odd[oddCount++] = arr[i];
    }
    for(int i = 0; i < oddCount; i++)
        printf("%d ", odd[i]);
    printf("\n");
    for(int i = 0; i < evenCount; i++)
        printf("%d ", even[i]);
    printf("\n");
}
//Sort
int main() {
    int num, j, arr[100], key, i;
    scanf("%d", &num);
    for(i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    for(j = 1; j < num; j++) {
        key = arr[j];
        i = j - 1;
        while(i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
    for(i = 0; i < num; i++) 
        printf("%d ", arr[i]);
    printf("\n");
}
int main(){
    int number[3], quantity[3], i;
    float price[3], value;
    char item[3][20]; 
    printf("Item  Name   Number    Price    Quantity\n");
    for (i = 0; i < 3; i++)
        scanf("%s %d %f %d", item[i], &number[i], &price[i], &quantity[i]);
    printf("\nItem Name    Number    Price    Quantity    Value\n");
    for (i = 0; i < 3; i++){
        value = price[i] * quantity[i];
        printf("%-10s %7d %8.2f %9d %10.2f\n", item[i], number[i], price[i], quantity[i], value);
    }
}
int main() {
    int arr[100], pos = -1;
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int data; scanf("%d", &data);
    for (int i = 0; i < n; i++) {
        if (arr[i] == data) {
            pos = i;  
            break;      
        }
    }
    if (pos != -1)
        printf("The data is found at position: %d\n", pos + 1); 
    else 
        puts("The data is not found");
}
int main() {
    float a, b, c; scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be zero).\n");
        return 0;
    }
    float D, r1, r2, real, img;
    D = (b * b - 4 * a * c);
    if (D > 0) {
        printf("The roots are real and distinct.\n");
        r1 = (-b + sqrt(D)) / (2 * a);  
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("The roots are: %.3f and %.3f\n", r1, r2);
    } 
    else if (D == 0) {
        printf("The roots are real and equal.\n");
        r1 = -b / (2 * a);
        printf("The root is: %.3f\n", r1);
    } 
    else{
        printf("The roots are imaginary (complex).\n");
        real = -b / (2 * a);
        img = sqrt(-D) / (2 * a);
        printf("The roots are: %.3f + %.3fi and %.3f - %.3fi\n", 
               real, img, real, img);
    }
}
int main(){
    int rem, result = 0;
    int num; scanf("%d", &num);
    int original= num;
    while (original != 0){
        rem = original % 10;
        result += rem * rem * rem;
        original /= 10;
    }
    if(result == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);
}
int main(){
    int firstmarks, secmarks, finalmarks;
    float total;
    firstmarks = 80;
    secmarks = 74;
    finalmarks = 97;
    total = firstmarks / 4.0 + secmarks/4.0 + finalmarks / 2.0;
    printf("%f\n", total);
}
int get_press_count(char ch) {
    if (ch == '.' || ch == 'a' || ch == 'd' || ch == 'g' || ch == 'j' ||
        ch == 'm' || ch == 'p' || ch == 't' || ch == 'w' || ch == ' ')
        return 1;
    else if (ch == ',' || ch == 'b' || ch == 'e' || ch == 'h' || ch == 'k' ||
             ch == 'n' || ch == 'q' || ch == 'u' || ch == 'x')
        return 2;
    else if (ch == '*' || ch == 'c' || ch == 'f' || ch == 'i' || ch == 'l' ||
             ch == 'o' || ch == 'r' || ch == 'v' || ch == 'y')
        return 3;
    else if (ch == 's' || ch == 'z')
        return 4;
    else
        return 0;  
}
int main() {
    char str[107];
    int t; scanf("%d", &t);
    getchar(); 
    // Consume the newline character left by scanf
    for (int i = 1; i <= t; i++){
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        sum = 0;
        // Calculate the total key presses
        for (int j = 0; j < strlen(str); j++)
            sum += get_press_count(a[j]);
        printf("%d\n", sum);
    }
}
int main() {
    char ch[1000]; 
    while (scanf("%s", ch) != EOF) {
        int len = strlen(n);
        double sum = 0;
        // Convert the string to an integer
        int number = atoi(ch);  
        // Calculate the sum of each digit raised to the power of 'length'
        for (int i = 0; i < len; i++) {
            int digit = ch[i] - '0';
            sum += pow(digit, len);
        }
        if ((int)sum == number)
            printf("%d is an Armstrong number\n", number);
        else
            printf("%d is NOT an Armstrong number\n", number);
    }
}
