#include<stdio.h>
enum week{Mon, Tue, Wed};
int main(){
    enum week day; day = Wed;
    printf("%d", Wed);
}
/***/
void func(int num){
    if(num > 0){
        func(--num);
        printf("%d ", num);
        func(--num);
    }
}
__main(){
    int num; scanf("%d", &num);
    func(num);
}
/***/
int a, b, c = 5, d = 7;
int func1(int a, int b){
    c = a + b;
    return c * 2;
}
int func2(int p){
    p += a;
    a *= 2;
    return p;
}
void func3(int d){
    c = d + 10;
    b = func2(c);
}
__main(){
    a = 1; b = 3;
    printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
    a = func1(a, b);
    printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
    d = func2(c);
    printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
    func3(b);
    printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
}
/***/
void TwoBase(){
    int x = 2, res = 1;
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        res *= x;
    printf("%d", res);
}
/***/
int Divisor(int n){
    int sum = 0;
    while(n > 0){
        int x = n % 10;
        sum += x;
        n /= 10;
    }
    return sum;
}
__main(){
    int n, y = 0; scanf("%d", &n);
    int m = Divisor(n);
    if(m % 10 > 1)
        y = Divisor(n);
    printf("%d", y);
}
/***/
void FloorCeil(){
    double val; scanf("%lf", &val);
    double floorVal = floor(val);
    double ceilVal = ceil(val);
    printf("Floor value: %0.f\nCeil value: %0.f",floorVal, ceilVal);
}
/***/
//Find cube of x using pointer
void cubeByRef(int *ptr){
    *ptr = (*ptr) * (*ptr) * (*ptr);
}
int cubeByval(int num){
    return num * num * num;
}
__main(){
    int num; 
    scanf("%d", &num);
    int x = num;
    cubeByRef(&num);
    printf("Cube of(ByRef): %d is %d ", x, num);
    int ans = cubeByval(num);
    printf("\nCube of(Byval): %d is %d", num, ans);
}
void print(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Initial Ptr is: %p\n", (void*)ptr);
    //Increament the pointer by 4 to point to arr[4]
    ptr += 4;
    printf("ptr after incrementing: %p\n", (void*)ptr);
    ptr -= 4;
    printf("ptr after Subtract 4: %p\n", (void*)ptr);
    printf("sizeof arr: %d\n", sizeof(arr));
}
void floatSum(void){
    float x, y;
    scanf("%f%f", &x, &y);
    printf("%0.2f + %0.2f = %0.2f", x, y, x + y);
}
void CountNumbers(){
    int n = 1;
    while(n <= 100)
        printf("%d ", n++);
}
void CountNumber(){
    int product = 1;
    while(product <= 100){
        product *= 3;
        printf("%d\t", product);
    }
}
void Pattern(){
    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 3; ++j){
            for(int k = 1; k <= 3; k++)
                printf("*");
            puts(" ");
        }
        puts(" ");
    }
}
void Operation(){
    int x, y;
    puts("Enter Integers: ");
    scanf("%d%d", &x, &y);
    printf("Sum of %d & %d is: %d", x, y, x + y);
    printf("\nSub of %d & %d is: %d", x, y, x - y);
    printf("\nMult of %d & %d is: %d", x, y, x*y);
    printf("\nDiv of %d & %d is: %d", x, y, x/y);
    printf("\nRemainder of %d & %d is: %d", x, y, x % y);
    if(x == y)
        printf("\n%d == %d", x, y);
    if(x != y)
        printf("\n%d != %d", x, y);
    if(x < y)
        printf("\n%d < %d", x, y);
    if(x <= y)
        printf("\n%d <= %d", x, y);
    if(x > y)
        printf("%d > %d", x, y);
    if(x >= y)
        printf("%d >= %d", x, y);
        
}
void pattern(){
    unsigned int x = 1;
    while(x <= 10){
        unsigned int y = 1;
        while(y <= 10){
            printf("%d\t", x*y);
            y++;
        }
        printf("\n");
        x++;
    }
}

//Access Element
__main(){
    int x = 7;
    int *ptr = &x;
    printf("Address of x is: %p", &x);
    printf("\nvalue of ptr is: %p", ptr);
    printf("\nvalue of x is: %d", x);
    printf("\nvalue of ptr is: %d", *ptr);
    printf("\n&*ptr = %p", &*ptr);
    printf("\n*&ptr = %p", *&ptr);
}

