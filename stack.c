#define max 50
int stack[max];
int top=-1;
void push();
void pop();
void peep();
main()
{
int ch;
while(1)
{
printf("\nPush:1\nPop:2\nPeep:3\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    peep();
    break;
}
}
}
void push()
{
    int data;
    if(top==max-1)
        printf("\nStack is overflow");
    else
    {
        printf("\nEnter data");
        scanf("%d",&data);
        top=top+1;
        stack[top]=data;

    }
}
void pop()
{
    if(top==-1)
        printf("\nStack is under flow");
    else
        {
            printf("\nDeleted element:%d",stack[top]);
    top=top-1;
        }
}
void peep()
{
    int i;
    printf("\nStack Elements Are:\n");
    for(i=top;i>=0;i--)
        printf("\n%d",stack[i]);
}
