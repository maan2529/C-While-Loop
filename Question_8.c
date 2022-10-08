main()
{
int i=1, num;
printf("Enter how many Even natural number wanna print in reverce order");
scanf("%d", &num);
while(i<=num)
{
    printf("%d \n", (2*num+2)-(2*i));
    i++;
}
getch();
}