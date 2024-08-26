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
