#include <stdio.h>

void main()
{
    FILE *fp;
    int i=0;
    char name[32], dob[32], homeadd[100], city[32], state[32], uname[32], passw[32];
    char* var[] = {"name", "dob", "homeadd", "city", "state", "uname", "passw", "\n"};
    fp = fopen("db.txt", "w");
    printf("Please Enter right details.\n");
    printf("Name : ");
    scanf("%s", &name);
    printf("DoB : ");
    scanf("%s", &dob);
    printf("Home Address : ");
    scanf("%s", &homeadd);
    printf("City/Village : ");
    scanf("%s", &city);
    printf("State : ");
    scanf("%s", &state);
    printf("Username : ");
    scanf("%s", &uname);
    printf("Password : ");
    scanf("%s", &passw);
    while(var[i]!="\n")
    {
        fprintf(fp,"%s : %s\n", var[i], );
        i++;
    }

}
