#include<stdio.h>
// in this Y represents your ratings
void main()
{
    char input="Y";
    int ratings;
    printf("Enter your ratings (1-5) :\n");
    scanf("%d",&ratings);
    if(ratings<=5&& ratings>=1)
{
       for(int i=1;i<=5;i++)
     {
          for(int j=1;j<=i;j++)
        {
            if(ratings==i)
            {
             printf(" %s ",input);    
            }
            else{
                printf(" * ");
            }
        }
          printf("\n");
    }
}
else{
    printf("*=*=*=*= Invalid Ratings =*=*=*=*\n");
}
}
