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
#include<stdio.h>
struct person{
    int age; float weight; char name[30];
};
int main(){
    int n; scanf("%d", &n);
    struct person *ptr;
    ptr = (struct person *) malloc(n * sizeof(struct person));
    puts("Enter name & age respectively:");
    for(int i = 0; i < n; i++)
        scanf("%s%d", &(ptr + i) ->name, &(ptr + i) ->age);
    for(int i = 0; i < n; i++)
        printf("name: %s\tAge: %d\n", (ptr + i) ->name, (ptr + i) ->age);
}
#include<stdio.h>
struct people{
    float weight; int age;
};
int main(){
    struct people std[10];
    std[0].weight = 77.8;
    std[0].age = 23;
    for(int i = 1; i < 4; i++){
        std[i].age = 11 + i;
        std[i].weight = 72.5 + i * 2;
    }
    for(int i = 0; i < 4; i++)
       printf("%d %lf\n", std[i].age, std[i].weight);
}
#include<stdio.h>
//centroid
struct point{
    float x, y;
};
struct triangle{
    struct point a, b, c;
};
struct point centroid(struct triangle t){
    struct point res;
    res.x = (t.a.x + t.b.x + t.c.x) / 3;
    res.y = (t.a.y + t.b.y + t.c.y) / 3;
    return res;
};
int main(){
    struct point p = {1, 1};
    struct point q = {5, 5};
    struct point s = {5, 5};
    struct triangle t = {p, q, s};
    struct point r = centroid(t);
    printf("%0.2f %0.2f\n", r.x, r.y);
    puts("Enter points: ");
    struct point m, n, o;
    scanf("%f %f", &m.x, &m.y);
    scanf("%f %f", &n.x, &n.y);
    scanf("%f %f", &o.x, &o.y);
    struct triangle tri = {m, n, o};
    struct point red = centroid(tri);
    printf("%0.2f %0.2f", red.x, red.y);
    return 0;
}
#include<stdio.h>
//complex
struct complex{
    double real, img;
};
void print(struct complex c){
    printf("%.1lf + %.1lfi\n", c.real, c.img);
}
struct complex add(struct complex a, struct complex b){
    struct complex res;
    res.real = a.real + b.real;
    res.img = a.img + b.img;
    return res;
}
struct complex mult(struct complex a, struct complex b){
    struct complex res;
    res.real = a.real * b.real - a.img * b.img;
    res.img = a.real * b.img + b.real * a.img;
    return res;
}
int main(){
    struct complex c1 = {5.9, 3.1};
    struct complex c2 = {-2.5, 3.7};
    print(add(c1,c2));
    print(mult(c1,c2));
    return 0;
}
#include<stdio.h>
//distance
struct point{
    int x, y;
};
double distance(struct point p, struct point q){
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}
int manhat(struct point p, struct point q){
    return(abs(p.x - q.x) + abs(p.y + q.y));
}
int main(){
    struct point p,q;
    scanf("%d%d", &p.x, &p.y);
    scanf("%d%d", &q.x, &q.y);
    printf("%lf\n", distance(p, q));
    printf("%d", manhat(p, q));
}
#include<stdio.h>
struct people{
    float weight; int age;
};
int main(){
    struct people p = {.weight = 63.4, .age = 23};
    struct people q = {.weight = 47.2, .age = 23};
    struct people* ptr = &p;
    printf("%p %p\n", ptr, &q);
    printf("%f %d\n", ptr-> weight, ptr-> age);
}
#include<stdio.h>
struct people{
    float weight; int age;
};
int main(){
    struct people p = {.weight = 63.4, .age = 23};
    struct people q = {.weight = 47.2, .age = 23};
    struct people* ptr = &p;
    printf("%p %p\n", ptr, &q);
    printf("%f %d\n", ptr-> weight, ptr-> age);
    /**/
    struct people std[10];
    for(int i = 0; i < 3; i++){
        scanf("%f", &std[i].weight);
        scanf("%d", &std[i].age);
    }
    double sum=0;
    for(int i = 0; i < 3; i++){
        if(std[i].age % 2 == 0)
            sum += std[i].weight;
    }
    printf("%-5s %10s %10s\n", "Index", "Weight", "Age");
    for(int i = 0; i < 3; i++)
        printf("%-5d %10.2f %10d\n", i, std[i].weight, std[i].age);
    printf("sum of weight is: %.2f",sum);
}
#include<stdio.h>
struct person{
    int age; float salary;
};
void display(struct person p){
    printf("%d%15.2f\n", p.age, p.salary);
}
int main(){
    struct person a, b;
    printf("%-5s %10s\n", "Age", "salary");
    a.age=30; a.salary=28000;
    display(a);
    b.age=35; b.salary=50000;
    display(b);
}
#include<stdio.h>
struct student {
    char name[50], email[50], date[20];
    float marks;
};
struct student heroes[3];
void display() {
    printf("%-6s %-6s %-6s %-7s %5s\n", "Index", "Name", "Email", "Date", "Marks");
    for (int i = 0; i < 3; i++) {
        printf("%-6d %-6s %-6s %-8.2s %5.2f\n",
               i + 1, heroes[i].name, heroes[i].email, heroes[i].date, heroes[i].marks * 0.9); 
    }
}
int main() {
    for (int i = 0; i < 1; i++) {
        printf("Enter information for hero %d:\n", i + 1);
        printf("Enter name: ");
        fgets(heroes[i].name, sizeof(heroes[i].name), stdin);
        heroes[i].name[strcspn(heroes[i].name, "\n")] = '\0';  
        // Remove newline
        printf("Enter email: ");
        fgets(heroes[i].email, sizeof(heroes[i].email), stdin);
        heroes[i].email[strcspn(heroes[i].email, "\n")] = '\0';
        printf("Enter date: ");
        fgets(heroes[i].date, sizeof(heroes[i].date), stdin);
        heroes[i].date[strcspn(heroes[i].date, "\n")] = '\0';
        printf("Enter marks: ");
        while (scanf("%f", &heroes[i].marks) != 1) {  
            printf("Invalid input. Enter numeric value for marks: ");
            while (getchar() != '\n'); 
        }
        getchar();  
    }
    display();
}
#include<stdio.h>
struct name{
    char str[20];
};
int main(){
    struct name p, q; strcpy(p.str, "ibrahim");
    p = q; p.str[0] = 'x';
    printf("%s", q.str);
}
#include<stdio.h>
struct student {
   char name[20]; int roll; float marks;
};
int main(){
   struct Student std;
   puts("Enter info respectively(name, roll, marks): ");
   gets(std.name);
   scanf("%d%f", &std.roll, &std.marks);
   
   printf("Displaying information: \nName: %s\nRoll number: %d\nMarks: %.0f\n", std.name, std.roll, std.marks);
   return 0;
}
#include<stdio.h>
struct people{
    char name[50];
    int age, roll; float weight;
};
int main(){
    struct people x, q;
    scanf("%s %d %d %f", &x.name, &x.age, &x.roll, &x.weight);
    struct people p = {"molla", 12, 24, 75.6};
    strcpy(q.name, "Hasan");
    q.age = 22; q.roll = 22; q.weight = 56.80;
    struct people z = {.name = "hamid", .roll = 21, .age = 27, .weight = 72.5};
    printf("%s %d %d %f\n", q.name, q.age, q.roll, q.weight);
    printf("%s %d %d %f\n", p.name, p.age, p.roll, p.weight);
    printf("%s %d %d %f\n", z.name, z.age, z.roll, z.weight);
    printf("%s %d %d %f", x.name, x.age, x.roll, x.weight);
}
