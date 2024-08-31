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
