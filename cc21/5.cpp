#include<iostream>
using namespace std;
int mcd(int num1,int num2){
	int comun =1;
	for(int i=1;i<=num1;i++)
	{
		if((num1%i==0)&& (num2%i==0))
		     comun=i;
	}
	return comun;
}

int mcm(int num1,int num2)
{
	return num1*num2/ (mcd(num1,num2));
}

int main(){
	int num1=1;
	int mayor=20;	
	int pequenio=0;
	for(int i=2;i<mayor;i++){
		pequenio=mcm(num1,i);
		num1=pequenio;
	}
	cout<<pequenio<<endl;

	return 0;
}
