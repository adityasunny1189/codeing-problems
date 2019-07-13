#include<stdio.h>
void read_user_detail()
{
    printf("Welcome to mobile shop\n\n");
    int mobile_price, bank_balance, expected_expenditure, accesories_price = 278;
    float total_expenditure = 0;
    printf("enter the price of mobile you want to purchase: ");
    scanf("%d",&mobile_price);
    printf("\n");
    printf("enter your expected expenditure: ");
    scanf("%d",&expected_expenditure);
    printf("\n");
    printf("enter your bank balance: ");
    scanf("%d",&bank_balance);
    printf("\n");
    total_expenditure = purchase_function(mobile_price, expected_expenditure, total_expenditure);
    bank_balance = bank_balance - total_expenditure;
    if (total_expenditure < bank_balance)
    {
        if (total_expenditure < expected_expenditure)
        {
            printf("Good purchase\n");
        }
        else
        {
            printf("bad purchase\n");
        }
    }
    else
    {
        printf("cant purchase\n");
    }
    
}
int purchase_function(int a, int b, int c)
{
    while(c < b)
    {
        c = c + a;
    }
    return total_price_calculator(c);
}
int total_price_calculator(int d)
{
    float tax = 0.8;
    d = d + (tax * d)/100;
    return d;
}
int main()
{
    read_user_detail();
    return 0;
}