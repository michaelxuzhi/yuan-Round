#include<iostream.h>
int main()
{
	float r,pi,C,S;
	pi=3.14;
	cout<<"请输入r的值："<<endl;
	while(cin>>("%d",&r)!=EOF)
	cin>>r;
	C=2*pi*r;
	S=pi*r*r;
	cout<<"C等于:"<<C<<endl;
	cout<<"S等于:"<<S<<endl;
	return 0;
}