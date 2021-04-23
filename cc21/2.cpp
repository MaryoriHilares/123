#include <iostream>
using namespace std;

int main()
{   int a=0;
    int prim_dig=1;
    int seg_dig=1;
    int suma =0;
	while (seg_dig<4000000){
	    a=prim_dig+seg_dig;
	    prim_dig=seg_dig;
	    seg_dig=a;
	    if (seg_dig%2==0)
	     suma=suma+seg_dig;
        cout<<a<<endl;}
	cout<<"La suma total es: "<<suma<<endl;
	return 0;
}
