#include<stdio.h>
int main()
{
    int amount , tenNotes , fiveNotes , oneNotes;

    printf("Enter the amount to withdraw:");
    scanf("%d",&amount);

    tenNotes= amount/10;
    amount = amount % 10;

    fiveNotes= amount/5;
    amount = amount%5;

    oneNotes=amount/1;
    amount = amount%1;

    printf("\nCurrency notes nedded:\n");
    printf("10 rupees notes:%d\n",tenNotes);
      printf("5 rupees notes:%d\n",fiveNotes);
        printf("1 rupees notes:%d\n",oneNotes);

        return 0;

}