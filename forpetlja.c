#include <stdio.h>
 int main ()
 {
  int min =0;
  int max =300;
  int i;
    printf ("Cels          Fahr \n");
for(i=min; i<=max; i=i+20)
 {
int c;
c=5*(i-32)/9;
    printf ("%4d C => F %4d",i,c);
 }
return 0;
}
