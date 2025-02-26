#include<stdio.h>
enum week{sat, sun, mon, tue, wed, thu, fri};
int main(){
    enum week day; day = tue; printf("%d\n", day);
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
#include<stdio.h>
int func(int num){
    if(num > 0){
        func(--num);
        printf("%d ", num);
        func(--num);
    }
}
int main(){
    int num; scanf("%d", &num);
    func(num);
}
#include<stdio.h>
int a, b, c = 5, d = 7;
int func1(int a, int b){
    c = a + b;
    return c * 2;
}
int func2(int c){
    c += a; a *= 2;
    return c;
}
int func3(int d){
    c = d + 10;
    b = func2(c);
}
int main(){
    int a = 1, b = 3; 
    printf("%d %d %d %d\n", a, b, c, d);
    a = func1(a, b);
    printf("%d %d %d %d\n", a, b, c, d);
    d = func2(c);
    printf("%d %d %d %d\n", a, b, c, d);
    func3(b);
    printf("%d %d %d %d\n", a, b, c, d);
}
#include<stdio.h>
//Two Base
int main(){
    int res = 1, x = 2;
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        res *= x;
    printf("%d", res);
}
#include<stdio.h>
int divisor(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10; n /= 10;
    }
    return sum;
}
int main(){
    int res, n; scanf("%d", &n);
    int m = divisor(n);
    if(m % 10 > 1)
        res = m;
    printf("%d", res);
}
#include<stdio.h>
int main(){
    double val; scanf("%lf", &val);
    double floorVal = floor(val);
    double ceilVal = ceil(val);
    printf("Floor value: %0.f\tCeil value: %0.f\n",floorVal, ceilVal);
    float num = 19.987654321;
    printf("%f\t%0.2f\n%4.3f\t%e\t%lf\n", num, num, num, num, num);
}
#include<stdio.h>
int byRef(int *ptr){
    *ptr = (*ptr) * (*ptr) * (*ptr);
}
int byVal(int num){
    return num * num * num;
}
int main(){
    int n; scanf("%d", &n);
    int x = n;
    byRef(&n);
    printf("Cube of(ByRef): %d is %d ", x, num);
    printf("\nCube of(Byval): %d is %d", num, byVal(num));
}
#include<stdio.h>
//Access address
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("%d\t%p\n", ptr, (void*)ptr);
    ptr += 4;
    printf("%d\t%p\n", (void*)ptr, ptr);
    ptr -= 4;
    printf("%d\t%p\n", ptr, (void*)ptr);
    printf("%d", sizeof(arr));
}
#include<stdio.h>
//Access value
int main(){
    int x = 7;
    int *ptr = &x;
    printf("Address of x: %p, ptr: %p", &x, ptr);
    printf("\nvalue of x: %d, ptr: %d", x, *ptr);
    printf("\n&*ptr: %p, *&ptr: %p", &*ptr, *&ptr);
}
#include<stdio.h>
int main(){
    // float sum
    float x, y; scanf("%f%f", &x, &y);
    printf("%0.2f + %0.2f = %0.2f\n", x, y, x + y);
    //count digits
    int n = 1;
    while(n <= 100){
        n *= 3;
        printf("%d ", n);
        //printf("%d ", n++);
    }
}
#include<stdio.h>
//Rombus
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
#include<stdio.h>
int main(){
    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 3; ++j){
            for(int k = 1; k <= 3; k++)
                printf("*");
            puts(" ");
        }
        puts(" ");
    }
}
#include<stdio.h>
int main(){
    int x = 1;
    while(x <= 10){
        int y = 1;
        while(y <= 10){
            printf("%d\t", x * y);
            y++;
        }
        puts(""); x++;
    }
}
#include<stdio.h>
//Operations
int main(){
    int x, y; scanf("%d%d", &x, &y);
    printf("Sum of %d & %d is: %d", x, y, x + y);
    printf("\nSub of %d & %d is: %d", x, y, x - y);
    printf("\nMult of %d & %d is: %d", x, y, x * y);
    printf("\nDiv of %d & %d is: %d", x, y, x / y);
    printf("\nRemainder of %d & %d is: %d", x, y, x % y);
    if(x == y)
        printf("\n%d == %d,%d", x, y, x == y);
    if(x != y)
        printf("\n%d != %d, %d", x, y, x != y);
    if(x < y)
        printf("\n%d < %d, %d", x, y, x < y);
    if(x <= y)
        printf("\n%d <= %d, %d", x, y, x <= y);
    if(x > y)
        printf("%d > %d, %d", x, y, x > y);
    if(x >= y)
        printf("%d >= %d, %d", x, y, x >= y);
}
#include<stdio.h>
int fib(int num){
    if(num == 0 || num == 1) return num;
    else return fib(num - 1) + fib(num - 2);
}
unsigned long long int fact(int n){
    if(n <= 1) return 1;
    else return (n * fact(n - 1));
}
int main(){
    int num; scanf("%d", &num);
    printf("Fib[%d] = %d\n", num, fib(num));
    for(int i = 1; i <= num; i++)
        printf("%d! = %llu\n", i, fact(i));
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SZ 7
#define Lancia 6e7
//probability of DICE
int main(){
    int freq[SZ] = {0};
    srand(time(NULL));
    for(size_t i = 1; i <= Lancia; i++){
        size_t face = 1 + rand() % 6;
        ++freq[face];
    }
    printf("%s%13s\n", "Face", "Freq");
    for(size_t face = 1; face < SZ; ++face)
        printf("%2d%16d\n", face, freq[face]);
    //freq dice
    int freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0;
    for(size_t i = 1; i <= Lancia; i++){
        size_t face = 1 + rand() % 6;
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
#include<stdio.h>
void validTriangle(int a, int b, int c){
    if(a == b || b == c || c == a) puts("Yes");
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
int Bigger(int a, int b, int c){
    if(a > b && a > c) puts("A is Bigger");
    else if(a > b && a == c) puts("A & C both are bigger");
    else if(a > c && a == b) puts("A & B both are bigger");
    else if(b > a && b > c) puts("B is Bigger");
    else if(b > a && b == c) puts("B & C both are Bigger");
    else if(b > c && b == a) puts("A & B both are Bigger");
    else if(a == b && b == c && c == a) puts("They are equal");
    else if(c > a && c > b) puts("C is Bigger");
    else if(c == a && c > b) puts("A & C both are Bigger");
    else if(c > a && b == c) puts("B & C both are Bigger");
}
int main(){
    int a, b, c; scanf("%d%d%d", &a, &b, &c);
    Bigger(a, b, c);
    validTriangle(a, b, c);
}
#include<stdio.h>
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
int main(){
    int n; scanf("%d", &n);
    Tower(n, 1, 3, 2);
}
#include<stdio.h>
#include<stdlib.h>
unsigned long long int fib(int n){
    int fib1 = 0, fib2 = 1;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0) fib1 += fib2;
        else fib2 += fib1;
    }
    if(n % 2 == 0) return fib1;
    else return fib2;
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i <= n; i++)
        printf("fib(%d) = %llu\n", i, fib(i));
    for(int i = 1; i <= 20; i++){
        printf("%10d", 1 + (rand() % 6));
        if(i % 5 == 0)
            puts("");
    }
    int fact;
    for(int i = 1; i <= n; i++){
        fact = 1;
        for(int j = 1; j <= n; j++)
            fact *= j;
    }
    printf("%d!\t = %u\n", n, fact);
}
#include <stdio.h>
#include <math.h>
int square(int x){
    return x * x;
}
int main(void) {
    printf("%s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\n", 
           "num", "log", "log10", "fabs", "ceil", "floor", "pow(2)", "fmod(2)", "sin", "cos", "tan");
    for (int i = 1; i <= 10; i++) {
        printf("%2d\t%5.2f\t%5.2f\t%5.2f\t%5.2f\t%5.2f\t%5.2f\t%5.2f\t%5.2f\t%5.2f\t%5.2f\n", 
               i, log(i), log10(i), fabs(i), ceil(i), floor(i), pow(i, 2), fmod(i, 2), sin(i), cos(i), tan(i));
    }
    printf("%s\t%5s\t%5s\t%4s\n", "num", "sqrt", "cbrt", "exp");
    for (int i = 1; i <= 10; i++) {
        printf("%d\t %5.2f\t %5.2f\t %5.2f\n", i, sqrt(i), cbrt(i), exp(i));
    }
}
#include<stdio.h>
// calculate avarage
int main(){
    int val; scanf("%d", &val);
    int cnt = 0, total = 0;
    while(n != 9999){
        total += val;
        cnt++;
        scanf("%d", &val);
    }
    if(cnt != 0) printf("%0.2f", (double)total / sum);
    else puts("No value entered");
}
#include<stdio.h>
int main(){
    int x = 1;
    while(x <= 20){
        printf("%d ", x);
        if(x % 5 == 0) puts("");
        else printf("\t");
    }
    int sum = 0; x = 1;
    do{
        sum += x;
        x += 2;
    }while(x <= 99);
    printf("\n%d ", sum);
}
#include<stdio.h>
int main(){
    int cnt = 0, sum = 0;
    while(cnt < 5){
        cnt++;
        int n; scanf("%d", &n);
        sum += n;
    }
    printf("%d", sum);
}
#include<stdio.h>
int main(){
    int x = 1;
    while(x <= 10){
       // puts(x % 2 ? "*" : "+");
        puts(x % 2 + 1 ? "*" : "+");
        x++;
    }
}
#include<stdio.h>
//Base Power
int main(){
    int x, y; scanf("%d%d", &x, &y);
    int i = 1, power = 1;
    while(i <= y){
        power *= x;
        i++;
    }
    printf("%d", power);
}
#include<stdio.h>
//Calculate Grade
int main(){
    int term1, term2, final, attendance;
    int CT1, CT2, CT3, CTavg, t, total;
    while(scanf("%d", &t) == 1){
        while(t--){
            scanf("%d%d%d%d%d%d%d", &term1, &term2, &final, &attendance, &CT1, &CT2, CT3);
            int lowest = min(CT1, CT2, CT3);
            CTavg = (CT1 + CT2 + CT3 - lowest) / 2;
            total += term1 + term2 + final + attendance + CTavg;
            char grade;
            if (total >= 90)  grade = 'A';
            else if (total >= 80) grade = 'B';
            else if (total >= 70) grade = 'C';
            else if (total >= 60) grade = 'D';
            else grade = 'F';
            printf("Case %d: %c\n", t, grade);
        }
    }
}
#include<stdio.h>
int main(){
    int x = 5;
    printf("x++: %d", x++);
    printf("\nx--: %d", x--);
    printf("\n++x: %d", ++x);
    printf("\n--x: %d", --x);
    //relational
    int y = 4;
    printf("\nx == y: %d", x == y);
    printf("\nx != y: %d", x != y);
    x++;
    printf("\nx == y: %d", x == y);
    printf("\nx != y: %d", x != y);
    //Bitwise
    printf("\n%d |% d = %d", y, x, y | x);
    printf("\n%d &% d = %d", y, x, y & x);
    printf("\n%d ^% d = %d", y, x, y ^ x);
}
#include<stdio.h>
int main(){
    int x = 4, y = 5;
    if(++x >= 5){
        if(y-- >= 5) puts("*");
        else{
            puts("+");
            puts("#");
        }
    }
    if(++x >= 5){
        if(y-- >= 5) puts("*");
        else puts("+");
        puts("#");
    }
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b; scanf("%d%d", &a, &b);
    int *ptr = &a, *trv = &b;
    printf("Sum of the pointer is: %d\nDiff of the pointer is: %d", (*ptr + *trv), abs(*ptr - *trv));
    //Typecast
    int x, *p;
    double y, *q;
    y = (double)25 / 4; printf("\n%lf", y);
    p = &x;
    q = (double *)q; printf("\n%p\t%p", p, q);
}
#include<stdio.h>
int x = 1;
void Local(){
    x = 25;
    printf("\nAfter Enter local: %d", x++);
    printf("\nBefore Exit local: %d", x);
}
void staticLocal(){
    static int x = 30;
    printf("\nAfter Enter staticLocal: %d", x++);
    printf("\nBefore Exit staticLocal: %d", x);
}
void Global(){
    printf("\nAfter Enter Global: %d", x);
    x *= 10;
    printf("\nBefore Exit Global: %d", x);
}
int main(){
    x = 5; printf("Outer Scoper: %d", x);
    x = 7; printf("\nInner Scope: %d", x);
    printf("\nOuter Scope: %d", x);
    for(int i = 0; i < 3; i++){
        puts("");
        Local();
        staticLocal();
        Global();
    }
}
#include<stdio.h>
// Sum even Divisible by 4
int main(){
    int n; scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0 && arr[i] % 4 == 0)
            sum += arr[i];
    }
    printf("%d", sum);
}
//print Integers
#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    if(n < 0){
        for(int i = n; i <= -n; i++)
            printf("%d ", i);
        puts("");
    }
    else if(n >= 0){
        for(int i = n; i >= -n; i--)
            printf("%d ", i);
        puts("");
    }
}
//Calculate CGPA
#include<stdio.h>
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
    if (cgpa == 0) puts("Letter Grade: F");
    else if (cgpa <= 2.5) puts("Letter Grade: D");
    else if (cgpa <= 3) puts("Letter Grade: C");
    else if (cgpa <= 3.5) puts("Letter Grade: B");
    else if (cgpa <= 4) puts("Letter Grade: A");
}
//determine whether the factorial of a given number n results in an overflow or underflow 
#include<stdio.h>
int main(){
    long long n;
    while (scanf("%lld", &n) == 1){
        if (n < 0 && n % 2 == 0) puts("Underflow!");
        else if (n < 0 && n % 2 != 0) puts("Overflow!");
        else if (n == 0 || n <= 7) puts("Underflow!");
        else if (n == 8) puts("40320");
        else if (n == 9) puts("362880");
        else if (n == 10) puts("3628800");
        else if (n == 11) puts("39916800");
        else if (n == 12) puts("479001600");
        else if (n == 13) puts("6227020800");
        else if (n > 13) puts("Overflow!");
    }
}
#include<stdio.h>
// calculate the total number of cigarettes a person can smoke given
//an initial number of cigar and an exchange rate for cigar butts.
// The exchange rate specifies how many cigar butts are needed to get one new cigar.
int main(){
    int initCigar, exchangeVal, totalSmoke, buttLeft, totalBonus, remainButt;
    while(scanf("%d%d", &initCigar, &exchangeVal) == 2){
        totalSmoke = initCigar;
        totalBonus = 0;
        while(totalSmoke >= exchangeVal){
            buttLeft = totalSmoke / exchangeVal;
            remainButt = totalSmoke % exchangeVal;
            totalSmoke = buttLeft + remainButt;
            totalBonus += buttLeft;
        }
        printf("%d", initCigar + totalBonus);
    }
}
#include<stdio.h>
int main(){
    int init, trg;
    while(scanf("%d%d", &init, &trg) == 2){
        int sum = 0;
        int cur = init;
        while(sum < trg){
            sum += cur;
            if(sum >= trg) break;
            cur++;
        }
        printf("%d", cur);
    }
}
#include<stdio.h>
int main(){
    int num1, num2;
    while(scanf("%d%d", &num1, &num2) == 2){
        if(num1 == 0 && num2 == 0) break;
        int carrycnt = 0, carry = 0;
        while(num1 > 0 || num2 > 0){
            int dig1 = num1 % 10;
            int dig2 = num2 % 10;
            if(dig1 + dig2 + carry >= 10){
                carry = 1;
                carrycnt++;
            }
            else
                carry = 0;
            num1 /= 10; num2 /= 10;
        }
        if (carrycnt == 0)
            puts("No carry operation");
        else if (carrycnt == 1)
            puts("1 carry operation.");
        else
            printf("%d carry operations.\n", carrycnt);
    }
}
#include<stdio.h>
// calculate the radius of the largest circle that can fit inside a triangle
int main(){
    double a, b, c;
    while(scanf("%lf%lf%lf", &a, &b, &c) == 3){
        if(a <= 0 || b <= 0 || c <= 0)
            continue;
        double s = (a + b + c) / 2;
        double res = sqrt(((s - a) * (s - b) * (s - c)) / s);
        printf("The radius of the round table is: %.3lf\n", res);
    }
}
#include<stdio.h>
int main(){
    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;
        int cnt = 0;
        while(n >= 3){
            n -= 3;
            cnt++; n += 1;
        }
        (n == 2) ? printf("%d", cnt + 1) : printf("%d", cnt);
    }
}
#include<stdio.h>
int main(){
    char str[10], ch = 'a';
    for(int i = 0; i < 8; i++)
        str[i] = ch + 8 - i;
    str[i] = '\0';
    for(int i = 0; i < 8; i++)
        printf("%c ", str[i]);
}
#include<stdio.h>
int main(){
    int n, m; scanf("%d%d", &n, &m);
    if(n > m)
        m += 24;
    for(int i = n; i <= m; i++)
        printf("%d ", i % 24);
    puts("");
}
#include<stdio.h>
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
    puts("");
}
#include<stdio.h>
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
#include<stdio.h>
// There has N floors 1-st to N-th. Each floor has K rooms,1-st to K-th. both N and K are one-digit integers, and 
// the j-th room on the i-th floor has the room number i0j. sum of the room numbers of all rooms 
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
#include <stdio.h>
// calculate the missing corner of a rectangle when three of its corners are given. 
int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4, missingX, missingY;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) == 8){
        if (x1 == x2 && y1 == y2){
            missingX = x3 + x4 - x1;
            missingY = y3 + y4 - y1;
        }else if (x1 == x3 && y1 == y3){
            missingX = x2 + x4 - x1;
            missingY = y2 + y4 - y1;
        } else if (x1 == x4 && y1 == y4) {
            missingX = x2 + x3 - x1;
            missingY = y2 + y3 - y1;
        } else {
            missingX = x1 + x2 - x3;
            missingY = y1 + y2 - y3;
        }
        printf("%.3lf %.3lf\n", missingX, missingY);
    }
}
#include<stdio.h>
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
#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    char str[n];
    int b = 0, t = 0, a = 0, w = 0;
    for(int i = 0; i < n; i++)
        scanf("% c", &str[i]);
    for (int i = 0; i < n; i++){
        if (str[i] == 'B') b++;
        if (str[i] == 'W') w++;
        if (str[i] == 'A') a++;
        if (str[i] == 'T') t++;
    }
    if (b == 0 && w == 0 && a > 0 && t == 0)
        puts("ABANDONED");
    else if (b == 0 && t == 0)
        puts("WHITEWASH");
    else if (t == 0 && w == 0)
        puts("BANGLAWASH");
    else if (b > w)
        printf("BANGLADESH %d - %d\n", b, w);
    else if (w > b)
        printf("WWW %d - %d\n", w, b);
    else
        printf("DRAW %d %d\n", b, t);
}
#include <stdio.h>
int main() {
    int dnum;
    while (scanf("%d", &dnum) == 1) {
        int arr[64], l = 0, parity = 0;
        int num = dnum;
        // Convert to binary and calculate parity
        while (num > 0) {
            arr[l] = num % 2;
            if (arr[l] == 1)
                parity++;
            num /= 2;
            l++;
        }
        printf("The parity of ");
        if (l == 0)
            printf("0");
        else {
            for (int i = l - 1; i >= 0; i--) 
                printf("%d", arr[i]);
        }
        printf(" is %d (mod 2).\n", parity);
    }
}
#include<stdio.h>
int main(){
    int x, y; scanf("%d%d", &x, &y);
    for(int i = 1; i <= y; i++){
        if(i % x == 0)
            printf("%d ", i);
    }
    puts("");
    for(int i = 1; i <= x; i++){
        if(i % 2 != 0)
            printf("%d ", i);
    }
    puts("");
    for(int i = 2; i <= x; i++){
        if(i % 2 == 0)
            printf("%d ", i);
    }
    puts("");
    for(i = 2; i <= x; i++){
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            puts("prime")
        else
            puts("composite")
    }
}
#include <stdio.h>
int reverseNumber(int num){
    int rev = 0;
    while (num != 0){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
int main() {
    int t; scanf("%d", &t); 
    while(t--){
        int n; scanf("%d", &n);
        int cnt = 0;
        while (1) {
            int rev = reverseNumber(n);
            if (rev == n) break;
            n = n + rev; 
            cnt++;
        }
        printf("%d %d\n", cnt, n);
    }
}
#include<stdio.h>
//calculate and determine the number of moves required to go from one point (x1, y1) to another point (x2, y2)
int main(){
    int x1, x2, y1, y2, dx, dy;
    while(scanf("%d%d%d%d", &x1, &y1, &x2, &y2) == 4){
        if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0)
            break;
        dx = (x1 > x2) ? x1 - x2 : x2 - x1;
        dy = (y1 > y2) ? y1 - y2 : y2 - y1;
        if (dx == 0 && dy == 0)
            puts("0");
        else if (dx == dy || dx == 0 || dy == 0)
            puts("1");
        else
            puts("2");
    }
}
#include<stdio.h>
int main(){
    int a, b; scanf("%d%d", &a, &b);
    print("%d", a * b - 1);
    int s = a + b;
    int ret = (s * (s + 1) / 2) + a + 1;
    printf("%d", ret)
}
#include<stdio.h>
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
