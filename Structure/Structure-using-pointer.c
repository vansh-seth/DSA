#include <stdio.h>
#include <string.h>
struct emp
{
    char name[10];
    int emp_id;
    int sal;
};
int main()
{
    struct emp s,*emp1;
    emp1=&s;
    printf("Enter the employee name: ");
    gets(emp1->name);
    printf("Enter the employee id: ");
    scanf("%d",&emp1->emp_id);
    printf("Enter the employee salary: ");
    scanf("%d",&emp1->sal);
    printf("employee name: %s\nemployee id: %d\nemployee sal: %d\n",emp1->name,emp1->emp_id,emp1->sal);
}
