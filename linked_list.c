#include<stdio.h>
#include<stdlib.h>
/*int main()
{
int a,*pi;
float f,*pf;
pi=(int *)malloc(sizeof(int));
pf=(float *)malloc(sizeof(float));
*pi=1024;
*pf=3.14;
printf("%d \n%f\n",*pi,*pf);
free(pi);
free(pf);
return 0;
}*/
struct node
{
    int data;
    struct node *link;
};
struct node *create_node()
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    ptr->data=10;
    ptr->link=NULL;
    return ptr;
}
int main()
{
    struct node *temp;
    temp=create_node();
    printf("%d \n",temp->data);
    printf("%p \n",temp->link);
    printf("%p \n",temp);
    free(temp);
    return 0;
}