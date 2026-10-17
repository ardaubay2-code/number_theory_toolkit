#include <stdio.h>

int main(void)
{

 for(;;)
 {
    int choice;
    printf ("=== Number Theory Toolkit ===\n");
    printf ("1. Prime classification\n");
    printf ("2. Perfect number check\n");
    printf ("3. Palindrome check\n");
    printf ("4. Collatz sequence\n");
    printf ("0. Exit\n");
    printf ("Choice: ");
    scanf (" %d", &choice);

    if(choice == 0)
    {
       int doesWantToExit=0;
       printf("Are You Sure That Want to Exit? y=0 n= any number except 0\n");
       scanf("%d",&doesWantToExit);

       

       if(doesWantToExit==0)
       {
        printf("Goodbye!\n");
        break;
       }

    }

    switch(choice)
    {
      case 1:

      {
      int num;
      printf("Enter a number (1-100000):");
      scanf("%d",&num);

      if(num == 1)
      {
        printf("Prime: NEITHER.\n");
      }

      if(num<=0)
      {
        printf("This number can't be a Prime Number!\n");
        continue;
      }

      else

      {
         int is_Prime= 1;

        for(int i = 2; i * i <= num ; i++)
        {
          
          if(num % i == 0)

          {

            is_Prime = 0 ;
            break;

          }

        }
         
        if(is_Prime == 0)
        {

         printf ("Prime: COMPOSITE\n");

        }
        
        
        else
        {

         printf("Prime: PRIME\n");

        }
        
      }
      
      break;
      }


      case 2:
      {
       int num_a;
       int total=0;
      printf("Enter a number (1-100000):");
      scanf("%d",&num_a);

     

      

      for(int i = 1; i < num_a ; i++)
      {
         if( num_a %i == 0)
         {
           total= total + i;
         }
         
      }
        if( total == num_a)
        {
          printf("Perfect: PERFECT\n");
        }
        else
        {
          printf("Perfect: NOT PERFECT.\n");
        }
  
      break;
    }

      case 3:
      {

      int num_b;
      printf("Enter a number (1-100000):");
      scanf("%d",&num_b);

      
       
      int origin= num_b;
      int fake= origin;
      int new_Num= 0;

      for (int i=1 ; fake >0 ;i++)
      {
           int stage=fake%10;
           fake= fake/10;
           new_Num=(new_Num*10)+stage;

      }

       if(new_Num == origin)
       {

        printf("Palindrome: PALINDROME\n");

       }

       else
       {

        printf("Palindrome: NOT PALINDROME.\n");

       }

       break;
      }

      case 4:
      {
      
        int num_c;
        printf("Enter a number (1-100000):");
        scanf("%d",&num_c); 

        

        
        while(num_c>0)
        {
          printf(" %d, ", num_c);

          if(num_c %2 == 0)
          {
             num_c= num_c/2;

             if(num_c == 1)
             {
              printf( "%d\n  " , num_c);
               break;
             }
          }

          else
          {
            num_c=(3*num_c)+1;
          }

        }

        break;
      }

      default:
      {
       
        printf("Invalid value.Please try again!\n");
      }
      
    }
    
    }
     return 0;
 }


