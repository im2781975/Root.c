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
