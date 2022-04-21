#include <stdio.h>
int main()
{ 
  int inttype;
  float floattype;
  char chartype;
  double doubletype;
  short int shortinttype;
  unsigned int unsignedinttype;
  long int longinttype;
  signed char signedchartype;
  unsigned char unsignedchartype ;
  long long int longlonginttype;
  printf("Size of int %dbytes\n",sizeof(inttype));
  printf("Size of float %dbytes\n",sizeof(floattype));
  printf("Size of char %dbytes\n",sizeof(chartype));
  printf("Size of double %dbytes\n",sizeof(doubletype));
  printf("Size of shortint %dbytes\n",sizeof(shortinttype));
  printf("Size of unsignedint %dbytes\n",sizeof(unsignedinttype));
  printf("Size of longint %dbytes\n",sizeof(longlonginttype));
  printf("Size of signed %dbytes\n",sizeof(signedchartype));
  printf("Size of unsignedchar %dbytes\n",sizeof(unsignedchartype));
  printf("Size of longint %dbytes\n",sizeof(longinttype));
  return 0;
}
