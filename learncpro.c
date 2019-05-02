#include <stdio.h>

void regist();
void login();
void erase();

void main()
{
    int uinput;

    printf("\t\"LEARN C PROGRAMMING.\"\n");
    printf("1.Login (Existing User)\n2.Register (New User)\n");
    scanf("%d", &uinput);
    if (uinput==1)
    login();
    else if (uinput==2)
    regist();
    else
    printf("Oops! You've entered wrong option, Please re-enter right option.");

}

void login()
{
    FILE *fp;
    char  username[32], password[32];
    fp = fopen("db.txt", "r+");
    printf("Username : ");
    scanf("%s", username);
    printf("Password : ");
    scanf("%s", password);
    if (getc(fp)==EOF)
    regist();
    else
    checklog(username, password);
    fclose(fp);
}

void regist()
{
    FILE *fp;
    int i;
    char name[32], dob[32], homeadd[100], city[32], state[32], uname[32], passw[32];
    fp = fopen("db.txt", "a+");
    erase();
    printf("Please Enter right details.\n");
    printf("Name : ");
    scanf("%s", name);
    printf("DoB : ");
    scanf("%s", dob);
    printf("Home Address : ");
    scanf("%s", homeadd);
    printf("City/Village : ");
    scanf("%s", city);
    printf("State : ");
    scanf("%s", state);
    printf("Username : ");
    scanf("%s", uname);
    printf("Password : ");
    scanf("%s", passw);
    fprintf(fp, "name : ", name);
    fprintf(fp, "dob : ", dob);
    fprintf(fp, "homeadd : ", homeadd);
    fprintf(fp, "city : ", city);
    fprintf(fp, "state : ", state);
    fprintf(fp, "uname : ", uname);
    fprintf(fp, "passw : ", passw);
    fclose(fp);
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

void checklog(char username, char password)
{
    printf("WELCOME, %s", username);
}

void erase()
{
    system("clear");
}

