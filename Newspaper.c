#include <stdio.h>
#include "Newspaper.h"



void addName(char* name , int p, newpaper_details details){
   
  //  printf("%s %d \n", name, p);

    strcpy(details.name, name);
    details.price = p;

  //  printf("%s %d \n", details.name, details.price);
}


/*
get get method details
*/


newpaper_details getDetail(){
    return (newpaper_details) ;
}