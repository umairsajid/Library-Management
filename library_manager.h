/*library_manager.h*/


/* definitions */
/* if constant is not defined, define it and include the prototypes */
#ifndef LIBRARY_MANAGER_H_INCLUDED
#define LIBRARY_MANAGER_H_INCLUDED

/*list of header files*/
#include <windows.h>
#include<stdio.h>                   /*contains printf,scanf etc*/
#include<conio.h>                   /*contains delay(),getch(),gotoxy(),etc.*/
#include <stdlib.h>
#include<string.h>                  /*contains strcmp(),strcpy(),strlen(),etc*/
#include<ctype.h>                   /*contains toupper(), tolower(),etc*/
#include<dos.h>                     /*contains _dos_getdate*/
#include<time.h>
//#include<bios.h>                  /*contains  show_mouse();*/

#define RETURNTIME 15

/*list of function prototype*/
char catagories[][15]={"Computer","Electronics","Electrical","Civil","Mechnnical","Architecture"};
void returnfunc(void);
void mainmenu(void);
void addbooks(void);
void deletebooks(void);
void editbooks(void);
void searchbooks(void);
void issuebooks(void);
void viewbooks(void);
void closeapplication(void);
int  getdata();
int  checkid(int);
int t(void);
//void show_mouse(void);
void Password();
void issuerecord();
void loaderanim();

COORD coord = {0, 0}; // sets coordinates to 0,0
//COORD max_buffer_size = GetLargestConsoleWindowSize(hOut);
COORD max_res,cursor_size;

void gotoxy (int x, int y){
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void delay(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

//list of global files that can be acceed form anywhere in program
FILE *fp,*ft,*fs;

//list of global variable
int s;
char findbook;
char password[10]={"pokhara"};


struct meroDate{
    int mm,dd,yy;
};

struct books{
    int id;
    char stname[20];
    char name[20];
    char Author[20];
    int quantity;
    float Price;
    int count;
    int rackno;
    char *cat;
    struct meroDate issued;
    struct meroDate duedate;
};

struct books a;

#endif
/* else do nothing */