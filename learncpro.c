#include <stdio.h>

void main()
{
    int uinput;

    printf("\t\"LEARN C PROGRAMMING.\"\n");
    printf("1.Login (Existing User)\n2.Register (New User)\n");
    scanf("%d",&uinput);
    if (uinput==1)
    login();
    else if (uinput==2)
    regist();
    else
    printf("Oops! You've entered wrong option, Please re-enter right option.");

}

void login()
{
    FILE fp;
    char  username[35], password[32];
    fp = fopen("db.txt", "r");
    printf("Username : ");
    scanf("%s", &username);
    printf("Password : ");
    scanf("%s", &password);
    if (sizeof(fp)==0)

}

void regist()
{
    FILE fp;
    int i;
    char name[32], dob[32], homeadd[100], city[32], state[32], uname[32], passw[32];
    char var[] = {"name", "dob", "homeadd", "city", "state", "uname", "passw"};
    fp = fopen("db.txt", "a+");
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
    for (i=0; i<=sizeof(var);i++)
    {
        fprintf(fp, "%d ");
    }

}

void home()
{
    int uinput;
    printf("\tWelcome %s, to LEARN C PROGRAMMING.\n\n");
    printf("1.Lessons\n2.Activity\n3.My Progress\n4.Quiz");

    scanf("%d", &uinput);
    erase();
    void recurse()
        {
        if (uinput == 1)
        lesson();
        else if (uinput==2)
        activity();
        else if (uinput==3)
        myprogress();
        else if (uinput==4)
        quiz();
        else
        {
            erase();
            printf("Oops! You've entered wrong option, Please re-enter right option.");
            recurse();
        }
        }
}

void erase()
{
    system("clear");
}

