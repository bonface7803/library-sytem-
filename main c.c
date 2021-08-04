/*
 compiler:c99
 project:library management
 Author: Bonface Kipkemoi lelgo
 Date:   August,2021
 License:MIT
*/

// name
// member id
// tel
// status
// is staff

#include <stdio.h>
#include <stdlib.h>
struct library{
   char bookname[50];
   char author[50];
   int noofpages;
   float price;
   char username[5];
};
int main(){
int pass,x=3;
    while (x!=0){
        //enter your secret pin
printf("\ninput the password\n");
       scanf("%i",&pass);
       if(pass==7803)
       {
           //if you enter a valid password correct password is printed
           printf("correct password");
           x=0;
       }
       else
       {
           //if you enter invalid password wrong password is printed
           printf("wrong password");
       }

    }

   struct library lib[100];
   char bookname[30];
   int i,j, keepcount;
   i=j=keepcount = 0;
   while(j!=6){
      printf("\n1. Add book \n");
      printf("2.edit book\n");
      printf("3.return book\n");
      printf("4 lend a book\n");
      printf("5.delete users\n");

      printf ("6.fine if book returned late");

      printf("\n7.Exit\n");
      printf ("\n\nEnter one of the above : ");
      scanf("%d",&j);
      switch (j){
         /* Add book */
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].noofpages);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            keepcount++;
            i++;
            break;
         case 3:
         {
             printf ("Enter book name =\n ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter date returned =\n ");
            scanf ("%s",lib[i].author);


         }

            break;
         case 2:
         {
         printf ("Enter book name =\n ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name =\n ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].noofpages);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            keepcount++;
            i++;}
            break;
         case 4:
         {
          printf ("enter bookname:");
         scanf("%s",lib[i].bookname);
          printf ("enter the date issue :");
         scanf("%s",lib[i].username);
         printf("book lended");
         }
         break;
          case 5:
         {
         printf ("enter the username :");
         scanf("%s",lib[i].username);
         printf("userdeleted");
         }
         break;
          case 6:
            printf("\n Fine if the book is returned late : %d", keepcount);
            break;

            exit (0);
      }
   }
   return 0;
}
