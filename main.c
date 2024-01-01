#include <conio.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
// Defining Structure 
typedef struct mynode 
{ 
    char name[100]; 
    char gen[6]; 
    int age; 
    struct mynode* link; 
} Node; 

Node* start = NULL; 
//function declaretion... 
void details(int); 
int seat(int); 
int cal(int, int, int); 
void bill(int, int); 
// Global variables 
char source[20], des[20], train[40]; 
char station[40], cla[40]; 
int time1, time2, a[55]; //takes source ,destination, train , station , class, time start and end ... 
// Driver Code 
void main() 
{ 
    int a,b1,c1=3,n; 
    for(a=1;a<=30;a++) 
    { 
    printf("\n"); 
    for(b1=1;b1<=119;b1++) 
    { 
        if(a==1||a==30||b1==1||b1==119) 
        { 
            printf("%c",c1); 
        }   
        else 
        { 
            printf(" "); 
        } 
    } 
    if(a==15) 
    { 
        printf("\n%c \t\t\t\t\t Welcome to project by Juhi Mehta \t\t\t\t\t %c",c1,c1); 
    } 
} 
    printf("\n\t Enter any key to continue==>"); 
    scanf("%d",&n); 
    system("cls"); 
    int i, j, a1, a2, b, c,x=0,d,e,r; 
    printf("\n\tEnter Number Of Passengers: "); 
    fflush(stdin); 
    scanf("%d", &j); 
    details(j); 
    printf("\n\tEnter The Source Place: "); 
    fflush(stdin); 
    gets(source); 
    printf("\n\tEnter The Destination Place: "); 
    gets(des); 
    system("cls"); 
    printf("\n\tThe Following Trains ""Are Available.....\n"); 
    printf("\n\t1. Rajdhani Express.."".......10:00 ""a.m........Sealdah Station\n"); 
    printf("\n\t2. Satabdi Express..."".......05:00 ""p.m........Howrah Station\n"); 
    printf("\n\t3. Humsafar Express..."".......11:00 ""p.m........Kolkata Chitpur"" Station\n"); 
    printf("\n\t4. Garib-Rath Express"".........05:00 ""p.m........Sealdah Station\n"); 
    printf("\n\t5. Duronto Express..."".........07:00 ""a.m.........Santraganchi""Station\n"); 
    printf("\n\t In which Train do you want to travel..?(enter the number of it) ==> "); 
    scanf("%d", &i); 
    do 
    { 
    switch (i) 
    { 
    case 1: 
    { 
    strcpy(train,"Rajdhani Express"); 
    strcpy(station,"Sealdah Station"); 
    time1 = 10; 
    time2 = 00; 
    a1 = 2000; 
    a2 = 1500; 
    d = cal(a1, a2, j); //function calling 
    printf("\n\t Total Bill Amount: %d",d); 
    }; break; 
    case 2: 
    { 
    strcpy(train,"Satabdi Express"); 
    strcpy(station,"Howrah Station"); 
    time1 = 05; 
    time2 = 00; 
    a1 = 1801; 
    a2 = 981; 
    d = cal(a1, a2, j); 
    printf("\n\t Total Bill Amount:%d\n",d); 
    }; break; 
    case 3: 
    { 
    strcpy(train,"Humsafar Express"); 
    strcpy(station,"Kolkata Chitpur Express"); 
    time1 = 11; 
    time2 = 00; 
    a1 = 2199; 
    a2 = 1780; 
    d = cal(a1, a2, j); 
    printf("\n\t Total Bill Amount: %d\n", d); 
    }; break; 
    case 4: 
    { 
    strcpy(train, "Garib-Rath Express"); 
    strcpy(station, "Sealdah Station"); 
    time1 = 05; 
    time2 = 00; 
    a1 = 1759; 
    a2 = 1200; 
    d = cal(a1, a2, j); 
    printf("\n\t Total Bill Amount: %d\n", d); 
    }; break; 
    case 5: 
    { 
    strcpy(train, "Duronto Express"); 
    strcpy(station, "Santraganchi Station"); 
    time1 = 07; 
    time2 = 00; 
    a1 = 2205; 
    a2 = 1905; 
    d = cal(a1, a2, j); 
    printf("\n\t Total Bill Amount: %d\n", d); 
    }; break; 
    default: 
    printf("Enter Correct choice.....\n"); 
    x = 1; 
    break; 
    } 
    } 
    while (x); 
    system("cls"); 
    printf("\n\t Now Book Your Seats......\n"); 
    seat(j); 
    bill(d, j); 
    } 

