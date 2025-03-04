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
#include<stdlib.h>
#include<time.h>
//Dice Game
enum status {Continue, Won, Lost};
int rollDice(void){
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    printf("%d + %d = %d\n", die1,  die2, die1 + die2);
    return die1 + die2;
}
int main(){
    srand(time(NULL));
    int point; enum status game;
    int sum = rollDice();
    switch(sum){
        case 7:
        case 11:
            game = Won;
            break;
        case 2:
        case 3:
        case 12:
            game = Lost;
            break;
        default:
            game = Continue;
            point = sum;
            printf("Point is: %d\n", point);
            break;
    }
    while(game == Continue){
        sum == rollDice();
        if(sum == point) game = Won;
        else if(sum == 7) game = Lost;
    }
    (game == Won) ? puts("Player won!") : puts("Player lost.\n");
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Dice Game
enum status {Continue, Won, Lost};
int rollDice(void){
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    printf("%d + %d = %d\n", die1,  die2, die1 + die2);
    return die1 + die2;
}
void chatter(void){
    int select = 1 + rand() % 6;
    switch(select){
        case 1: puts("Going for broke!"); break;
        case 2: puts("Take a chance!"); break;
        case 3: puts("Break the bank!"); break;
        case 4: puts("You're up big. Time to cash in!"); break;
        case 5: puts("Way to be lucky! The dice must be loaded!"); break;
        case 6: puts("Bet it all!"); break;
        default : break;
    }
}
enum status craps(void){
    int point;
    enum status game;
    int sum = rollDice();
    switch (sum){
        case 7:
        case 11:
            game = Won;
            chatter();
            return Won;
        case 2:
        case 3:
        case 12:
            game = Lost;
            chatter();
            return Lost;
        default:
            game = Continue;
            point = sum;
            printf("Point is: %d\n", point);
            break;
    }
    while (game == Continue){
        chatter();
        sum = rollDice();
        if (sum == point) game = Won;
        else if (sum == 7) game = Lost;
    }
    if (game == Won){
        puts("Player won!");
        return Won;
    }else{
        puts("Player lost.");
        return Lost;
    }
}
int main(void){
    srand(time(NULL));
    int BankBalance = 1000;
    printf("Your balance is: %d\n", BankBalance);
    int wager;
    do{
        printf("Enter wager: ");
        scanf("%d", &wager);
        if (wager <= 0 || wager > BankBalance) {
            puts("Please enter a valid amount within your balance.");
        }
    } while (wager <= 0 || wager > BankBalance);
    enum status res = craps();
    if (res == Lost) {
        BankBalance -= wager;
        printf("Your new balance is: %d\n", BankBalance);
        if (BankBalance == 0)
            printf("You are busted. Thanks for playing!\n");
    }else {
        BankBalance += wager;
        printf("Your new balance is: %d\n", BankBalance);
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
    double r, v; scanf("%lf%lf", &r, &v);
    double ans = (3.1416 / 2 * r/ v);
    printf("%lf", ans);
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
int main(){
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
            printf("Area of square is: ", x  * x );
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
    if(!((i > 4) || (j <= 6)) == (! (i > 4) && !(j <= 6))
        puts("Equivalent");
    else
        puts("Not Equivalent");
    puts("(!(i > 4) && !(j <= 6))");
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
#include<stdio.h>
int main(){
    int pass = 0, fail = 0, std = 1, res;
    while(std <= 10){
        puts("Enter result(1 == pass || 2 == fail) ");
        scanf("%d", &res);
        if(res == 1) pass++;
        else if(res == 2) fail++;
        std++;
    }
    printf("passed student are: %d\nFailed student are: %d", pass, fail);
    if(pass > 8) puts("Bonus To Instruct");
}
#include<stdio.h>
int main(){
    int grade; puts("Enter Grade: ");
    scanf("%d", &grade);
    (grade >= 18)?puts("pass"):puts("fail");
    if(grade >= 27) puts("A");
    else if(grade >= 24) puts("B");
    else if(grade >= 21) puts("C");
    else if(grade >= 18) puts("D");
    else
        puts("Fail\nMust Take course again");
}
#include<stdio.h>
int main(){
    int grade, total = 0, avg, cnt = 1;
    while(cnt <= 10){
        printf("Enter Grade: ");
        scanf("%d", &grade);
        total += grade; cnt++;
    }
    avg = total / 10;
    printf("Average is: %d", avg);
}
#include<stdio.h>
int main(){
    int cnt = 0, grade, total = 0, avg;
    // float avg;
    puts("Enter grade(-1 for exit): ");
    scanf("%d", &grade);
    while(grade != -1){
        total += grade;
        cnt++;
        puts("Enter Grade(-1 for exit): ");
        scanf("%d", &grade);
    }
    if(cnt != 0){
        // avg = (float)total/ cnt;
        avg = total / cnt;
        printf("Average is: %f", avg);
    }
    else
        printf("No Average found");
}
#include<stdio.h>
#include<math.h>
//Deposite
int main(){
    double amount, capital = 1000.0, rate = 0.05;
    printf("%4s%21s\n", "Year", "Deposite");
    for(int i = 1; i <= 10; i++){
        amount = capital * pow(1.0 + rate,  i);
        printf("%4u%21.2f\n", i, amount);
    }
    //Deposite
    double principle = 1000.0; rate = 0.05;
    puts(" Year\t\tamount");
    for(unsigned int year = 1; year <= 10; ++year){
        double amount = principle * pow(1.0 + rate, year);
        printf("%4u%15.2f\n", year, amount);
    }
}
#include<stdio.h>
//calculate current bill
int main(){
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
#include<stdio.h>
//Twin Prime
bool Divisor(int x){
    for(int i = 2; i <= x; i++){
        if(x % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n; scanf("%d", &n);
    int x = n + 2, y = n - 2;
    if(Divisor(x) == 1) printf("%d", x);
    else if(Divisor(y) == 1) printf("%d", y);
    else puts("No");
}
#include<stdio.h>
int main(){
    int a, b; scanf("%d%d", &a, &b);
    int flag = 0;
    for(int i = 2; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            flag = 1;
            break;
        }
    }
    (flag == 1) ? puts("No") : puts("Yes");
    /**/
    int x = a, y = b;
    while(y != 0){
        int tmp = y; y = x % y; x = tmp;
    }
    (x == 1) ? printf("%d & %d are coprime", a, b): printf("%d & %d aren't coprime");
}
#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i * (i + 1);
            printf("i: %d\ti + 1: %d\tsum: %d\n", i, i + 1, sum);
        }
    }
    int a = sqrt(n), b = a * a;
    (b == n) ? puts("Yes") : puts("No");
}
#include<stdio.h>
#define SIZE 10
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
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
    int x, y;
    while(scanf("%d%d", &x, &y) == 2){
        int sum = 0;
        if(x > y){
            int tmp = x; x = y; y = tmp;
        }
        for(int i = x; i <= y; i++){
            int res = 1;
            while(j != 1){
                if(j % 2 == 0) j /= 2;
                else j = 3 * j + 1;
                res++;
            }
            if(res > sum) sum = res;
        }
    }
    printf("%d", sum);
}
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c; scanf("%d%d%d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0) break;
        else if(a * a == b * b + c * c || b * b == a * a + c * c || c * c = a * a + b * b) puts("right");
        else puts("wrong");
    }
}
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
    int n;
    while(scanf("%d", &n) == 1){
        for(int i = 0; i < n; i++){
            int e, f, c; scanf("%d%d%d", &e, &f, &c);
            int totalBottle = e + f;
            int newDrink = 0;
            while(totalBottle >= c){
                int exchanged = totalBottle / c; 
                newDrink += exchanged;
                totalBottle = exchanged + (totalBottle % c);   
            }
            printf("%d", newDrink);
        }
    }
}
#include <stdio.h>
int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        if (n == 0) { 
            printf("0 Parity is 0\n");
            continue;
        }
        int arr[32], index = 0, parity = 0, num = n;
        while (num > 0) {
            arr[index] = num % 2;  
            if (arr[index] == 1)
                parity++;  
            num /= 2;
            index++;
        }
        for (int i = index - 1; i >= 0; i--)
            printf("%d", arr[i]);
        printf(" Parity is %d\n", parity);
    }
}
#include <stdio.h>
int main() {
    int n, i, arr[100];
    while (scanf("%d", &n) == 1) {
        if (n == 0)
            break;
        int cnt = 0, index = 0;
        int temp = n;
        while (temp > 0) {
            int mod = temp % 2;
            if (mod == 1)
                cnt++;  
            arr[index++] = mod;  
            temp /= 2;
        }
        printf("Parity of ");
        for (int j = index - 1; j >= 0; j--) 
            printf("%d", arr[j]);
        printf(" is %d (mod 2).\n", cnt);
        printf("%d\n", (3 + sqrt(9 + 8 * n))/2);
        int x = (n * 10) / 9;
        if(n % 9 == 0) printf("%d %d", x - 1, x);
        else printf("%d", x);
    }
}
#include<stdio.h>
int main(){
    int a, b; scanf("%d%d", &a, &b);
    int sum = 0;
    for(int i = a; i <= b; i++){
        if(i % 2 != 0) sum += i;
        printf("%d", sum);
    }
}
#include<stdio.h>
int main(){
    int a, b, c, d;
    while(cin >> a >> b >> c >> d){
        if(!a && !b && !c && !d) break;
        int ans = 1080;
        if(a < b) ans += (40 + a - b) * 9;
        else ans += (a - b) * 9;
        if(b > c) ans += (40 + c - b) * 9;
        else ans += (c - b) * 9;
        if(c < d) ans += (40 + c - d) * 9;
        else ans += (c - d) * 9;
        printf("%d", ans);
    }
}
#include <stdio.h>
int main() {
    int n, k = 1;
    while (scanf("%d", &n) == 1 && n >= 0) {
        for (int i = 0; i < 14; i++) {
            if (n <= (1 << i)){
                printf("Case %d: %d\n", k, i);
                break;
            }
        }
        k++;
    }
    double a; scanf("%lf", &a);
    double b = (- 1 + sqrt(1 + (8 * a)))/2;
    long long int n = (long long)(b);
    printf("%lld", n);
}
#include<stdio.h>
int main(){
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
        /**/
        int odd = n * (n + 1)/2;
        printf("%d", (3 * odd) - 6);
    }
}
#include<stdio.h>
// standard Deviation
int main(){
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
#include<stdio.h>
//swap
int main(){
    int x, y; scanf("%d%d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d", x, y);
}
#include<stdio.h>
int main(){
    int x = 'A';
    start:
        printf("%c = %d\n", x, x);
        x++;
        goto start;
}
#include<stdio.h>
//prime
int main(){
    int n, i; scanf("%d", &n);
    for(i = 2; i < n; i++){
        if(n % i == 0){
            printf("%d isn't prime", n);
            break;
        }
    }
    if(i == n)
        printf("%d is prime", n);
    /**/
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
    // prime word
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
#include<stdio.h>
//Quadric equation
int main(){
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
#include<stdio.h>
//Armstrong number
int main(){
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
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int c, p; scanf("%d%d", &c, &p);
        if(c == 1) printf("%d", p);
        else if(c > 1) printf("%d\n", (c * p) - (c - 1) * 2);
    }
}
#include<stdio.h>
int main(){
    float fahrenheit, celcius;
    int extra = 0111; char ch = '.';
    scanf("%f", &fahrenheit);
    celcius = ((fahrenheit -32)*5)/9;
    printf("Temparature in celcius is: %f%c%d", celcius, ch, extra);
}
#include<stdio.h>
int main(){
    int mark; scanf("%d", &mark);
    char grade[20];
    int idx = mark / 10;
    switch(idx){
        case 10:
        case 9:
        case 8: strcpy(grade, "Honours"); break;
        case 7:
        case 6: strcpy(grade, "First Div"); break;
        case 5: strcpy(grade, "Second Div"); break;
        case 4: strcpy(grade, "Third Div"); break;
        default: strcpy(grade, "Fail"); break;
    }
    printf("%s", grade);
}
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    int maxi = 0, mini = 100;
    while(n--){
        int val; scanf("%d", &val);
        (val > maxi) ? maxi == val : mini == val;
    }
    printf("%d", 2 * (maxi - mini));
}
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    long long ans = (long long)n * (n - 1);
    if(ans % 4 == 0)
        printf("%lld", ans / 4);
    else
        printf("%lld", ans / 2);
}
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    //Sequential
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 1; j--){
            if(i > n - j + 1) printf("_");
            else printf("%d", j);
        }
        for(int j = 1; j <= n; j++){
            if(j >= n - i + 2) printf(" ");
            else printf("%d", j);
        }
        puts("");
    }
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 1; j--){
            if(i >= j) printf("%d", j);
            else printf("_");
        }
        for(int j = 1; j <= n; j++){
            if(i >= j) printf("%d", j);
            else printf(" ");
        }
        puts("");
    }
}
#include<stdio.h>
//print M
int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // if(j <= i || j >= n - 1 - i) printf("*");
            // else printf(" ");
            //if((j == 0 || j == n - 1) || (i % 2 != 0 && j % 2 != 0 && i <= n/2) || (i % 2 == 0 && j % 2 == 0 && i <= n/2 && i != 0)) printf("*");
            //else printf(" ");
            if((j == 0 || j == n - 1) || (i == j || j == n - 1 - i) && i < n/2 ) printf("*");
            else printf(" ");
        }
        puts("");
    }
}
#include<stdio.h>
//ROMBUS
int main(){
    int n; scanf("%d", &n);
    //Rombus
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n; j++){
            if(j <= n - 2 - i || j >= 2*n - i) printf(" ");
            else printf("*");
        }
        puts("");
    }
    //Square
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1) printf("*");
            else printf(" ");
        }
        puts("");
    }
    //Pattern
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1) printf("%d ", i);
            else if(j == n) printf("%d ", n - i);
            else if(i == 1 || i == n) printf("+");
            else if(i == (n/2) + 1 && j == (n/2) + 1) printf("*");
            else printf(" ");
        }
        puts("");
    }
}
#include<stdio.h>
int main(){
    int i = 0;
    while(i != 10){
        printf("%d ", i); i++;
    }
    puts("");
    do{
        printf("%d ", i); i++;
    }while(i != 20);
    puts("");
    for(; i < 30; i++)
        printf("%d ", i);
    puts("");
    int cnt = 1;
    do{
        printf("%d ", cnt);
    }while(++cnt <= 10);
}
#include<stdio.h>
int x = 12;
void add(){
    x = 34;
    printf("\nEnter values: ");
    int a, b; scanf("%d%d", &a, &b);
    int sum = a + b; printf("%d ", sum);
    printf("%d ", x); x += 2;
    printf("%d ", x);
}
int main(){
    int x = 5;
    printf("%d ", x);
    add();
    printf("%d ", x);
}
#include<stdio.h>
int IsPrime(int n){
    if(n < 2) return 0;
    else{
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return 0;
        }
        return 1;
    }
}
int main(){
    int n; scanf("%d", &n);
    int CntPrime = 0, cur = 2;
    int needPrime = (n * (n + 1))/2;
    int prime[needPrime];
    while(CntPrime < needPrime){
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
#include<stdio.h>
int main(){
    int stud; scanf("%d", &stud);
    float Attendence, Assingment, CT, Mid, Final;
    float MidConvMark, FinalConvMark, TotalMark;
    for(int i = 0; i < stud; i++){
        puts("Attendence: "); scanf("%f", &Attendence);
        puts("Assingment: ");  scanf("%f", &Assingment);
        puts("ClassTest: "); scanf("%f", &CT);
        puts("Mid(Out Of 50): "); scanf("%f", &Mid);
        puts("Final(Out Of 100): "); scanf("%f", &Final);
        MidConvMark = (Mid * 30)/50;
        FinalConvMark = (Final * 40)/100;
        TotalMark = Attendence + Assingment + CT + MidConvMark + FinalConvMark;
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
#include<stdio.h>
int main(){
    //Diamond
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        puts('');
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        puts('');
    }
}
int main(){
    int n; scanf("%d", &n);
    //FloyadsTriangle
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d ", ++cnt);
        puts("");
    }
    //pyramid
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2 * i - 1; j++){
            (i % 2 == 0)? printf("*") : printf("-");
        }
        puts("");
    }
}
int main(){
    int n; scanf("%d", &n);
    //Triangle
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++)
            printf("*");
        puts("");
    }
    /**/
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        puts("");
    }
    /**/
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("*");
        puts("");
    }
}
int main(){
    int n; scanf("%d", &n);
    //pyramid
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("10");
        puts("");
    }
    for(int i = n - 1; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            printf("10");
        puts('');
    }
}
int main(){
    int n; scanf("%d", &n);
    //pyramid
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("*");
        puts("");
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("*");
        puts("");
    }
}
int main(){
    int n; scanf("%d", &n);
    //pyramid
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n) printf("*");
            else printf(" ");
        }
        puts("");
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i == n || j == 1) printf("*");
            else printf(" ");
        }
        puts("");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = n; i >= 0; i--){
        for(int j = i; j >= 0; j--)
            printf("*");
        puts('');
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++)
            printf("*");
        puts("");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        for(int j = i - 1; j >= 1; j--)
            printf("%d", j);
        puts('');
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        for(int j = i - 1; j >= 1; j--)
            printf("%d", j);
        puts("");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i + j == n + 1) printf("*");
            else printf(" ");
        }
        puts("");
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i == n || j == 1) printf("*");
            else printf(" ");
        }
        puts("");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", j);
            //printf("%d", n - i + 1);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = i; j <= n; j++)
            printf("%d", i);
        puts("");
    }
    /**/
    for(int i = n; i >= 1; i--){
        for(int j = n; j > i; j--)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        puts("");
    }
    /**/
    for(int i = n; i >= 1; i--){
        for(int j = i; j < n; j++)
            printf(" ");
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++)
            printf(" ");
        for(int j = i; j >= 1; j--)
            printf("%d ", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = 1; j <= n - i + 1; j++)
            printf("%d ", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", n - i + 1);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = 1; j <= n - i + 1; j++)
            printf("%d", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n - i; j++)
            printf(" ");
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        puts("");
    }
    /**/
    for(int i = n; i >= 1; i--){
        for(int j = i; j <= n - i; j++)
            printf(" ");
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        puts("");
    }
    /**/
    for(int i = n; i >= 1; i--){
        for(int j = n; j > i; j--)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = i; j <= n; j++)
            printf("%d", i);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d", n - i + 1);
        puts("");
    }
}
int main(){
    int n; scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--)
            printf("%d ", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++)
            printf("%d ", i);
        puts("");
    }
    /**/
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n - i + 1; j++)
            printf("%d ", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d", n - i + 1);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++)
            printf("%d", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        puts("");
    }
    /**/
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++)
            printf("%d", i);
        puts('');
    }
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--)
            printf("%d", j);
        puts("");
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        puts("");
    }
}
#include<stdio.h>
//Is Triangle is valid
int main(){
    float x1, x2, x3, y1, y2, y3;
    puts("Enter values: "); 
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    float b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    float c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    if(a + b > c && b + c > a && c + a > b){
        if(a == b == c) puts("Equilateral");
        else if((a == b) || (b == c) || (c == a)) puts("Isosceles");
        else puts("Scalen");
        if(a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) puts("RightTriangle");
        else if(a * a + b * b > c * c || b * b + c * c > a * a || c * c + a * a > b * b) puts("Acute Triangle");
        else puts("Obtuse Triangle");
    }
    else puts("Invalid");
}
#include<stdio.h>
int PrintSum(int init, int n, int *arr){
    if(init == n)
        return 0;
    return arr[init] + PrintSum(init + 1, n, arr);
}
int arrSum(int n, int *arr){
    if(n == 0)
        return 0; 
    return arr[0] + arrSum(n - 1, arr + 1);
}
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
int DigitSum(int i, int n, int *arr){
    if(i > n)
        return 0;
    int LastDigit = arr[i] % 10;
    return LastDigit + DigitSum(i + 1, n, arr);
}
void prints(int i, int n){
    if(i > n)
        return;
    printf("%d ", i);
    print(i + 1, n);
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", PrintSum(0, n, arr));
    printf("%d", arrSum(n, arr));
    print(1, n);
    prints(1, n);
    printf("%d", printSum(1, n));
    printf("%d", DigitSum(0, n, arr));
}
