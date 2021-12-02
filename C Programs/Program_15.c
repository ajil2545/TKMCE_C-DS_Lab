#include<stdio.h>
struct node
{
    int data1,data2;
    struct node *link;
};
void main()
{
    struct node obj1,obj2,obj3;
    int sum;
    obj1.data1=30;
    obj1.data2=45;
    obj1.link=&obj2;
    obj2.data1=40;
    obj2.data2=50;
    obj2.link=&obj3;
    obj3.data1=10;
    obj3.data2=32;
    obj3.link=NULL;
    sum=obj1.data1+obj2.data1+obj3.data1;
    printf("Sum of all data1 in list : %d",sum);
}