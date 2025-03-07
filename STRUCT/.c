#include<stdio.h>
#include<string.h>
typedef struct person {
    int age; float salary;
    char name[50];
} son;
int main(){
    son std;
    strcpy(std.name, "molla");
    std.age = 24; std.salary = 456.78;
    printf("%s\t%d\t%0.2f\n", std.name, std.age, std.salary);
} 
#include<stdio.h>
struct Complex{
    int real; float img;
};
struct num{
    struct Complex comp; int teger;
} ber;
int main(){
    ber.comp.real = 24;
    ber.comp.img = 3.768;
    ber.teger = 12;
    printf("%0.3f\t%d\t%d\n", ber.comp.img, ber.comp.real, ber.teger);
}
#include<stdio.h>
struct employee {
    int id, score[12];
    char name[20];
    float salary;
};
int main(){
    int num; scanf("%d", &num);
    struct employee emp[num];
    for(int i = 0; i < num; i++){
        printf("Enter the Detail(Id, name, salary) for %d Employee: ", i + 1);
        scanf("%d%s%f", &emp[i].id, &emp[i].name, &emp[i].salary);
        puts("Enter Last 12 month: ");
        for(int j = 0; j < 12; j++){
            printf("Month %d: ", j + 1);
            scanf("%d", &emp[i].score[j]);
        }
    }
    for(int i = 0; i < num; i++){
        float avg = 0;
        for(int j = 0; j < 12; j++)
            avg += emp[i].score[j];
        avg /= 12;
        (avg >= 80) ? printf("Employe with id = %d is elegibile for Increament", emp[i].id) :
        printf("Employe with id = %d isn't elegibile for Increament", emp[i].id);
    }
}


