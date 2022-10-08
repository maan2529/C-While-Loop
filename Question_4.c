main()
{
int i=1,num;
printf("Enter how many natural number wanna print in reverce order ");
scanf("%d",&num);
while (i<=num)
{
    printf("%d \n", (num+1)-i);
    i++;
}

getch();
}