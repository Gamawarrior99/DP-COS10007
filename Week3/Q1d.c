#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
};
 
int main( ) {

   struct Books Book1;        
 
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Gamaliel D'mello"); 

   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);


   return 0;
}
