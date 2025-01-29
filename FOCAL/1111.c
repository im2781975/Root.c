__main(){
    unsigned int pass = 0, fail = 0, student = 1;
    int res;
    while(student <= 10){
        puts("Enter result(1 == pass || 2 == fail) ");
        scanf("%d", &res);
        if(res == 1) pass++;
        else if(res == 2) fail++;
        student++;
    }
    printf("pass counts are: %d", pass);
    printf("\nFail counts are: %d", fail);
    if(pass > 8)
        puts("\nBonus To Instructor");
}
void CountGrade(){
    int grade; puts("Enter Grade: ");
    scanf("%d", &grade);
    (grade >= 18)?puts("pass"):puts("fail");
    if(grade >= 27) puts("A");
    else if(grade >= 24) puts("B");
    else if(grade >= 21) puts("C");
    else if(grade >= 18) puts("D");
    else{
        puts("Fail");
        puts("Must Take the course again");
    }
}

void CalcAvg(){
    unsigned int count = 1;
    int grade, total = 0, avg;
    while(count <= 10){
        printf("Enter Grade: ");
        scanf("%d", &grade);
        total += grade;
        count++;
    }
    avg = total / 10;
    printf("Average is: %d", avg);
}
void CalcAvg(){
    unsigned int cnt = 0; 
    int grade, total = 0;
    float avg;
    printf("Enter grade(-1 for exit): ");
    scanf("%d", &grade);
    while(grade != -1){
        total += grade;
        cnt++;
        printf("Enter Grade(-1 for exit): ");
        scanf("%d", &grade);
    }
    if(cnt != 0){
        avg = (float)total/ cnt;
        printf("Average is: %f", avg);
    }
    else
        printf("No Average found");
}
void CalcAvg(){
    unsigned int cnt = 0; 
    int grade, total = 0, avg;
    printf("Enter grade(-1 for exit): ");
    scanf("%d", &grade);
    while(grade != -1){
        total += grade;
        cnt++;
        printf("Enter Grade(-1 for exit): ");
        scanf("%d", &grade);
    }
    if(cnt != 0){
        avg = total/ cnt;
        printf("Average is: %d", avg);
    }
    else
        printf("No Average found");
}

void FixedDeposite(){
    double amount, capital = 1000.0, rate = 0.05;
    unsigned int n = 1;
    printf("%4s%21s\n", "Year", "Deposite");
    for(int i = 1; i <= 10; ++i){
        amount = capital * pow(1.0 + rate , i);
        printf("%4u%21.2f\n", i, amount);
    }
}
void FixedDeposite(){
    double principle = 1000.0;
    double rate = 0.05;
    puts(" Year\t\tamount");
    for(unsigned int year = 1; year <= 10; ++year){
        double amount = principle * pow(1.0 + rate, year);
        printf("%4u%15.2f\n", year, amount);
    }
}

