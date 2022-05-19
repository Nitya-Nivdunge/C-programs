#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[30],department[30];
    int no,age,salary;
} 
Employee;
int main()
{
    int i,n;
    printf("Enter the no. of Employees : ");
    scanf("%d",&n);
    
    //array to store structure values of all employees
    Employee emp[n];
    printf("Enter %d Employee Details",n);
    for(int i=0; i<n; i++)
	{
		printf("\n\n-----------------\n");
        printf("Employee %d:\n",i+1);
        printf("-----------------\n");
        printf("Name       : ");
        scanf("%s",&emp[i].name);
        printf("Emp.ID No. : ");
        scanf("%d",&emp[i].no);
        printf("Age        : ");
        scanf("%d",&emp[i].age);
        printf("Department : ");
        scanf("%s",&emp[i].department);
        printf("Salary     : ");
        scanf("%d",&emp[i].salary);
        
    }
    printf("\n\n------------------\n");
    printf("Employees Details\n------------------\n\n");
    for(i=0; i<n; i++)
	{
	    printf("\nEmployee %d:\n-----------------\n",i+1);
        printf("Name       :%s\n",emp[i].name);
        printf("Emp.ID No. :%d \n",emp[i].no);
        printf("Age        :%d \n",emp[i].age);
        printf("Department :%s \n",emp[i].department);
        printf("Salary     :%d \n\n",emp[i].salary);
    }
    return 0;
}