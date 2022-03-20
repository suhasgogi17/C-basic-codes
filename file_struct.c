/*create a file to save name and roll no*/
#include <stdio.h>
#include <stdlib.h>
void main( ) 
{ 
 FILE *fp ; 
 int other = 'Y' ; 
 struct emp 
 { 
 char name[40] ; 
 } ; 
 struct emp e ; 
 fp = fopen ( "std.txt", "w" ) ; 
 if ( fp == NULL ) 
 { 
 puts ( "Cannot open file" ) ; 
 exit (0) ; 
 } 
 while ( other == 'Y' ) 
 { 
 printf ( "\nEnter the data of to the read array file" ) ; 
 scanf ( "%s %d ", e.name ) ; 
 fprintf ( fp, "%s %d \n", e.name ) ; 
 printf ( "Add other record (Y/N) " ) ; 
 other = getchar( ) ; 
 } 
 fclose(fp);
}