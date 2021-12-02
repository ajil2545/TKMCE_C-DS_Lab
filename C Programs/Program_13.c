#include<stdio.h>
struct employee
{
    int id;
    char name[10];
    int salary,da,ta,hra,gp;
};
void main()
{
    struct employee e[3],*ptr;
    ptr=&e[0];
    int i,sum=0;
    printf("Enter employee details\n");
    for(i=0;i<3;i++)
    {
        printf("Enter employee %d details\n",i+1);
        printf("Enter eployee id : ");
        scanf("%d",&e[i].id);
        printf("Enter employee name : ");
        scanf("%d",e[i].name);
        printf("Enter employee salary : ");
        scanf("%d",&e[i].salary);
        printf("Enter employee DA : ");
        scanf("%d",&e[i].da);
        printf("Enter employee TA : ");
        scanf("%d",&e[i].ta);
        printf("Enter employee HRA : ");
        scanf("%d",&e[i].hra);
    }
    for(i=0;i<3;i++)
    {
        printf("GP of employee %d :%d\n",i+1,e[i].gp);
        sum=sum+e[i].gp;
        ptr++;
    }
    printf("Sum of GP's : %d",sum);
}