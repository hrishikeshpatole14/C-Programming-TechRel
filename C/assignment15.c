 #include<stdio.h>
 int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

  /*  if(num%2==0)
    printf("\nNumber is even");
    else
    printf("\nNumber is odd");
 
  */
 
   (num%2==0)? printf("\n%d is even",num):printf("\n%d is odd",num);


    return 0;
 }

