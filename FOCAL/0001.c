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
