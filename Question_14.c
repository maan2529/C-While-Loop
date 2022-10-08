main()
{
int i=1,num,sum=0;
printf("Enter how many natural numbers sum wanna print ");
scanf("%d",&num);
while (i<=num)
{
    sum+=i;
    i++;
}
printf("%d", sum);
getch();
}