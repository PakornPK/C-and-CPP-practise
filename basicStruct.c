#include <stdio.h>
#include <string.h>

//Declare struct
struct  Student
{
    char id[9];
    char name[30];
    int age;
    float gpa;
};

//Contructor Functiom
void null_student(struct Student* P){
    P->id[0] = '\0'; 
    P->name[0] = '\0';
    P->age = -99;
    P->gpa = -99; 
}

int main(int argc, char const *argv[])
{
    //initial struct
    struct Student s1; 
    null_student(&s1);

    //Before 
    printf("ID = %s Name = %s Age = %d GPA = %.2f \n",s1.id,s1.name,s1.age,s1.gpa);
    printf("=======================================\n"); 

    //After 
    strcpy(s1.id,"00000001");
    strcpy(s1.name,"John Rambo"); 
    s1.age = 30; 
    s1.gpa = 3.54; 
    printf("\nID = %s Name = %s Age = %d GPA = %.2f \n",s1.id,s1.name,s1.age,s1.gpa);
    printf("======================================="); 

    return 0;
}
