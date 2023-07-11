# include <stdio.h>

int main(){
    int physics, chemistry, mathematics;
    float total;

    printf("Enter Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter Mathematics Marks\n");
    scanf("%d", &mathematics);
    total = (physics + mathematics + chemistry)/3;
    if((total<40) || physics<33 || chemistry<33 || mathematics<33 )
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else{
        printf("Your total percentage is %f and you are Pass\n", total);
    }

    return 0;
}