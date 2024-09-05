struct student{
    int id;
    char name[50], contact[20], status[20], achive[79];
};
void Display(struct student s){
    printf("Name: %s\nId: %d\n", s.name, s.id);
    printf("Contact: %s\nStatus: %s\nAchive: %s\n", s.contact, s.status, s.achive);
}
int main(){
    int n, id, choice, flag = 0;
    char ch, username[30], password[50];
    struct student s[100];
    do{
        printf("Enter choice: "); scanf("%d", &choice);
        printf("\nEnter Username: "); scanf("%s", username);
        printf("\nEnter Password: "); scanf("%s", password);
        switch(choice){
            case 1:
                 if(strcmp(username, "Admin") == 0 && strcmp(password, "1234") == 0){
                     printf("Enter student number: "); scanf("%d", &n);
                     for(int i = 0; i < n; i++){
                         printf("Enter the name of %dth student: ", i + 1); scanf("%s", s[i].name);
                         printf("Enter the contact of %dth student: ", i + 1); scanf("%s", s[i].contact);
                         printf("Enter the status of %dth student: ", i + 1); scanf("%s", s[i].status);
                        printf("Enter the achive of %dth student: ", i + 1); scanf("%s", s[i].achive);
                        s[i].id = 10012 + i;
                     }
                    printf("Enter id for Display: "); scanf("%d", &id);
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
                else 
                    flag = 2;
                break;
            case 2:
                if(strcmp(username, "Student") == 0 && strcmp(password, "2345") == 0){
                    printf("Enter id for Display: "); scanf("%d", &id);
                    for(int i = 0; i < n; i++){
                        if(id == s[i].id){
                            Display(s[i]);
                            flag = 1; break;
                        }
                    }
                        if(flag == 0)
                            puts("No student found with that ID");
                        
                }
                else
                    flag = 2;
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
    }while(ch == 1);
}
