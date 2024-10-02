void Sequential(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 1; j--){
            if(i > n - j + 1)
                printf("_");
            else
                printf("%d", j);
        }
        for(int j = 1; j <= n; j++){
            if(j >= n - i + 2)
                printf(" ");
            else
                printf("%d", j);
        }
        printf("\n");
    }
}
void Sequential(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 1; j--){
            if(i >= j)
                printf("%d", j);
            else
                printf("_");
        }
        for(int j = 1; j <= n; j++){
            if(i >= j)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
}
/***/
void PrintM(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((j == 0 || j == n - 1) || (i % 2 != 0 && j % 2 != 0 && i <= n/2) || (i % 2 == 0 && j % 2 == 0 && i <= n/2 && i != 0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void PrintM(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((j == 0 || j == n - 1) || (i == j || j == n - 1 - i) && i < n/2 )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void PrintM(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j <= i || j >= n - 1 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
/***/
void Rombo(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n; j++){
            if(j <= n - 2 - i || j >= 2*n - i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}
void Square(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
/***/
void Pattern(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1)
                printf("%d ", i);
            else if(j == n)
                printf("%d ", n - i);
            else if(i == 1 || i == n)
                printf("+");
            else if(i == (n/2) + 1 && j == (n/2) + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
/***/
int i = 0;
int While(int i){
    printf("\n");
    while(i != 10){
        printf("%d ", i); i++;
    }
}
int Dowhile(int i){
    printf("\n");
    do{
        printf("%d ", i); i++;
    }while(i != 10);
}
int For(int i){
    printf("\n");
    for(;i < 10; i++)
        printf("%d ", i);
}
__main(){
    For(i);
    Dowhile(i);
    While(i);
}
/***/
__main(){
    unsigned int cnt = 1;
    do{
        printf("%u ", cnt);
    }while(++cnt <= 10);
}
/***/
int x = 12;
void add(){
    x = 34;
    puts("Enter Values: ");
    int a, b; scanf("%d%d", &a, &b);
    int sum = a + b; printf("sum is: %d\n", sum);
    printf("Before Incr local val: %d\n", x);
    x += 2;
    printf("After Incr local val: %d\n", x);
    {
        extern int x;
        printf("Global variable in local scope: %d", x);
    }
}
__main(){
    x = 5;
    printf("Before Adding x is: %d\n", x);
    add();
    printf("\nAfter Adding x is: %d", x);
}
/***/
int Divisor(int n){
    int sum = 0;
    while(n != 0){
        int x = n % 10;
        sum += x;
        n /= 10;
    }
    return sum;
}
__main(){
    int n, y; scanf("%d", &n);
    int m = Divisor(n);
    if(m % 10 > 1)
        y = Divisor(n);
    printf("%d", y);
}
/***/
void GradeAvg(){
    int stud; scanf("%d", &stud);
    float Attendence, Assingment, ClassTest, Mid, Final;
    float MidConvMark, FinalConvMark, TotalMark;
    for(int i = 0; i < stud; i++){
        printf("\nAttendence: "); scanf("%f", &Attendence);
        printf("\nAssingment: ");  scanf("%f", &Assingment);
        printf("\nClassTest: "); scanf("%f", &ClassTest);
        printf("\nMid(Out Of 50): "); scanf("%f", &Mid);
        printf("\nFinal(Out Of 100): "); scanf("%f", &Final);
        MidConvMark = (Mid * 30)/50;
        FinalConvMark = (Final * 40)/100;
        TotalMark = Attendence + Assingment + ClassTest + MidConvMark + FinalConvMark;
        int count = i + 1;
        if(TotalMark >= 90)
            printf("Student %d: A", count);
        else if(TotalMark >= 86 && TotalMark < 90)
            printf("Student %d: A-", count);
        else if(TotalMark >= 82 && TotalMark < 86)
            printf("Student %d: B+", count);
        else if(TotalMark >= 78 && TotalMark < 82)
            printf("Student %d: B", count);
        else if(TotalMark >= 74 && TotalMark < 78)
            printf("Student %d: B-", count);
        else if(TotalMark >= 70 && TotalMark < 74)
            printf("Student %d: C+", count);
        else if(TotalMark >= 66 && TotalMark < 70)
            printf("Student %d: C", count);
        else if(TotalMark >= 62 && TotalMark < 66)
            printf("Student %d: C-", count);
        else if(TotalMark >= 58 && TotalMark < 62)
            printf("Student %d: D+", count);
        else if(TotalMark >= 55 && TotalMark < 58)
            printf("Student %d: D", count);
        else
            printf("Student %d: F", count);
    }
}
/***/
void validTriangle(){
    float x1, x2, x3, y1, y2, y3;
    printf("Enter values: "); scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    float b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    float c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    if(a + b > c && b + c > a && c + a > b){
        if(a == b == c)
            printf("Equilateral");
        else if((a == b) || (b == c) || (c == a))
            printf("Isosceles");
        else
            printf("Scalen");
        if(a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
            printf("RightTriangle");
        else if(a * a + b * b > c * c || b * b + c * c > a * a || c * c + a * a > b * b)
            printf("Acute Triangle");
        else
            printf("Obtuse Triangle");
    }
    else
        puts("Invalid");
}
/***/
void func1(int a);
void func2(int b);
void func3(int c);
int main(){
    void(*f[3])(int) = {func1, func2, func3};
    puts("Enter Number between 0 and 2, 3 for end: ");
    size_t choice; scanf("%u", &choice);
    while(choice >= 0 && choice < 3){
        (*f[choice])(choice);
        puts("Enter Number between 0 and 2, 3 for end: ");
        scanf("%u", &choice);
    }
}
void func1(int a){
    printf("\nYou have entered %d\n", a);
}
void func2(int b){
    printf("\nYou have entered %d\n", b);
}
void func3(int c){
    printf("\nYou have entered %d\n", c);
}
/***/
void limitExceed(){
    int n = 2147483642, i = 1;
    while(i <= 10){
        printf("%d\n", n + i);
        i++;
    }
}
__main(){
    //saldo Iniziale.
    puts("Enter saldo Iniziale, Addebiti, Accrediti, limiti: ")
    int saldo; scanf("%d", &saldo);
    int spese; scanf("%d", &spese);
    int accrediti; scanf("%d", &accrediti);
    int limiti; scanf("%d", &limiti);
    saldo += addebiti - accrediti;
    (saldo > limiti)? puts("Limiti Superato") : puts("Limiti Non Superato");
}
/***/
//every four rapper He give us 1 chocklet.if we buy n chocklet how many chocklet how many chock we eat
void FreeChocklet(){
    int n; scanf("%d", &n);
    int chock = n, pack = n;
    printf("%s%10s\n", "chocklet", "packet");
    while(pack >= 4){
        chock += pack / 4;
        pack = (pack / 4) + (pack % 4);
        printf("%d%13d\n", chock, pack);
    }
}
/***/
//Grade Policy
char GetGrade(int mark){
    if(mark >= 0 && mark <= 39)
        return 'F';
    else if(mark >= 40 && mark <= 59)
        return 'C';
    else if(mark >= 60 && mark <= 79)
        return 'B';
    else
        return 'A';
}
__main(){
    int mark; scanf("%d", &mark);
    printf("Grade is: %c\n", GetGrade(mark));
}
/***/
//reads N which is the summation of 4 consecutive even numbers.
//Print the 4 consecutive even numbers whose summation is N.
int ConsecutiveEven(int n){
    for(int i = 1; i <= n; i++){
        int sum = i + (i + 2) + (i + 4) + (i + 6);
        if(sum == n){
            printf("%d %d %d %d\n", i, i + 2, i + 4, i + 6);
            break;
        }
    }
}
__main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        ConsecutiveEven(n);
    }
}
/***/
void FibSeries(){
    int n, a = 0, b = 1;
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for(int i = 2; i <= n; i++){
        printf("%d ", a + b);
        int tmp = a + b;
        a = b; b = tmp;
    }
}
/***/
//Find ratio two factorial numbers
int factorial(int a){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
float calculateRatio(int a, int b){
    double x = (double)factorial(a);
    double y = (double)factorial(b);
    (x < y) ? return (x / y) : return (y / x);
}
__main(){
    int a, b; scanf("%d%d", &a, &b);
    printf("ratio is: %0.f", calculateRatio(a, b));
}
/***/
// 1+2+3-4-5-6+7+8+9-10-11-......N. print Nth sum
void printSeries(){
    int n; scanf("%d", &n);
    int sum = 0, flag = 1;
    for(int i = 1; i <= n; i++){
        sum += i * flag;
        if(i % 3 == 0){
            if(flag == 1)
                flag = -1;
            else if(flag == -1)
                flag = 1;
        }
    }
    printf("%d", sum);
}
/***/
int sum(int a, int b){
    puts("Addition: ");
    return a + b;
}
int mult(int a, int b){
    puts("Multiplication: ");
    return a * b;
}
__main(){
    int a = sum(5, 13);
    printf("%d\n", a);
    int b = mult(2, 15);
    printf("%d ", b);
}
/***/
//Find Area Of Circle
float area(float r){
    float Area = 3.1416 * r * r;
    return Area;
}
__main(){
    float r; scanf("%f", &r);
    printf("Area of Circle is: %f", area(r));
}
/***/
__main(){
    int a, b; scanf("%d%d", &a, &b);
    printf("Power is: %f\n", pow(a, b));
    printf("Root is: %f\n", sqrt(a));
    printf("Abs is: %d\n", abs(b));
    printf("Sine value is: %.2f", sin(3.1416 / a));
}
/***/
typedef long long int ld;
int sevenPresent(ld n){
    while(n > 0){
        if(n % 10 == 7)
            return 1;
        n /= 10;
    }
}
int DigitSum(ld n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int LastDigit(ld x){
    int a = x % 10;
    if(a == 2 || a == 3 || a == 5 || a == 7)
        return 1;
    else
        return 0;
}
__main(){
    ld n; scanf("%lld", &n);
    (sevenPresent(n) == 1 && DigitSum(n) > 10 && LastDigit(n) == 1)? puts("Succeeded ") : puts("Failed");
}
/***/
int prime(int x){
    if(x == 0)
        return 0;
    else if(x == 1)
        return 1;
    else {
        for(int i = 2; i < x; i++){
            if(x % i == 0)
                return 0;
        }
        return 1;
    }
}
__main(){
    int x; scanf("%d", &x);
    (prime(x) == 1)? printf("%d is prime", x) : puts("its composite");
}
/***/
int fact(int n){
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    return res;
}
__main(){
    int n, r; scanf("%d%d", &n, &r);
    printf("Factorial are: %d", fact(n));
    int perm = fact(n) / fact(n - r);
    int comb = fact(n) / (fact(n - r) * fact(r));
    printf("\n%dC%d = %d\n%dP%d = %d\n", n, r, comb, n, r, perm);
}
/***/
int gcd(int a, int b){
    for(int i = a; i >= 1; i--){
        if(a % i == 0 && b % i == 0)
            return i;
    }
}
int lcm(int a, int b){
    for(int i = a; ; i++){
        if(i % a == 0 && i % b == 0)
            return i;
    }
    //return (a * b) / gcd(a, b);
}
__main(){
    int a, b; scanf("%d%d", &a, &b);
    printf("LCM(%d, %d): %d\nGCD(%d, %d): %d", a, b, lcm(a, b), a, b, gcd(a, b));
}
/***/
int Isvowel(char x){
    if(x >= 'A' && x <= 'Z')
        x += 32;
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') 
        return 1;
    else 
        return 0;
}
__main(){
    char x = getchar();
    getchar();
    (Isvowel(x) == 1) ? puts("vowel") : puts("Consonent");
}
/***/
//Nth Largest
void sortArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
__main(){
    int n, pos; scanf("%d%d", &n, &pos);;
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if(pos < 1 || pos > n){
        puts("Invalid Input");
        return 1;
    }
    sortArr(arr, n);
    int nthLargest = arr[n - pos];
    int nthSmallest = arr[pos - 1];
    printf("Largest element is: %d\nSmallest Element is: %d", nthLargest, nthSmallest);
}
/***/
int Leap(int n){
    if(n % 400 == 0 || (n % 100 != 0 && n % 4 == 0))
        return 1;
    else
        return 0;
}
int IsDistinct(int n){
    int x, counter[10] = {0};
    while(n > 0){
        x = n % 10;
        counter[x]++; n /= 10;
    }
    for(int i = 0; i < 10; i++){
        printf("%d = %d\n", i, counter[i]);
        if(counter[i] > 1)
            return 0;
    }
    return 1;
}
__main(){
    int n; scanf("%d", &n);
    if(Leap(n) == 1 && IsDistinct(n) == 1)
        printf("Beautiful");
    else
        printf("Not Beautiful");
}
/***/
// sqrt {|x - 3| + (y + 4) * (y + 4)}
int absolute(int x){
    if(x >= 0)
        return x;
    else
        return (-1) * x;
}
float FindRoot(int x, int y){
    int tmp = absolute(x - 3) + (y + 4) * (y + 4);
    return sqrt(tmp);
}
int main(){
    int x, y; scanf("%d%d", &x, &y);
    printf("res is: %0.2f", FindRoot(x, y));
}
/***/
__main(){
    int n; scanf("%d", &n);
    if(n > 0){
        for(int i = n; i >= (-1) * n; i--)
            printf("%d ", i);
    }
    else {
        for(int i = n; i <= (-1) * n; i++)
            printf("%d ", i);
    }
}
/***/
void CntNotEqual(){
    int n, trg; scanf("%d%d", &n, &trg);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != trg)
            cnt++;
    }
    printf("%d", cnt);
}
/***/
void divisor(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            printf("%d ", i);
    }
}
/***/
float Operation(char ch, int a, int b){
    if(ch == '+')
        return (a + b);
    else if(ch == '-')
        return abs(a - b);
    else if(ch == '*')
        return (a * b);
    else if(ch == '/'){
        if(a > b)
            return (float)a / b;
        else
            return (float)b / a;
    }
    else
        puts("Invalid Input");
}
__main(){
    int a, b; scanf("%d%d", &a, &b);
    getchar();
    char ch; scanf("%c", &ch);
    printf("%0.2f", Operation(ch, a, b));
}
/***/
//Sum the first & last digit
int SumOf(int n){
    int sum1 = n % 10;
    int sum2 = n/1000;
    int ans = sum1 + sum2;
    return ans;
}
__main(){
    int n; scanf("%d", &n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x; scanf("%d", &x);
        ans += SumOf(x);
    }
    printf("%d", ans);
}
/***/
//Add the Digits which is Divisible by ten
void SumOf(){
    int n; scanf("%d", &n);
    int arr[n], sum = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        if(arr[i] % 10 == 0)
            sum += arr[i];
    }
    printf("%d", sum);
}
/***/
// find avg of two integers
int swap(int *a, int *b){
    int tmp = *a; *a = *b; *b = tmp;
}
main(){
    int x, y; scanf("%d%d", &x, &y);
    swap(&x, &y);
    int *p = &x, *q = &y;
    float sum = ((*p + *q) / 2.0);
    printf("%0.2f", sum);
}
/***/
void find(int *arr, int n, int *max, int *min){
    *max = arr[0]; *min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > *max)
            *max = arr[i];
        else if(arr[i] < *min)
            *min = arr[i];
    }
}
main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    find(arr, n, &max, &min);
    printf("Max is: %d\nMin is: %d", max, min);
}
/***/
main(){
    int n; scanf("%d", &n);
    int *arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", (arr + i));
    for(int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
}
/***/
int power(int x, int y){
    if(y == 0)
        return 1;
    return x * power(x, --y);
}
main(){
    int x, y; scanf("%d%d", &x, &y);
    printf("%d", power(x, y));
}
/***/
void Power(int x, int y, int cnt, int res){
    while(cnt > y){
        printf("%d", res);
        return;
    }
    res *= x;
    cnt++;
    Power(x, y, cnt, res);
}
main(){
    int x, y; scanf("%d%d", &x, &y);
    int res = 1, cnt = 1;
    Power(x, y, cnt, res);
}
/***/
int print(int n){
    if(n > 0){
        print(n - 1);
        printf("%d ", n);
    }
}
int printRev(int n){
    if(n > 0){
        printf("%d ", n);
        printRev(n - 1);
    }
}
int fact(int n){
    if(n > 0)
        return n * fact(n - 1);
    else 
        return 1;
}
int sum(int n){
    if(n > 0)
        return n + sum(n - 1);
    return 0;
}
/***/
void func(int n){
    if(n > 0){
        func(--n);
        printf("%d ", n);
        func(--n);
    }
}
/***/
int arr[100];
int DigitSum(int i, int n){
    if(i > n)
        return 0;
    int LastDigit = arr[i] % 10;
    return LastDigit + DigitSum(i + 1, n);
}
main(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", DigitSum(0, n));
}
/***/
void print(int i, int n){
    if(i > n)
        return;
    printf("%d ", i);
    print(i + 1, n);
}
main(){
    int n, i; scanf("%d", &n);
    print(1, n);
}
/***/
void print(int i, int n){
    if(i > n)
        return;
    printf("%d ", i);
    print(i + 1, n);
}
int printSum(int i, int n){
    if(i > n)
        return 0;
    return i + printSum(i + 1, n);
}
main(){
    int n, i; scanf("%d", &n);
    print(1, n);
    printf("%d", printSum(1, n));
}

/***/
int PrintSum(int i, int n, int *arr){
    if(i == n)
        return 0;
    return arr[i] + PrintSum(i + 1, n, arr);
}
int arrSum(int n, int *arr){
    if(n == 0)
        return 0; 
    return arr[0] + arrSum(n - 1, arr + 1);
}
main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", PrintSum(0, n, arr));
    printf("%d", arrSum(n, arr));
}
/***/
//Diamond
void Upper(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
void Lower(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
/***/
void FloyadsTri(){
    int n; scanf("%d", &n);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d ", ++cnt);
        printf("\n");
    }
}
/***/
void Triangle(){
    int n; scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
/***/
void Triangle(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++)
            printf("*");
        printf("\n");
    }
}
/***/
void Pyramid(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2 * i - 1; j++){
            (i % 2 == 0)? printf("*") : printf("-");
        }
        printf("\n");
    }
}
/***/
void Triangle(){
    int n; scanf("%d", &n);
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
/***/
int Upper(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("10");
        printf("\n");
    }
}
int Lower(int n){
    for(int i = n - 1; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            printf("10");
        printf("\n");
    }
}
/***/
int Upper(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
int Lower(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
/***/
int Upper(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int Lower(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i == n || j == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
/***/
void Upper(int n){
    for(int i = n; i >= 0; i--){
        for(int j = i; j >= 0; j--)
            printf("*");
        printf("\n");
    }
}
void Lower(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
/***/
int Upper(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        for(int j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
int Lower(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        for(int j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
/***/
int Upper(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i + j == n + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int Lower(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i == n || j == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
/***/
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", j);
            //printf("%d", n - i + 1);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++)
            printf("%d", i);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = i; j <= n; j++)
            printf("%d", i);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = n; i >= 1; i--){
        for(int j = n; j > i; j--)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = n; i >= 1; i--){
        for(int j = i; j < n; j++)
            printf(" ");
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++)
            printf(" ");
        for(int j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n - i + 1; j++)
            printf("%d ", j);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = 1; j <= n - i + 1; j++)
            printf("%d ", j);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
/***/
int Pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d", n - i + 1);
        printf("\n");
    }
}
/***/
int IsPrime(int n){
    if(n < 2)
        return 0;
    else{
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0)
                return 0;
        }
        return 1;
    }
}
main(){
    int n; scanf("%d", &n);
    int CntPrime = 0, cur = 2;
    int needPrime = (n * (n + 1))/2;
    int prime[needPrime];
    while(CntPrime< needPrime){
        if(IsPrime(cur))
            prime[++CntPrime] = cur;
        cur++;
    }
    int idx = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++)
            printf("%d ", prime[idx++]);
        puts("");
    }
}
