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
        if(y-- >= 5)
            puts("*");
        else{
            puts("+");
            puts("#");
        }
    }
    if(++x >= 5){
        if(y-- >= 5)
            puts("*");
        else
            puts("+");
        puts("#");
    }
}
