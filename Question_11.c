main()
{
int i=1, num;
printf("Enter how many Enven natural number wanna print ");
scanf("%d", &num);
while(i<=num)
{
    printf("%d \n", (2*i-1));
    i++;
}
getch();
}