/***/
typedef struct person{
    int age; char name[50]; float salary;
}trv;
int main(){
    trv x;
    strcpy(x.name, "mollavai");
    x.age = 24; x.salary = 698.78;
    printf("Name : %s\nAge : %d\nsalary : %0.2f",x.name, x.age, x.salary);
}