//Dice Game
enum status{Continue, Won, Lost};
int rollDice(void){
    int Die1 = 1 + (rand() % 6);
    int Die2 = 1 + (rand() % 6);
    printf("Player rolled %d + %d = %d\n", Die1, Die2, Die1 + Die2);
    return Die1 + Die2;
}
__main(void){
    srand(time(NULL));
    int MyPoint;
    enum status GameStatus;
    int sum = rollDice();
    switch(sum){
        case 7:
        case 11:
            GameStatus = Won;
            break;
        case 2:
        case 3:
        case 12:
            GameStatus = Lost;
            break;
        default:
            GameStatus = Continue;
            MyPoint = sum;
            printf("Point is: %d\n", MyPoint);
            break;
    }
    while(Continue == GameStatus){
        sum = rollDice();
        if(sum == MyPoint)
            GameStatus = Won;
        else if(sum == 7)
            GameStatus = Lost;
    }
    if(Won == GameStatus)
        printf("Player won");
    else
        printf("Player Lose");
}
enum status{Continue, Won, Lost};
int rollDice(void){
    int Die1 = 1 + (rand() % 6);
    int Die2 = 1 + (rand() % 6);
    printf("Player rolled %d + %d = %d\n", Die1, Die2, Die1 + Die2);
    return Die1 + Die2;
}
enum status craps(void){
    int MyPoint;
    enum status GameStatus;
    int sum = rollDice();
    switch(sum){
        case 7:
        case 11:
            GameStatus = Won;
            chatter();
            break;
        case 2:
        case 3:
        case 12:
            GameStatus = Lost;
            chatter();
            break;
        default:
            GameStatus = Continue;
            MyPoint = sum;
            printf("Point is: %d\n", MyPoint);
            chatter();
            break;
    }
    while(Continue == GameStatus){
        chatter();
        sum = rollDice();
        if(sum == MyPoint)
            GameStatus = Won;
        else if(sum == 7)
            GameStatus = Lost;
    }
    if(Won == GameStatus){
        printf("Player won");
        return Won;
    }
    else{
        printf("Player Lose");
        return Lost;
    }
}
void chatter(void){
    int select = 1 + rand() % 6;
    switch(select){
        case 1:
            puts("Going For broke");
            break;
        case 2:
            puts("Take a chance");
            break;
        case 3:
            printf("Break the bank");
            break;
        case 4:
            puts("you are up big.Time to cash");
            break;
        case 5:
            puts("Way to be lucky.dice have to loaded");
            break;
        case 6:
            puts("Bet it all");
            break;
        default:
            break;
    }
}
__main(void){
    srand(time(NULL));
    int BankBalance = 1000;
    printf("Your Balance is %d", BankBalance);
    puts("Enter Wage: ");
    int wager; scanf("%d", &wager);
    while(wager <= 0 || wager >= 1000){
        puts("Please Enter a valid amount");
        scanf("%d", &wager);
    }
    enum status res = craps();
    if(Lost == res){
        BankBalance -= wager;
        printf("Your New balance is: ", BankBalance);
        if(BankBalance == 0)
            printf("You are Busted.Thanks For Playing");
    }
    else{
        BankBalance += wager;
        printf("Your New Balance is: ", BankBalance);
    }
}

void Area(){
    puts("Enter 1 for circle: ");
    puts("Enter 2 for square: ");
    puts("Enter 3 for sfear: ");
    puts("Please Insert option: ");
    unsigned int i; scanf("%u", &i);
    float x, y;
    switch(i):{
        case 1:{
            puts("Enter radius: ");
            scanf("%f", &x);
            printf("Area of circle is: ", 3.1416 * x * x);
            break;
        }
        case 2:{
            puts("Enter sides: ");
            scanf("%f", &x);
            printf("Area of square is: ", x *x );
            break;
        }
        case 3:{
            puts("Enter radius: ");
            scanf("%f", &x);
            printf("Area of sfear is: ", 4 * 3.1416 * x * x);
            break;
        }
        default:
            puts("Option not valid");
    }
}

