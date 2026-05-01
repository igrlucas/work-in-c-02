#include <stdio.h>

int main()
{
    int fuel, options, authorization, mission, km, suporte = 0;
    int permission = 123456;

    printf("How much fuel do you have: \n");
    scanf("%d", &fuel);

    printf("Do you have authorization (1 - YES) or (0 - NO) \n");
    scanf("%d", &authorization);

    if ((fuel >= 70) && (fuel < 89) && (authorization == 1))
    {
        printf("Bon voyage :)");
    }
    else if ((fuel >= 50 && fuel <= 69))
    {
        printf("What is the flight distance? \n");
        scanf("%d", &km);

        printf("Does it have a support aircraft? \n");
        scanf("%d", &suporte);

        if ((km == 200) && (suporte == 1))
        {
            printf("Bon voyage :)");
        }
        else
        {
            printf("We can't let you fly.");
        }
    }
    else if ((km > 200))
    {
        printf("Is this a mission? \n");
        scanf("%d", &mission);

        printf("Permission key for the mission: \n");
        scanf("%d", &permission);

        if ((mission == 1) && (permission == 123456))
        {
    
            if ((fuel >= 90) && (km > 200))
            {
                printf("Long-range mission!");
            }
            else if ((fuel < 6) && (mission == 1))
            {
                printf("High-risk mission!");
            }
            else
            {
                printf("Error: Contact the developer.");
            }
        }
    }

    else
    {
        printf("You are not authorized to fly.");
    }

    return 0;
}