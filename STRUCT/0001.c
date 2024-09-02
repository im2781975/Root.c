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
/***/
struct Complex{
    int real; float img;
};
struct num{
    struct Complex comp; int integer;
}Acc;
int main(){
    Acc.comp.real = 25;
    Acc.comp.img = 3.789;
    Acc.integer = 67;
    printf("Imaginary part: %0.3f\nReal part: %d\nInteger  part: %d", Acc.comp.img, Acc.comp.real, Acc.integer);
}