int cal(int y1, int y2, int h) 
{ 
    system("cls"); 
    int b, c, i, r, n; 
    printf("\n\t 1. Sleeper Class....\n"); //y1=Rupees of 3a class y2=rupees of sleeper class n=i=choice b=c=calculation h=passengers 
    printf("\n\t 2. A.C Class.......\n"); 
    printf("\n\tEnter Your Choice......==>"); 
    scanf("%d", &i); 
    switch (i) 
    { 
    case 1: 
    { 
    strcpy(cla, "Sleeper Class"); 
    b = y2 * h; 
    c = b + (b * 0.18); 
    } break; 
    case 2: 
    { 
    printf("\n\t 1. 3A Class....\n"); 
    printf("\n\t 2. 2A Class....\n"); 
    printf("\n\t 3. 1st Class A.C.....\n"); 
    printf("\n\t Enter Your Choice....==>"); 
    scanf("%d", &n); 
    switch (n) 
    { 
    case 1: 
    { 
    Strcpy(cla, "3A Class"); 
    b = y1 * h; 
    c = b + (b * 0.18); 
    } break; 
    case 2: 
    { 
    strcpy(cla, "2A Class"); 
    b = (y1 + 1000) * h; 
    c = b + (b * 0.18); 
    } break; 
    case 3: 
    { 
    strcpy(cla, "1st Class A.C."); 
    b = (y1 + 5000) * h; 
    c = b + (b * 0.18); 
    } break; 
    default: 
    { 
    printf("\t\tEnter Right Choice......\n"); 
    } 
    } 
    } break; 
    default: 
    { 
    printf("\t\tEnter Right Choice......\n"); 
    } 
    } 
    return c; 
    } 
    // Function for taking details of passengers 
    void details(int k) 
    { 
    int i, a; 
    char val[100], gen[12]; 
    for (i = 1; i <= k; i++) 
    { 
    printf("\n\tEnter The %dth Passenger Name: ", i); 
    fflush(stdin); 
    //gets(val); 
    scanf("%s",val); 
    printf("\n\tEnter The %dth Passenger Gender: ", i); 
    fflush(stdin); 
    gets(gen); 
    printf("\n\tEnter The %dth Passenger Age: ", i); 
    fflush(stdin); 
    scanf("%d", &a); 
    // Calling add_node() function 
    add_node(val, gen, a); 
    } 
} 
// Function to add details in node 
// for each passengers 
void add_node(char lol[100], char der[12], int b) //name, gender,age 
{ 
 Node *newptr = NULL, *ptr; 
    newptr = (Node*)malloc(sizeof(Node)); 
    strcpy(newptr->name, lol); 
    strcpy(newptr->gen, der); 
    newptr->age = b; 
    newptr->link = NULL; 
    if (start == NULL) 
    { 
    start = newptr; 
    } 
    else   
    { 
    ptr = start; 
    while (ptr->link != NULL) 
    ptr = ptr->link; 
    ptr->link = newptr; 
    } 
} 
// Function for choosing seats 
int seat(int p) 
{ 
    system("cls"); 
    int i; 
    printf("\n\t -:SEAT MATRIX:- \n"); 
    printf("\n\t(U) (M) (L) (L) "" (U)\n\n"); 
    printf("\n\t01 02 03\t04 ""05\n\n"); 
    printf("\n\t06 07 08\t09 ""10\n"); 
    printf("\n\t11 12 13\t14 ""15\n\n"); 
    printf("\n\t16 17 18\t19 ""20\n"); 
    printf("\n\t21 22 23\t24 ""25\n\n"); 
    printf("\n\t26 27 28\t29 ""30\n"); 
    printf("\n\t31 32 33\t34 ""35\n\n"); 
    printf("\n\t36 37 38\t39 ""40\n"); 
    printf("\n\t41 42 43\t44 ""45\n\n"); 
    printf("\n\t46 47 48\t49 ""50\n"); 
    printf("\n\t51 52 53\t54 ""55\n\n"); 
    printf("\n\t56 57 58\t59 ""60\n"); 
    printf("\n\tEnter Seat Numbers: ==>"); 
    for (i = 0; i < p; i++) 
    { 
    scanf("%d", &a[i]); 
    } 
} 
// Function for printing receipt 
void bill(int y, int j) 
{ 
    system("cls"); 
    int i; 
    Node* ptr = start; 
    printf("\n\n\n\t\t\t\t Detail's Recorded"); 
    for (i = 1; i <= j; i++) 
    { 
    printf("\n\t%dst Passenger Name: ", i); 
    puts(ptr->name); 
    printf("\n\t%dst Passenger Gender: ", i); 
    puts(ptr->gen); 
    printf("\n\t%dst Passenger Age: %d\n\n", i,ptr->age); 
    ptr = ptr->link; 
    } 
    printf("\n\tSource Place: "); 
    puts(source); 
    printf("\n\tDestination Place: "); 
    puts(des); 
    printf("\n\tThe Boarding Station: "); 
    puts(station); 
    printf("\n\tTrain Is: "); 
    puts(train); 
    printf("\n\tAllocated Class: "); 
    puts(cla); 
    printf("\n\tBoarding Time: %d:%d\n", time1, time2); 
    printf("\n\tTotal Bill Amount: %d\n", y); 
    printf("\n\tAllocated Seats Are: "); 
    for (i = 0; i < j; i++) 
    { 
    printf(" %d ", a[i]); 
    } 
    printf("\n"); 
    printf("\tThank You......\n"); 
} 