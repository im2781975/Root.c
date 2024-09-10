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
/***/
struct Employe{
    int id, scores[12];
    char name[80];
    float salary;
};
__main(){
    printf("Enter Employes number: ");
    int num; scanf("%d", &num);
    struct Employe emp[num];
    for(int i = 0; i < num; i++){
        printf("Enter the Detail for %d Employe: ", i + 1);
        printf("\nId: "); scanf("%d", &emp[i].id);
        puts("Name: "); scanf("%s", &emp[i].name);
        
        puts("Salary: "); scanf("%f", &emp[i].salary);
        puts("Enter Last 12 month: ");
        for(int j = 0; j < 12; i++){
            printf("Month %d: ", j + 1);
            scanf("%d", &emp[i].scores[j]);
        }
    }
    for(int i = 0; i < num; i++){
        float avgScore = 0;
        for(int j = 0; j < 12; j++)
            avgScore += emp[i].scores[j];
        avgScore /= 12;
        (avgScore >= 80)?printf("Employe with id = %d is elegibile for Increament", emp[i].id):
        printf("Employe with id = %d isn't elegibile for Increament", emp[i].id);
    }
}
/***/
// Structure of type student
struct student {
    int stud_id;
    int name_len;
    int struct_size;
    char stud_name[0];
    // variable length array must be last.
};
// Memory allocation and initialisation of structure
struct student* createStudent(struct student* s, int id,
                              char a[]){
    s = malloc(sizeof(*s) + sizeof(char) * strlen(a));
    s->stud_id = id;
    s->name_len = strlen(a);
    strcpy(s->stud_name, a);
 
    s->struct_size
        = (sizeof(*s)
           + sizeof(char) * strlen(s->stud_name));
 
    return s;
}
void printStudent(struct student* s)
{
    printf("Student_id : %d\n"
           "Stud_Name : %s\n"
           "Name_Length: %d\n"
           "Allocated_Struct_size: %d\n\n",
           s->stud_id, s->stud_name, s->name_len,
           s->struct_size);
    // Value of Allocated_Struct_size here is in bytes.
}
int main()
{
    struct student *s1, *s2;
    s1 = createStudent(s1, 523, "Sanjayulsha");
    s2 = createStudent(s2, 535, "Cherry");
    printStudent(s1);
    printStudent(s2);
    printf("Size of Struct student: %lu\n",
           sizeof(struct student));
    printf("Size of Struct pointer: %lu", sizeof(s1));
    return 0;
}
