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
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int id, nameLen, size;
    char name[0];
};
struct student *create(struct student *std, int id, char arr[]){
    std = malloc(sizeof(*std) + sizeof(char) * strlen(arr));
    std -> id = id;
    std -> nameLen = strlen(arr);
    strcpy(std -> name, arr);
    std -> size = (sizeof(*std) + sizeof(char) * strlen(std -> name));
 
    return std;
}
void print(struct student *std){
    printf("id : %d\nName : %s\nName_Length: %d\nAllocated_Struct_size: %d\n\n",
    std -> id, std -> name, std -> nameLen, std -> size);
}
int main(){
    struct student *a, *b;
    a = create(a, 523, "Sanjayulsha");
    b = create(b, 535, "Cherry");
    print(a); print(b);
    printf("Size of Struct student: %lu\n",
           sizeof(struct student));
    printf("Size of Struct pointer: %lu", sizeof(a));
    return 0;
}
#include<stdio.h>
struct student{
    int id;
    char name[50], contact[20];
    char status[20], achive[79];
};
void Display(struct student std){
    printf("Name: %s\nId: %d\n", std.name, std.id);
    printf("Contact: %s\nStatus: %s\nAchive: %s\n", std.contact, std.status, std.achive);
}
int main(){
    int n, id, choice, flag = 0;
    char ch, username[30], password[50];
    struct student s[100];
    do{
        puts("Enter choice: "); 
        scanf("%d", &choice);
        puts("Enter Username: ");
        scanf("%s", username);
        puts("Enter Password: ");
        scanf("%s", password);
        switch(choice){
            case 1:
                if(strcmp(username, "Admin") == 0 && strcmp(password, "1234") == 0){
                    puts("Enter student number: ");
                    scanf("%d", &n);
                    for(int i = 0; i < n; i++){
                        printf("Enter the name of %dth student: ", i + 1); 
                        scanf("%s", s[i].name);
                        printf("Enter the contact of %dth student: ", i + 1);       
                        scanf("%s", s[i].contact);
                        printf("Enter the status of %dth student: ", i + 1); 
                        scanf("%s", s[i].status);
                        printf("Enter the achive of %dth student: ", i + 1); 
                        scanf("%s", s[i].achive);
                        s[i].id = 10012 + i;
                    }
                    printf("Enter id for Display: "); 
                    scanf("%d", &id);
                    flag = 0;
                    for(int i = 0; i < n; i++){
                        if(id == s[i].id){
                            Display(s[i]);
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 0)
                        puts("No student found with that id");
                }
                else flag = 2;
                break;
            case 2:
                if(strcmp(username, "Student") == 0 && strcmp(password, "2345") == 0){
                    printf("Enter id for Display: ");
                    scanf("%d", &id);
                    for(int i = 0; i < n; i++){
                        if(id == s[i].id){
                            Display(s[i]);
                            flag = 1; 
                            break;
                        }
                    }
                    if(flag == 0)
                        puts("No student found with that ID");
                        
                }
                else flag = 2;
                break;
            default:
                puts("Invalid Choice");
                break;
        }
        if(flag == 0)
                puts("Sortage of Info");
        else if(flag == 2)
            puts("please Enter valid username & password");
        printf("Enter 1 for continue: ");
        scanf("%d", &ch);
    } while(ch == 1);
}
#include<stdio.h>
struct student{
    int id;
    char name[50], achive[79]
    char contact[20], status[20];
};
void Display(struct student std){
    printf("Name: %s\nId: %d\n", std.name, std.id);
    printf("Contact: %s\nStatus: %s\nAchive: %s\n", std.contact, std.status, std.achive);
}
int main(){
    int n; scanf("%d", &n);
    struct student s[n];
    for(int i = 0; i < n; i++){
        printf("Enter the name of %dth student: ", i + 1); 
        scanf("%s", s[i].name);
        printf("Enter the contact of %dth student: ", i + 1); 
        scanf("%s", s[i].contact);
        printf("Enter the status of %dth student: ", i + 1); 
        scanf("%s", s[i].status);
        printf("Enter the achive of %dth student: ", i + 1);
        scanf("%s", s[i].achive);
        s[i].id = 10012 + i;
    }
    int id; scanf("%d", &id);
    for(int i = 0; i < n; i++){
        if(id == s[i].id){
            Display(s[i]);
            break;
        }
    }
}
