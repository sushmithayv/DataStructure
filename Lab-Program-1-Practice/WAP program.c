#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number of students applying for admission in the University\n");
scanf("%d",&n);
struct student
{
int id;
int age;
int marks;
};
struct student s[n];
for(i=0;i<=n-1;i++)
{
printf("\nEnter the student's id,age and marks scored in the qualifying exam\n");
scanf("%d%d%d",&s[i].id,&s[i].age,&s[i].marks);
if((s[i].age>20)&&((s[i].marks>=0)&&(s[i].marks<=100)))
printf("The entered data is valid.\n");
else
{
printf("The entered data is invalid!\n");
}
if(((s[i].marks>=65)&&(s[i].marks<=100))&&(s[i].age>20))
printf("The student is qualified for the admission!\n");
else
printf("The student is not capable of qualifying for the admission.\n");
}
return 0;
}
