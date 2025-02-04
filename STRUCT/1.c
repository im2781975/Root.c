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
struct people{
    float weight; int age;
};
int main(){
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
struct name{
    char str[20];
};
int main(){
    struct name p, q; strcpy(p.str, "ibrahim");
    p = q;
    p.str[0] = 'x';
    printf("%s", q.str);
}
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
struct people{
    char name[50];
    int age, roll;
    float weight;
};
int main(){
    struct people x, q;
    scanf("%s %d %d %f", &x.name, &x.age, &x.roll, &x.weight);
    struct people p = {"molla", 12, 24, 75.6};
    strcpy(q.name, "Hasan");
    q.age = 22;
    q.roll = 22; 
    q.weight = 56.80;
    struct people z = {.name = "hamid", .roll = 21, .age = 27, .weight = 72.5};
    printf("%s %d %d %f\n", q.name, q.age, q.roll, q.weight);
    printf("%s %d %d %f\n",p.name,p.age,p.roll,p.weight);
    printf("%s %d %d %f\n",z.name,z.age,z.roll,z.weight);
    printf("%s %d %d %f",x.name,x.age,x.roll,x.weight);
}
