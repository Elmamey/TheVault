/*
Using Structures, write a program to do the following:
Design a structure template to store biographical data about a person.
Your program must:
a) Enter data for a person's first name, surname, date of birth, height, weight, eye
colour & country of citizenship.
b) Display the data entered.
c) Copy the data and store it in a 2 nd person's record and then modify it.
d) Display the new data for the 2 nd person.


This program does what is asked above :D*/

#include <stdio.h>
#include <string.h>

struct peopleData
{
    char firstName[11];
    char lastName[21];
    char dob[20];
    int height;
    int weight;
    char eyecolor[15];
    char nationality[20];

};


int main ()
{
    struct peopleData person1, person2;
    
    printf("Please enter the persons's name\n");
    fgets(person1.firstName, 11, stdin);

    printf("Please enter the persons's last name\n");
    fgets(person1.lastName, 21, stdin);

    printf("Please enter the persons's DOB\n");
    fgets(person1.dob, 20, stdin);

    printf("Please enter the persons's height\n");
    scanf("%d", &person1.height);

    printf("Please enter the persons's weight\n");
    scanf("%d", &person1.weight);
    
    //clean input buffer with this

    while(getchar() != '\n');

    printf("Please enter the persons's Eye Color\n");
    fgets(person1.eyecolor, 15, stdin);

    printf("Please enter the persons's Nationality\n");
    fgets(person1.nationality, 20, stdin);

    //Display data collected:

    printf("\nPerson 1 Data:");
    printf("\nThe structure member contains\n");

    printf("\nTheir first name is %s\n", person1.firstName);
    printf("\nTheir last name is %s\n", person1.lastName);
    printf("\nTheir DOB is %s\n", person1.dob);
    printf("\nTheir height is %dCM\n", person1.height);
    printf("\nTheir weight is %dkg\n", person1.weight);
    printf("\nTheir Eye Color is %s\n", person1.eyecolor);
    printf("\nTheir Nationality is %s\n", person1.nationality);

    person2 = person1;

    strcpy(person2.firstName, "John");
    strcpy(person2.lastName, "Doe");
    strcpy(person2.dob, "01/01/1990");
    person2.height = 175;
    person2.weight = 755;
    strcpy(person2.eyecolor, "Brown");
    strcpy(person2.nationality, "United States");
    printf("\nPerson 2 Data:");
    printf("\nThe structure member contains\n");

    printf("\nTheir first name is %s\n", person2.firstName);
    printf("\nTheir last name is %s\n", person2.lastName);
    printf("\nTheir DOB is %s\n", person2.dob);
    printf("\nTheir height is %dCM\n", person2.height);
    printf("\nTheir weight is %dkg\n", person2.weight);
    printf("\nTheir Eye Color is %s\n", person2.eyecolor);
    printf("\nTheir Nationality is %s\n", person2.nationality);

    return 0;

}