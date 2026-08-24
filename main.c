/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
# include<stdlib.h>
#include<time.h>
int main()
{
    int secret,guess;
    int chances=10;
 srand(time(0));
 secret = rand()%100 +1;
 printf("welcome to the game\n");
 printf("lets see how many chances you take to get it right\n");
 printf("wa ha ha ha ha\n");
 printf("just kidding lets start the game😊\n");
 for(int chances=10;chances!=0;chances--){
     printf("enter your guess\t");
     scanf("%d",&guess);
     printf("chances remaining are %d\n",chances-1);
     if(guess>secret)
     {
         printf("the number is lower than the guess\n");
     }
         else if (guess<secret){
             printf("the number is higher than the guess\n");
         }
          if(guess==secret){
              printf("you win🎉🎉🎉\n");
              return 0;
          }
     
     
     
 }
    if(chances==0){
         printf("out of guesses you loose\n");
         return 0;
     }

    return 0;
}