//Find Fib series
unsigned long long int fib(unsigned int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
__main(){
    unsigned int num;
    printf("Enter number: ");
    scanf("%u", &num);
    unsigned long long int res = fib(num);
    printf("Fib[%u] = %llu ", num, res);
}

//Factorial
unsigned long long int fact(unsigned int n){
    if(n <= 1)
        return 1;
    return (n * fact(n - 1));
}
__main(){
    for(unsigned int i = 1; i <= 21; ++i)
        printf("%u! = %llu\n", i, fact(i));
}

//Enum
enum week{sat, sun, mon, tue, wed, thu, fri};
__main(){
    for(int i = sat; i <= fri; i++){
        printf("Enum value %d->", i);
        switch(i){
            case sat:printf("Saturday\n"); break;
            case sun:printf("Sunday\n"); break;
            case mon:printf("Monday\n"); break;
            case tue:printf("Tuesday\n"); break;
            case wed:printf("Wednesday\n"); break;
            case thu:printf("Thursday\n"); break;
            case fri:printf("Friday\n"); break;
        }
    }
}

//Access Random
#define SIZE 7
#define Lancia 6e7
__main(){
    int freq[SIZE] = {0};
    srand(time(NULL));
    for(size_t roll = 1; roll <= Lancia; ++roll){
        size_t face = 1 + rand() % 6;
        ++freq[face];
    }
    printf("%s%13s\n", "Face", "Freq");
    for(size_t face = 1; face < SIZE; ++face)
        printf("%4d%17d\n", face, freq[face]);
}
__main(){
    unsigned int freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0;
    for(unsigned int roll = 1; roll <= 60000000; ++roll){
        int face = 1 + rand() % 6;
        switch(face){
            case 1: ++freq1; break;
            case 2: ++freq2; break;
            case 3: ++freq3; break;
            case 4: ++freq4; break;
            case 5: ++freq5; break;
            case 6: ++freq6; break;
        }
    }
    printf("%s%8s\n", "Face", "Freq");
    printf(" 1%13u\n", freq1);
    printf(" 2%13u\n", freq2);
    printf(" 3%13u\n", freq3);
    printf(" 4%13u\n", freq4);
    printf(" 5%13u\n", freq5);
    printf(" 6%13u\n", freq6);
}

//Tower Of Hanoi
void Tower(int n, int start, int end, int tmp){
    if(n == 1){
        printf("%d -> %d\n", start, end);
        return;
    }
    Tower(n - 1, start, tmp, end);
    printf("%d -> %d\n", start, end);
    Tower(n - 1, tmp, end, start);
}
__main(){
    printf("Enter Starting number of Disk: ");
    int n; scanf("%d", &n);
    Tower(n, 1, 3, 2);
}

//Fib Series
#define MAX 93
unsigned long long int fib(unsigned int n){
    unsigned long long int fib1 = 0, fib2 = 1;
    for(unsigned int i = 2; i <= n; i++){
        if(i % 2 == 0)
            fib1 += fib2;
        else
            fib2 += fib1;
    }
    if(n % 2 == 0)
        return fib1;
    else return fib2;
}
__main(){
    unsigned int n;
    printf("Enter integer: ");
    scanf("%u", &n);
    for(int i = 0; i <= n; ++i)
        printf("fib(%u) = %llu\n", i, fib(i));
}

__main(){
    for(unsigned int i = 1; i <= 20; i++){
        printf("%10d", 1 + (rand() % 6));
        if(i % 5 == 0)
            puts(" ");
    }
}

//Buildin Func
int square(int x){
    return x * x;
}
//log(x), log10(x), fabs(x), ceil(x), floor(x), pow(x, y),fmod(x, y), sin(x), cos(x), tan(x)
__main(void){
    printf("%s\t%5s\t%5s\t%4s\n", "num", "sqrt", "cbrt", "exp");
    for(int i = 1; i <= 10; i++){
        printf("%d\t %0.2f\t %0.2f\t %0.2f\n", i, sqrt(i), cbrt(i), exp(i));
    }
}

void Factorial(){
    unsigned int n, fact;
    scanf("%u", &n);
    for(unsigned int i = 1; i <= n; i++){
        fact = 1;
        for(unsigned int j = 1; j <= n; j++){
            fact *= j;
        }
    }
    printf("%u!\t %u\n", n, fact);
}

void FindAvg(){
    printf("Enter value(9999 to end): ");
    int value; scanf("%d", &value);
    unsigned int cnt = 0;
    int total = 0;
    while(value != 9999){
        total += value; cnt++;
        printf("Enter value(9999 to end): ");
        scanf("%d", &value);
    }
    if(cnt != 0)
        printf("Average is: %0.2f", (double)total/ cnt);
    else 
        puts("No values Entered");
}

__main(){
    unsigned int x = 1;
    while(x <= 20){
        if(x % 5 == 0)
            printf("%u\n", x++);
        else 
            printf("%u\t", x++);
    }
    x = 1;
    unsigned int sum = 0;
    do{
        sum += x;
        x += 2;
    }while(x <= 99);
    printf("sum is: %d", sum);
}

__main(){
    int sum, cnt = 0, n;
    while(cnt < 5){
        cnt++;
        printf("Enter value: ");
        scanf("%d", &n);
        sum += n;
    }
    printf("sum is: %d", sum);
}

void print(){
    unsigned int x = 1;
    while(x <= 10){
       // puts(x % 2 ? "*" : "+");
        puts(x % 2 + 1 ? "*" : "+");
        x++;
    }
}

void BasePower(){
    unsigned int x, y;
    puts("Enter Base & power: ");
    scanf("%d%d", &x, &y);
    unsigned int i = 1, power = 1;
    while(i <= y){
        power *= x;
        ++i;
    }
    printf("%u", power);
}

void method(){
int x = 5;
    x++;
    printf("x++: %d", x);
    x--;
    printf("\nx--: %d", x);
    printf("\n++x: %d", ++x);
    printf("\n--x: %d", --x);
}
void method(){
    int x = 4, y = 5;
    if(++x >= 5){
        if(y-- >= 5)
            puts("*");
        else{
            puts("+");
            puts("#");
        }
    }
}
void method(){
    int x = 4, y = 5;
    if(++x >= 5){
        if(y-- >= 5)
            puts("*");
        else
            puts("+");
        puts("#");
    }
}
void method(){
    int x = 4, y = 4;
    printf("\nx == y: %d", x == y);
    printf("\nx != y: %d", x != y);
    x++;
    printf("\nx == y: %d", x == y);
    printf("\nx != y: %d", x != y);
}

__main(){
    float num = 19.987654321;
    printf("%f\t%0.2f\n%4.3f\t", num, num, num);
    printf("%e\n%lf\t", num, num);
    
    //Typecst
    int a, *p;
    double b, *q;
    b = (double)25/4;
    p = &a;
    q = (double *)q;
    printf("\n%lf", b);
    printf("\n%p\t%p", p, q);
}
//Scope

int x = 1;
void Local(){
    x = 25;
    printf("\nAfter Enter local: %d", x);
    x++;
    printf("\nBefore Exit local: %d", x);
}
void staticLocal(){
    static int x = 30;
    printf("\nAfter Enter staticLocal: %d", x);
    x++;
    printf("\nBefore Exit staticLocal: %d", x);
}
void Global(){
    printf("\nAfter Enter Global: %d", x);
    x *= 10;
    printf("\nBefore Exit Global: %d", x);
}
int main(){
    x = 5;
    printf("Outer Scoper: %d", x);{
        x = 7;
        printf("\nInner Scope: %d", x);
    }
    printf("\nOueter Scope: %d", x);
    for(int i = 0; i < 3; i++){
        puts("\nCalls: ");
        Local();
        staticLocal();
        Global();
    }
}
/***/
void Bitwise(){
    int n, x; scanf("%d%d", &n, &x);
    printf("%d |% d = %d\n", n, x, n | x);
    printf("%d &% d = %d\n", n, x, n & x);
    printf("%d ^% d = %d\n", n, x, n ^ x);
}
/***/
void OperationPointer(){
    int a, b; scanf("%d%d", &a, &b);
    int *ptr = &a, *trv = &b;
    printf("Sum of the pointer is: %d\nDiff of the pointer is: %d", (*ptr + *trv), abs(*ptr - *trv));
}
/***/
void SumofDigits(){
    int n; scanf("%d", &n);
    int x, sum = 0;
    while(n != 0){
        x = n % 10;
        n /= 10;
        sum += x;
    }
    printf("%d", sum);
}
// Sum even Divisible by 4
int main(){
    int arr[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0 && arr[i] % 4 == 0)
            sum += arr[i];
    }
    printf("%d", sum);
}
//rombos
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = n - i; j >= 1; j--)
            printf(" ");
        for(int j = 1; j <= n; j++)
            printf("#");
        printf("\n");
    }
}
//print Integers
int main(){
    int n; scanf("%d", &n);
    if(n < 0){
        for(int i = n; i <= -n; i++)
            printf("%d ", i);
        printf("\n");
    }
    else if(n >= 0){
        for(int i = n; i >= -n; i--)
            printf("%d ", i);
        printf("\n");
    }
}
//Calculate CGPA
int main(){
    char name[100]; scanf("%s", name);
    int arr[5], G[5];
    float cgpa;
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < 5; i++) {
        if(arr[i] >= 80 && arr[i] <= 100)
            G[i] = 4;
        else if(arr[i] >= 70 && arr[i] <= 79)
            G[i] = 3.5;
        else if(arr[i] >= 60 && arr[i] <= 69)
            G[i] = 3;
        else if(arr[i] >= 50 && arr[i] <= 59)
            G[i] = 2.5;
        else if(arr[i] <= 49)
            G[i] = 0;
    }
    cgpa = (((G[0] * 3) + (G[1] * 1.5) + (G[2] * 3) + (G[3] * 1.5) + (G[4] * 2)) / (3 + 1.5 + 3 + 1.5 + 2));
    printf("CGPA of %s is: %0.2f\n", name, cgpa);
    if (cgpa == 0)
        puts("Letter Grade: F");
    else if (cgpa <= 2.5)
        puts("Letter Grade: D");
    else if (cgpa <= 3)
        puts("Letter Grade: C");
    else if (cgpa <= 3.5)
        puts("Letter Grade: B");
    else if (cgpa <= 4)
        puts("Letter Grade: A");
}
//determine whether the factorial of a given number n results in an overflow or underflow 
int main(){
    long long n;
    while (scanf("%lld", &n) == 1){
        if (n < 0 && n % 2 == 0) 
            printf("Underflow!\n");
        else if (n < 0 && n % 2 != 0) 
            printf("Overflow!\n");
        else if (n == 0 || n <= 7) 
            printf("Underflow!\n");
        else if (n == 8) 
            printf("40320\n");
        else if (n == 9) 
            printf("362880\n");
        else if (n == 10) 
            printf("3628800\n");
        else if (n == 11) 
            printf("39916800\n");
        else if (n == 12) 
            printf("479001600\n");
        else if (n == 13) 
            printf("6227020800\n");
        else if (n > 13) 
            printf("Overflow!\n");
    }
}
// calculate the total number of cigarettes a person can smoke given an initial number of cigarettes and 
//an exchange rate for cigarette butts. The exchange rate specifies how many cigarette butts are needed to get one new cigarette.
int main(){
    int initialCigarettes, exchangeRate, totalSmoked, buttsLeft, totalBonus, remainingButts;
    while (scanf("%d%d", &initialCigarettes, &exchangeRate) == 2){
        totalSmoked = initialCigarettes;
        totalBonus = 0;
        while (totalSmoked >= exchangeRate) {
            buttsLeft = totalSmoked / exchangeRate;
            remainingButts = totalSmoked % exchangeRate;
            totalSmoked = buttsLeft + remainingButts;
            totalBonus = totalBonus + buttsLeft;
        }
        printf("%d\n", initialCigarettes + totalBonus);
    }
}
int main(){
    unsigned long int num1, num2, digit1, digit2;
    int i, carryCount, tempCarry, totalCarry;
    while (scanf("%lu%lu", &num1, &num2) == 2){
        carryCount = 0;
        tempCarry = 0;
        if (num1 == 0 && num2 == 0) 
            break;
        for (i = 0; i < 9; i++){
            digit1 = num1 % 10;
            digit2 = num2 % 10;
            if (digit1 + digit2 >= 10){
                tempCarry = tempCarry + 1;
                do{
                    num1 /= 10;
                    num2 /= 10;
                    digit1 = num1 % 10;
                    digit2 = num2 % 10;
                    if (digit1 + digit2 == 9)
                        carryCount = carryCount + 1;
                    else if (digit1 + digit2 > 9)
                        tempCarry = tempCarry + 1;
                } while (digit1 + digit2 >= 9);
            }
            num1 /= 10;
            num2 /= 10;
            if (num1 == 0 && num2 == 0) 
                break;
        }
        totalCarry = tempCarry + carryCount;
        if (totalCarry == 0)
            printf("No carry operation.\n");
        else if (totalCarry == 1)
            printf("%d carry operation.\n", totalCarry);
        else
            printf("%d carry operations.\n", totalCarry);
    }
}
int main(){
    long int init, trg, cur;
    while(scanf("%ld%ld", &init, &trg) != EOF){
        long int sum = 0;
        cur = init;
        while(sum < trg){
            sum += cur;
            cur++;
        }
        printf("%ld", cur - 1);
    }
}
// calculate the radius of the largest circle that can fit inside a triangle
void calculateRadius(){
    double a, b, c;
    while(scanf("%lf%lf%lf", &a, &b, &c) == 3){
        if(a <= 0 || b <= 0 || c <= 0)
            continue;
        double s = (a + b + c) / 2;
        double ans = sqrt(((s - a) * (s - b) * (s - c)) / s);
        printf("The radius of the round table is: %.3lf\n", ans);
    }
}
// calculate the missing corner of a rectangle when three of its corners are given. 
void missingCorner() {
    double a1, a2, b1, b2, c1, c2, d1, d2, e1, e2;
    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &a1, &a2, &b1, &b2, &c1, &c2, &d1, &d2) == 8) {
        if (a1 == b1 && a2 == b2) {
            e1 = c1 + d1 - a1;
            e2 = c2 + d2 - a2;
        } else if (a1 == c1 && a2 == c2) {
            e1 = b1 + d1 - a1;
            e2 = b2 + d2 - a2;
        } else if (a1 == d1 && a2 == d2) {
            e1 = c1 + b1 - a1;
            e2 = c2 + b2 - a2;
        } else if (b1 == c1 && b2 == c2) {
            e1 = a1 + d1 - b1;
            e2 = a2 + d2 - b2;
        } else if (b1 == d1 && b2 == d2) {
            e1 = a1 + c1 - b1;
            e2 = a2 + c2 - b2;
        } else if (c1 == d1 && c2 == d2) {
            e1 = b1 + a1 - c1;
            e2 = b2 + a2 - c2;
        }
        printf("%.3lf %.3lf\n", e1, e2);
    }
}
//calculate the minimum and maximum distances between a point and a circle
int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        float x, y, z; scanf("%f%f%f", &x, &y, &z);
        float maxDst, radius;
        float dstOrg= sqrt(x * x + y * y);
        if(dstOrg <= z)
            maxDst = z - dstOrg;
        else
            maxDst = dstOrg;
        radius = z + dstOrg;
        printf("%.2f %.2f\n", maxDst, radius);
    }
}
int main(){
    char str[1000];
    int b = 0, t = 0, a = 0, w = 0;
    int n; scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
        scanf("%c", &str[i]);
    for(int i = 0; i < n; i++){
        if(str[i] == 'B') b++;
        if(str[i] == 'W') w++;
        if(str[i] == 'A') a++;
        if(str[i] == 'T') t++;
    }
    if(b == 0 && w == 0 && a > 0 && t == 0)
        printf("Case %d: ABANDONED\n", i);
    else if(b == 0 && t == 0)
        printf("Case %d: WHITEWASH\n", i);
    else if(t == 0 && w == 0)
        printf("Case %d: BANGLAWASH\n", i);
    else if(b > w)
        printf("Case %d: BANGLADESH %d - %d\n", i, b, w);
    else if(w > b)
        printf("Case %d: WWW %d - %d\n", i, w, b);
    else if(b == w)
        printf("Case %d: DRAW %d %d\n", i, b, t);
}
// buy two books such that the sum of their prices equals a given target price.
int main(){
    int num, trg, price[1000], minDiff;
    int first, second;
    while(scanf("%d", &num) == 1){
        minDiff = INT_MAX;
        for(int i = 1; i <= num; i++)
            scanf("%d", &price[i]);
        scanf("%d", &trg);
        for (int i = 1; i <= num; i++){
            for (int j = i + 1; j <= num; j++) { 
                if ((price[i] + price[j]) == trg) {
                    long priceDiff = price[j] > price[i] ? price[j] - price[i] : price[i] - price[j];
                    if (priceDiff < minDiff) {
                        first = price[i];
                        second = price[j];
                        minDiff = priceDiff;
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n", first, second);
    }
}
int main(){
    int a, b; scanf("%d%d", &a, &b);
    print("%d", a * b - 1);
    int s = a + b;
    int ret = (s * (s + 1) / 2) + a + 1;
    printf("%d", ret)
}
//calculate and determine the number of moves required to go from one point (x1, y1) to another point (x2, y2)
void calculateMove(){
    int x1, x2, y1, y2, dx, dy;
    while(scanf("%d%d%d%d", &x1, &y1, &x2, &y2) == 4){
        if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0)
            break;
        dx = (x1 > x2) ? x1 - x2 : x2 - x1;
        dy = (y1 > y2) ? y1 - y2 : y2 - y1;
        if (dx == 0 && dy == 0)
            printf("0\n"); 
        else if (dx == dy || dx == 0 || dy == 0)
            printf("1\n");
        else
            printf("2\n");  
    }
}
int main(){
    int t;
    while(scanf("%d", &t) == 1){
        for(int i = 1; i <= t; i++){
            int n; scanf("%d", &n);
            int original = n;
            int rev = 0, cnt = 0;
            while(1){
                sum = 0;
                while(n != 0) {
                    sum = sum * 10 + n % 10;
                    n /= 10;
                }
                if(sum == original)
                    break;
                else{
                    n = sum + original;
                    original = n; 
                    cnt++;
                }
            }
            printf("%d %d\n", cnt, original);
        }
    }
}
int main() {
    unsigned long int dnum;
    int rem, parity, l, i, num, t;
    int s[1000];
    while(scanf("%lu", &dnum) == 1) {
        num = dnum;
        parity = 0;
        l = 0; 
        while(dnum > 0) {
            rem = dnum % 2;
            l = l + 1; 
            if(rem == 1)
                parity = parity + 1; 
            dnum = dnum / 2;
        }
        for(i = 0; i < l; i++) {
            rem = num % 2;
            s[i] = rem; 
            num = num / 2; 
        }
        printf("The parity of ");
        for(i = l - 1; i >= 0; i--)
            printf("%d", s[i]); 
        printf(" is %d (mod 2).\n", parity);
    }
    return 0;
}
int main(){
    int x, y; scanf("%d%d", &x, &y);
    puts("Divisible are: ");
    for(int i = 1; i <= y; i++){
        if(i % x == 0)
            printf("%d ", i);
    }
    puts("\nOdds are: ");
    for(int i = 1; i <= x; i++){
        if(i % 2 != 0)
            printf("%d ", i);
    }
    puts("\nEvens are: ");
    for(int i = 2; i <= x; i++){
        if(i % 2 == 0)
            printf("%d ", i);
    }
    puts("\nPrimes are: ");
    for(i = 2; i <= x; i++){
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            puts("prime")
        else
            puts("composite")
    }
}
// There has N floors 1-st floor to N-th floor. Each floor has K rooms,  1-st to K-th room.
//both N and K are one-digit integers, and the j-th room on the i-th floor has the room number i0j. sum of the room numbers of all rooms 
int main(){
    int n, k; scanf("%d%d", &n, &k);
    int nxtRoom = 101, nxtFloor = 2, res = 0;
    for(int i = 1; i <= n * k; i++){
        res += nxtRoom;
        nxtRoom += 1;
        if(i % k == 0){
            nxtRoom = (100 * nxtFloor) + 1;
            nxtFloor += 1;
        }
        printf("%d", res);
    }
}
int main(){
    int t; scanf("%d", &t);
    int arr[233], IsIncr, IsDecr;
    while(t--){
        for(int i = 0; i < 10; i++)
            scanf("%d", &arr[i]);
        IsIncr = 1; IsDecr = 1;
        for(int i = 0; i < 9; i++){
            if(arr[i] < arr[i + 1])
                IsDecr = 0;
            if(arr[i] > arr[i + 1])
                IsIncr = 0;
        }
        if(IsIncr || IsDecr)
            puts("Ordered");
        else
            puts("Unordered");
    }
}
int main(){
    int n; scanf("%d", &n);
    if(n >= 1){
        for(int i = 1; i <= n; i++)
            printf("%d ", i);
    }
    else{
        for(int i = 1; i >= n; i--)
            printf("%d ", i);
    }
    printf("\n");
}
int main(){
    int n, m; scanf("%d%d", &n, &m);
    if(n > m)
        m += 24;
    for(int i = n; i <= m; i++)
        printf("%d ", i % 24);
    printf("\n");
}
int main(){
    char str[10], ch = 'a';
    for(int i = 0; i < 8; i++)
        str[i] = ch + 8 - i;
    str[i] = '\0';
    for(int i = 0; i < 8; i++)
        printf("%c ", str[i]);
}
int main(){
    int n, cnt = 0;
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        cnt = 0;
        while(n >= 3){
            n -= 3;
            cnt++;
            n += 1;
        }
        if(n == 2)
            printf("%d", cnt + 1);
        else
            printf("%d", cnt);
    }
}
int main() {
    int term1, term2, finalExam, attendance, classTest1, classTest2, classTest3;
    int classTestAverage, totalMarks, numCases, caseNumber;
    while (scanf("%d", &numCases) == 1) {
        for (caseNumber = 1; caseNumber <= numCases; caseNumber++) {
            scanf("%d %d %d %d %d %d %d", &term1, &term2, &finalExam, &attendance, &classTest1, &classTest2, &classTest3);
            if (classTest1 <= classTest2 && classTest1 <= classTest3)
                classTestAverage = (classTest2 + classTest3) / 2;
            else if (classTest2 <= classTest1 && classTest2 <= classTest3)
                classTestAverage = (classTest1 + classTest3) / 2;
            else
                classTestAverage = (classTest1 + classTest2) / 2;
            totalMarks = term1 + term2 + finalExam + attendance + classTestAverage;
            if (totalMarks >= 90)
                printf("Case %d: A\n", caseNumber);
            else if (totalMarks >= 80)
                printf("Case %d: B\n", caseNumber);
            else if (totalMarks >= 70)
                printf("Case %d: C\n", caseNumber);
            else if (totalMarks >= 60)
                printf("Case %d: D\n", caseNumber);
            else
                printf("Case %d: F\n", caseNumber);
        }
    }
    return 0;
}
#include<stdio.h>
//take three integers & print bigger oner.if same print equal
validTriangle(int a, int b, int c){
    if(a == b || b == c || c == a)
        puts("Yes");
    if(a > b && a > c){
        (b + c > a) ? puts("Yes") : puts("No");
    }
    else if(b > a && b > c){
        (a + c > b) ? puts("Yes") : puts("No");
    }
    else if(c > a && c > b){
        (a + b > c) ? puts("Yes") : puts("No");
    }
}
int Bigger(int a, int b, int c)
{
    if(a > b && a > c)
        puts("A is Bigger");
    else if(a > b && a == c)
        puts("A & C both are bigger");
    else if(a > c && a == b)
        puts("A & B both are bigger");
    else if(b > a && b > c)
        puts("B is Bigger");
    else if(b > a && b == c)
        puts("B & C both are Bigger");
    else if(b > c && b == a)
        puts("A & B both are Bigger");
    else if(a == b && b == c && c == a)
        puts("They are equal");
    else if(c > a && c > b)
        puts("C is Bigger");
    else if(c == a && c > b)
        puts("A & C both are Bigger");
    else if(c > a && b == c){
        puts("B & C both are Bigger");
    }
}
int main()
{
    int a, b, c; scanf("%d%d%d", &a, &b, &c);
    Bigger(a, b, c);
    validTriangle(a, b, c);
    return 0;
}
