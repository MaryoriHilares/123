#include <iostream>
#include <math.h>
using namespace std;
int numcifras(int a){
	int b=1,c=0;
    while (a>b)
	{
		c++;
		b=b*10;
		 } 
		
	return  c;
}

bool espalindromo(int num){
	int cifras=6;
    int u=num%10;
    int d=(num/10)%10;
    int c=(num/100)%10;
    int um=(num/1000)%10;
    int dm=(num/10000)%10;
    int cm=(num/100000)%10;
    if(u==cm&&d==dm&&c==um)
      return true;
    else{return false;}
	}




int main()
{ int b=0;
  int a=0;
  for(int i=900 ; i<1000;i++)
	  {for (int j=900;j<1000;j++){
	      a=i*j;
	       if(espalindromo(a)== true && a!=990009){b=a;}
		   }        
	  }
	cout<<b;
	return 0;
}
