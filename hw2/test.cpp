#include <stdio.h>

struct Employee
{
   char name[256];
   int age;
};

void readEmployee(Employee *pEmp)
{
   printf("Enter name: ");
   scanf("%s", pEmp->name);
   printf("Enter age: ");
   scanf("%d", &pEmp->age);
}

void writeEmployee(Employee *pEmp)
{
   printf("Name = %s, age = %d\n", pEmp->name, pEmp->age);
}

int main()
{
   Employee emp;
   readEmployee(&emp);
   writeEmployee(&emp);
}