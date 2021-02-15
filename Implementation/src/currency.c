#include<stdio.h>
void dolToRup(int dol, int inr){
    printf("enter the value in dollar: ");
    scanf("%d", &dol);
    if(dol)
    {
        inr = (dol * 72.52);
        printf("%.2d dollar = %.2d rupees", dol, inr);
        printf("\n");
    }
    else
        printf("invalid input\n");
}

void RupToDol(int inr, float dol){
    printf("enter the value in rupees: ");
    scanf("%d", &inr);
    if(inr)
    {
        dol = (inr * 0.014);
        printf("%d rupees = %f dollar", inr, dol);
        printf("\n");
    }
    else
        printf("invalid input\n");
}


int main()
{   
    int n, h;
    float dol, inr;
    do{
        printf("press 1 for dollar--> rupees converter\n");
        printf("press 2 for rupees--> dollar converter : ");
        scanf("%d", &n);
        if(n==1){
            dolToRup(dol, inr);
        }
        else if(n==2){
            RupToDol(inr, dol);
        }
        else{
            printf("invalid entry\n");
        }
        printf("Do you want to run it again?\npress 1 for rerun, press any other key for terminate : ");
        // getch();
        scanf("%d", &h);
    
    }while(h==1);
    printf("thank you!!\n");
}