#include "triangle.h"


typedef struct Triangle Triangle;

struct Triangle{
int s1;
int s2;
int long1;
};


/**
*classify the length into 1 long side and 2 short side.
**/
void Classify(int a,int b, int c,int *s1,int *s2,int *long1){
  if(a>b&&a>c){
    *long1=a;
    *s1=b;
    *s2=c;
  }
  else if(b>a&&b>c){
    *long1=b;
    *s1=a;
    *s2=c;
  }
  else if(c>b&&c>a){
    *long1=c;
    *s1=b;
    *s2=a;
  }
  
  else
    return 0;
  
  
}

char *checkValid(int a,int b,int c){
  int s1,s2,long1;
  Classify(a,b,c,&s1,&s2,&long1);
  if(s1+s2>long1)
    return "valid";
  else
    return "invalid";
}
    

char *checkType(int a,int b,int c){
  int s1,s2,long1;
  checkValid(a,b,c);
  Classify(a,b,c,&s1,&s2,&long1);
  
  
  if(s1*s1+s2*s2==long1*long1)
    return "right angle";
  else if(s1*s1+s2*s2>long1*long1)
    return "obtuse";
  else if(s1*s1+s2*s2<long1*long1)
    return "accute";
  else
    return "invalid";
}