#include<stdio.h>
int main(){
    int x = 10, y = 1, a = 3, b = 3, g = 5, y = 1, i = 2, j = 9;
    puts("!(x < 5) && !(y >= 7)");
    if((!(x < 5) && !(y >= 7)) == (!((x < 5) || (y >= 7))))
        puts("Equivalent");
    else
        puts("Not Equivalent");
    puts("!((x < 5) || (y >= 7))");
    puts("!(a == b) || !(g != 5)");
    if((!(a == b) || !(g != 5)) == (!((a == b) && (g != 5))))
        puts("Equivalent");
    else
        puts("Not Equivalent");
    puts("!((a == b) && (g != 5))");
    puts("!((x <= 8) && (h > 4))");
    if(!((x <= 8) && (h > 4)) == (!(x <= 8) || !(h > 4)))
        puts("Equivalent");
    else
        puts("Not Equivalent");
    puts("(!(x <= 8) || (h > 4))");
    puts("!((i > 4) || (j <= 6))");
    if(!((i > 4) || (j <= 6)) ==(! (i > 4) && !(j <= 6))
        puts("Equivalent");
    else
        puts("Not Equivalent");
    puts("(!(i > 4) && !(j <= 6))")
}
/***/
void CountBill(){
    int n, x; scanf("%d", &n);
    float sum;
    if(n <= 50)
        sum = n * (0.5);
    else if(n > 50 && n <= 150){
        x = n - 50;
        sum += 50 * (0.5) + x * (0.75);
    }
    else if(n > 150 && n <= 250){
        x = n - 150;
        sum += 50 * (0.5) + 100 * (0.75) + x * (1.20);
    }
    else{
        x = n - 250;
        sum += 50 * (0.5) + 100 * (0.75) + 100 * (1.20) + x * (1.50);
    }
    sum += sum * (0.20);
    printf("%0.2f", sum);
}
/***/
void DiagonalDiff(){
    int n; scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    int left = 0, right = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                left += arr[i][j];
            if(j == n - i - 1)
                right += arr[i][j];
        }
    }
    printf("Diagonal of left is: %d\nDiagonal of right is: %d\nDiagonal Diffrence is: %d", left, right, abs(left - right));
}
/***/
bool Divisor(int x){
    for(int i = 2; i <= x; i++){
        if(x % i == 0)
            return false;
    }
    return true;
}
void TwinPrime(){
    int n; scanf("%d", &n);
    int x = n + 2, y = n - 2;
    if(Divisor(x) == 1)
        printf("%d", x);
    else if(Divisor(y) == 1)
        printf("%d", y);
    else
        puts("No");
}
/***/
void Coprime(){
    int a, b; scanf("%d%d", &a, &b);
    int flag = 0;
    for(int i = 2; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            flag = 1;
            break;
        }
    }
    (flag == 1)?puts("No"):puts("Yes");
}
void coprime(){
    int a, b; scanf("%d%d", &a, &b);
    int x = a, y = b;
    while(y != 0){
        int tmp = y; y = x % y; x = tmp;
    }
    (x == 1) ? printf("%d & %d are coprime", a, b): printf("%d & %d aren't coprime");
}
/***/
__main(){
    int n; scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i * (i + 1);
            printf("i: %d\ti + 1: %d\tsum: %d\n", i, i + 1, sum);
        }
    }
}
/***/
#define SIZE 10
void Bubble(int work[], size_t size, int(*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);
int main(){
    int arr[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    puts("Enter 1 For ascending 2 for descending: ");
    int order; scanf("%d", &order);
    if(order == 1)
        Bubble(arr, SIZE, ascending);
    else
        Bubble(arr, SIZE, descending);
    for(size_t i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
}
void Bubble(int *work, size_t size, int(*compare)(int a, int b)){
    void swap(int *x, int *y);
    for(unsigned int i = 1; i < size; i++){
        for(size_t j = 0; j < size - 1; j++){
            if((*compare)(work[j], work[j + 1]))
                swap(&work[j], &work[j + 1]);
        }
    }
}
void swap(int *x, int *y){
    int hold = *x; *x = *y; *y = hold;
}
int ascending(int a, int b){
    return (b < a);
}
int descending(int a, int b){
    return (b > a);
}
/***/
/***/
main(){
    int a, b, c, t; scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0)
            break;
        else if(a * a == b * b + c * c || b * b == a * a + c * c || c * c = a * a + b * b)
            puts("right");
        else
            puts("wrong");
    }
}
/***/
main(){
    float u, v, s, t, a;
    int n;
    while(scanf("%d", &n) == 1 && n != 0){
        u = v = s = t = a = 0;
        if(n == 1){
            scanf("%f%f%f", &u, &v, &t);
            s = ((u + v) *t)/2;
            a = (v - u)/t;
            printf("u: %f\ta: %f\n", s, a);
        }
        else if(n == 2){
            scanf("I%f%f%f", &u, &v, &a);
            t = (v - u)/a;
            s = ((u + v) *t)/2;
            printf("s: %f\tt: %f\n", s, a);
        }
        else if(n == 3){
            scanf("%f%f%f", &u, &a, &s);
            v = sqrt(u * u + 2 * a * s);
            t = (v - u)/a;
            printf("v: %f\tt: %f", v, t);
        }
        else if(n == 4){
            scanf("%f%f%f", &v, &a, &s);
            u = (v * v - 2 * a * s);
            t = (u - v)/a;
            printf("u: %f\tt: %f", u, t);
        }
    }
}
/***/
main(){
    int n;
    while(scanf("%d", &n) == 1){
        for(int i = 0; i < n; i++){
            int e, f, c; scanf("%d%d%d", &e, &f, &c);
            int b = 0, d = e + f;
            while(d >= c){
                int a = d / c;
                b += a;
                d = a + (d % c);
            }
            printf("%d", b);
        }
    }
}
/***/
main(){
    int n, k= 1;
    while(scanf("%d", &n) == 1 && n >= 0){
        for(int i = 0; i < 14; i++){
            if(pow(1 << i) < n && n <= (1 << (i + 1))){
                printf("case %d: %d\n", k, i + 1);
                break;
            }
        }
    }
    k++;
}
/***/
main(){
    double a, b; scanf("%lf", &a);
    b = (- 1 + sqrt(1 + (8 * a)))/2;
    long long int n= (long long)(b);
    printf("%lld", n);
}
/***/
main(){
    int n;
    while(scanf("%d", &n) == 1){
        int odd = n * (n + 1)/2;
        int sum = (3 * odd) - 6;
    }
    printf("%d", sum);
}
/***/
main(){
    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        int a, b; scanf("%d%d", &a, &b);
        for(int i = 0; i < n; i++){
            int x, y; scanf("%d%d", &x, &y);
            if(x == a && y == b)
                puts("Divisa");
            else if(x > a && y > b)
                puts("Ne");
            else if(x < a && y > b)
                puts("No");
            else if(x > a && y < b)
                puts("SE");
            else if(x < a && y < b)
                puts("So");
        }
    }
}
/***/
main(){
    int n; 
    while(scanf("%d", &n) == 1){
        int arr[n], cnt = 0;
        if(n == 0) break;
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < 120; i++){
            for(int j = 0; j < n; j++){
                if(arr[j] == i && cnt <= n - 1){
                    printf("%d ", i);
                    cnt++;
                }
            }
        }
    }
}
/***/
main(){
    int n; scanf("%d", &n);
    int maxi = 0, mini = 100;
    while(n--){
        int val; scanf("%d", &val);
        (val > maxi) ? maxi == val : mini == val;
    }
    printf("%d", 2 * (maxi - mini));
}
/***/
main(){
    int n; 
    while(scanf("%d", &n) == 1){
        int arr[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int max = 1;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0)
                max *= arr[i];
        }
        (maxi > 0)? printf("Maximum Product is: %d", maxi): puts("Maximum Product is 0");
    }
}
/***/
main(){
    int n; 
    while(scanf("%d", &n) == 1){
        int arr[n], num = n, parity = 0, cnt = 0, rem;
        while(n > 0){
            rem = n % 2; 
            cnt++;
            if(rem == 1)
                parity++;
            n/= 2;
        }
        for(int i = 0; i < cnt; i++){
            rem = num % 2;
            arr[i] = rem;
            num /= 2;
        }
        for(int i = cnt - 1; i >= 0; i--)
            printf("%d ", arr[i]);
        printf("Parity is %d", parity);
    }
}
/***/
main(){
    int a, b;
    while(scanf("%d%d", &a, &b) == 2){
        if(a == 0 && b == 0)
            break;
        int cnt = 0;
        for(int i = a; i <= b; i++){
            int c = sqrt(i);
            if(c * c == i)
                cnt++;
        }
        printf("%d", cnt);
    }
}
/***/
main(){
    int t;
    while(scanf("%d", &t) == 1){
        for(int i = 1; i <= t; i++){
            int n; scanf("%d", &n);
            int arr[n];
            for(int j = 0; j < n; j++)
                scanf("%d", &arr[j]);
            for(int j = 0; j < n; j++)
                printf("Case %d: %d\n", i, arr[j/2]);
            
        }
    }
}
/***/
main(){
    int n; scanf("%d", &n);
    long long ans = (long long)n * (n - 1);
    if(ans % 4 == 0)
        printf("%lld", ans / 4);
    else
        printf("%lld", ans / 2);
}
/***/
main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        int x; scanf("%d", &x);
        arr[x] = i;
    }
    int swap = 0, pos = - 1;
    for(int i = 0; i < n; i++){
        if(arr[i] < pos){
            swap++;
            pos = n + 1;
        }
        else
            pos = arr[i];
    }
    printf("%d", swap);
}
/***/
main(){
    int n; 
    while(scanf("%d", &n) == 1){
        int arr[n];
        if(n == 0)
            break;
        arr[0] = 0; arr[1] = 1;
        for(int i = 2; i <= n + 1; i++)
            arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d", arr[n + 1]);
    }
}
/***/
main(){
    int mark; scanf("%d", &mark);
    char grade[20];
    int idx = mark / 10;
    switch(idx){
        case 10:
        case 9:
        case 8:
            strcpy(grade, "Honours");
            break;
        case 7:
        case 6:
            strcpy(grade, "First Div");
            break;
        case 5:
            strcpy(grade, "Second Div");
            break;
        case 4:
            strcpy(grade, "Third Div");
            break;
        default:
            strcpy(grade, "Fail");
            break;
    }
    printf("%s", grade);
}
/***/
main(){
    float fahrenheit, celcius;
    int extra = 0111; char ch = '.';
    scanf("%f", &fahrenheit);
    celcius = ((fahrenheit -32)*5)/9;
    printf("Temparature in celcius is: %f%c%d", celcius, ch, extra);
}
/***/
main(){
    int n, c, p;
    scanf("%d", &n);
    while(n--){
        scanf("%d%d", &c, &p);
        printf("%d %d", c, p);
        if(c == 1)
            printf("%d\n", p);
        else if(c > 1)
            printf("%d\n", (c * p) - (c - 1) * 2);
    }
}
/***/
main(){
    char str[100];
    while(gets(str)){
        int r = 0, l = strlen(str);
        if(l == 1 && str[0] == '0')
            break;
        for(int i = 0; i < l; i++){
            int sum = r * 10 + (s[i] - '0');
            r = sum % 11;
        }
        (r == 0) ? puts("Yes"): puts("No");
    }
}
/***/
main(){
    int n;
    while(scanf("%d", &n)!= EOF){
        int r = 1;
        for(int i = 1; i <= n; i++)
            r *= i;
        printf("Factorial of %d is %d", n, r);
    }
}
/***/
main(){
    int num; scanf("%d", &num);
    int original = num;
    int res = 0;
    while(original != 0){
        int rem = original % 10;
        res += rem * rem * rem;
        original /= 10;
    }
    (res == num) ? puts("%d is Armstrong number") : puts("%d isn't Armstrong number");
}
/***/
void Quadric(){
    float a, b, c; scanf("%f%f%f", &a, &b, &c);
    float D = b * b - 4 * a * c;
    if(D > 0){
        float x = (-b + sqrt(D) / (2 * a));
        float y = (-b - sqrt(D)/ (2 * a));
        printf("Roots are %0.3f %0.3f", x, y);
    }
    else if(D == 0)
        printf("\nRoots are %f", -b/(2 * a));
    else
        puts("Roots are immaginary");
}
/***/
void prime(){
    int n, cnt; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        cnt = 0;
        for(int j = 2; j <= i / 2; j++){
            if(i % j == 0){
                cnt++; break;
            }
        }
        if(cnt == 0 && i != 1)
            printf("%d ", i);
    }
}
/***/
void primeWord(){
    int i = 2;
    while(i <= 100){
        int flag  = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0)
                flag = 1;
        }
        if(flag)
            printf("%d ", i);
        i++;
    }
}
/***/
void prime(){
    int n, i; scanf("%d", &n);
    for(i = 2; i < n; i++){
        if(n % i == 0){
            printf("%d isn't prime", n);
            break;
        }
    }
    if(i == n)
        printf("%d is prime", n);
}
/***/
main(){
    int x = 'A';
    start:
        printf("%c = %d\n", x, x);
        x++;
        goto start;
}
/***/
void swap(){
    int x, y; scanf("%d%d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d", x, y);
}
/***/
void standardDeviation(){
    int n; scanf("%d", &n);
    float arr[n], sum = 0, sum1 = 0;
    for(int i = 0; i < n; i++)
        scanf("%f", &arr[i]);
    for(int i = 0; i < n; i++)
        sum += arr[i];
    float avg = sum / n;
    for(int i = 0; i < n; i++)
        sum1 += pow(arr[i] - avg, 2);
    float var = sum1 / n;
    printf("Standard deviation : %f", sqrt(var));
}
/***/
main(){
    int a, b, c, d;
    while(cin >> a >> b >> c >> d){
        if(!a && !b && !c && !d)
            break;
        int ans = 1080;
        if(a < b)
            ans += (40 + a - b) * 9;
        else
            ans += (a - b) * 9;
        if(b > c)
            ans += (40 + c - b) * 9;
        else
            ans += (c - b) * 9;
        if(c < d)
            ans += (40 + c - d) * 9;
        else
            ans += (c - d) * 9;
        printf("%d", ans);
    }
}
/***/
main(){
    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        int x = (n * 10) / 9;
        if(n % 9 == 0)
            printf("%d %d", x - 1, x);
        else
            printf("%d", x);
    }
}
/***/
main(){
    int a, b; scanf("%d%d", &a, &b);
    int sum = 0;
    for(int i = a; i <= b; i++){
        if(i % 2 != 0)
            sum += i;
        printf("%d", sum);
    }
}
/***/
main(){
    int n; 
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        int x = (3 + sqrt(9 + 8 * n))/2;
        printf("%d", x);
    }
}
/***/
main(){
    int n, i, arr[100];
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        int cnt = 0;
        for(i = 0;;i++){
            int mod = n % 2;
            if(mod == 1)
                cnt++;
            arr[i] = mod;
            if(n == 0)
                break;
            n /= 2;
        }
        printf("Parity of ");
        for(int j = i - 1; j >= 0; j--)
            printf("%d ", arr[j]);
        printf("is %d", cnt);
    }
}
/***/
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
main(){
    int n, arr[100], tmp[100], i;
    while(scanf("%d", &n) == 1){
        int flag = 0;
        for(i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(i = 0; i < n - 1; i++)
            tmp[i] = abs(arr[i + 1] - arr[i]);
        qsort(tmp, n - 1, sizeof(int), compare);
        for(i = 1; i < n; i++){
            if(tmp[i] != tmp[i - 1]){
                flag = 1;
                break;
            }
        }
        (flag == 1) ? puts("Not jolly") : puts("Jolly");
    }
}
/***/
main(){
    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        int a = sqrt(n), b = a * a;
        (b == n) ? puts("Yes") : puts("No");
    }
}
/***/
main(){
    int year;
    while(scanf("%d", &year) == 1){
        if(year >= 2000){
            int cnt = 0;
            if((year % 4 == 0 && year % 4 != 0) || year % 400 == 0){
                puts("Leap Year");
                cnt++;
            }
            if(year % 15 == 0){
                puts("Huluculu year");
                cnt++;
            }
            if(year % 55 == 0){
                puts("Buluculu year");
                cnt++;
            }
            if(cnt == 0)
                puts("Ordinary year");
        }
    }
}
/***/
main(){
    int x, y;
    while(scanf("%d %d", &x, &y) == 2 && x > 0 && y > 0){
        int sum = 0;
        printf("%d %d", x, y);
        if(x > y){
            int tmp = y; y = x; x = tmp;
        }
        for(int i = x; i <= y; i++){
            int ans = 1;
            while(j != 1){
                if(j % 2 == 0)
                    j /= 2;
                else
                    j = 3 * j + 1;
                ans++;
            }
            if(ans > sum)
                sum = ans;
        }
    }
    printf("%d", sum);
}
/***/
main(){
    double r, v; scanf("%lf%lf", &r, &v);
    double ans = (3.1416 / 2 * r/ v);
    printf("%lf", ans);
}
/***/
main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int cnt = 0;
        for(int i = 0; i < 5; i++){
            int x; scanf("%d", &x);
            if(x == n)
                cnt++;
        }
        printf("%d", cnt);
    }
}
/***/
main(){
    int n, arr[200];
    while(scanf("%d", &n) == 1 && n != 0){
        int sum = 0, ans = 0;
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < n; i++)
            sum += arr[i];
        int avg = sum / n;
        for(int i = 0; i < n; i++){
            if(arr[i] > avg)
                ans += arr[i] - avg;
        }
        printf("Minimum num of Moves are: %d", ans);
    }
}
/***/
