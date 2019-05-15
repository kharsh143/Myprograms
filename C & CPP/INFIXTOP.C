#include<stdio.h>

#include<conio.h>

//Stack precedence function

 int F(char symbol)

  {

      switch(symbol)

               {

                   case ‘+’ :

                   case ‘-‘ :

                          return 1;

                   case ‘*’:

                  case ‘^’:

                         return 6:

                case ‘)’:

                       return 0:;

                case ‘#’:

                       return -1;

                  default:

                       return 8;

                       }

      }

//Input precedence function

int G(char symbol)

    {

      switch(symbol)

            {

               case ‘+’ :

               case ‘-‘ :

                      return 2;

               case ‘*’:

                     return 4;

               case ‘^’:

                     return  5:

                case ‘(‘:

                    return 0;

                 case ‘)’:

                   return 9:;

                 case ‘#’:

                 return -1;

               default:

                  return 7;

              }

}

Void infix_prefix(char infix[], char prefix[])

{

      int top, j, i;

     char symbol, s[40];

      top = -1;

      s[++top] = ‘#’;

      J = 0;

      strrev(infix);

     for(i = 0;i < strlen(infix); i++)

          {

              symbol= infix[i];

              while(F(s[top]) > G(symbol))

                     {

                             prefix[j] = s[top--];

                             j++;

                      }

              if(F(s[top]) != G(symbol))

              s[++top] = symbol;

             else

                       top--;

             }

  while(s[top != ‘#’)

      {

           prefix[j++] = s[top--];

       }

 prefix[j] = ‘’;

 strrev(prefix);

}

void main()

   {

     char infix[20];

     char prefix[20];

    printf(“/nEnter a valid infix expressionn”);

    scanf(“%s”,infix);

    infix_prefix(infix, prefix);

    printf(“nnThe prefix expression isn”);

   printf(“%sn”,prefix);

  }
