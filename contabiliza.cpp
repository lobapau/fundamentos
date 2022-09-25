#include<iostream>
using namespace std;

int main()
{
	int PJCB_i=0,PJCB_l;
	float PJCB_x,PJCB_s=0;
	cout<<"ingrese el limite PJCB_l="; cin>>PJCB_l;
	do{
		
	cout<<"ingrese el numero PJCB_x="; cin>>PJCB_x;
	PJCB_i=PJCB_i+1;
	PJCB_s=PJCB_s+PJCB_x;



	}while(PJCB_i<PJCB_l);
	cout<<"Se ingresaron "<<PJCB_l<<" numeros "<< "que sumaron "<<PJCB_s<<endl;
	return 0;



}
