# include <stdio.h>
# include <stdbool.h>
# define TOTAL 2440
# define RATE 1.2
# define INITIAL 7
# define FEE 9972
int main(void)
{
    int days = 0;
    while(true)
    {
        float infected = INITIAL;
        int total_infected = 0;
        int withdraw = (int)infected;
        float infected_Today = infected;

        printf("Enter an integer number of days to continue\nEnter a negative integer number to exit\n");
        scanf("%d", &days);
        if(days < 0)
        {
            puts("This is the end");
            break;
        }
        if(days == 0)
        {
            printf("Total number of infected are: %d\n", (int)infected);
            printf("The percentage of people infected: %f\n", (infected * 100/TOTAL));
            printf("The number of students withdrawing are: %d\n", withdraw);
            printf("Loss for institution is: %d\n", withdraw * FEE);
            continue;
        }
        for(int i = 0; i < days; i++)
        {
            infected +=  infected_Today * RATE;
            infected_Today *= 1.2; 
            if(i <= 14)
            {
                withdraw = (int)infected;
            }
        }
        if(infected > TOTAL)
        {
            puts("complete infection");
            printf("The whole loss is: %d\n", TOTAL * FEE);
            continue;
        }
        else
        {
            printf("Total number of infected are: %d\n", (int)infected);
            printf("The percentage of people infected: %f\n", (infected * 100/TOTAL));
            printf("The number of students withdrawing are: %d\n", withdraw);
            printf("Loss for institution is: %d\n", withdraw * FEE);
        }
    }
}