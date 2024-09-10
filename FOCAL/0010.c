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
