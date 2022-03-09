#include "header.h"
#include "welcome.c"


int main(){
    system("cls");
    welcomeScreen(); // welcome.c

    titleBar();  // title.c
    int choice = homeMenu(); // menu.c

    system("cls");
    switch(choice){
        case 1: 
            patientReg();
            break;
        case 2:
            patientLog();
            break;
        default:
            printf("Invalid entry");
    }


    printf("MAIN EXCECUTION TERMINATED.......");

    return 0;
}
