# include <stdio.h>

int main(){
    int lp;
    printf("Enter a year\n");
    scanf("%d", &lp);

    if (lp % 400 == 0)
    {
        printf("%d is a leap year.\n", lp);
    }
    else if (lp % 100 == 0)
    {
        printf("%d is a leap year.\n", lp);
    }
    else if (lp % 4 == 0)
    {
        printf("%d is a leap year.\n", lp);
    }
    else{
        printf("%d is not a leap year.\n", lp);
    }

    return 0;
}