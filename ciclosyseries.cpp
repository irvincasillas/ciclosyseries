#include<iostream>
#include<cmath>

using namespace std;
int factorial(int n);
void seno(int lim, int x);
void coseno(int lim, int x);
void logaritmo(int lim, int x);

int main()
{
	int n,lim;
	float x;
	do
	{
		do
		{
			cout<<"1. Seno\n";
			cout<<"2. Coseno\n";
			cout<<"3. Logaritmo Natural\n";
			cout<<"0. Salir\n";
			cout<<"Opcion:";
			cin>>n;
			
		}while((n<0)||(n>3));
		
		if(n==0)
			cout<<"Bye bye";
		else
		{
			cout<<"Limite=";
			cin>>lim;
			cout<<"x=";
			cin>>x;
			if(n==1)
				seno(lim,x);
			else
				if(n==2)
					coseno(lim,x);
				else
					logaritmo(lim,x);
		}
		cout<<"\n \n";
	}while(n!=0);
}

	void seno(int lim, int x)
	{
		float sen=x;
		int flag=3;
		
		for(int i=2;i<=lim;i++)
			{
				if(i%2==0)
					sen-=(pow(x,flag))/factorial(flag);
				else
					sen+=(pow(x,flag))/factorial(flag);
			flag+=2;
			}
		cout<<"Seno("<<x<<")="<<sen;
	}
	
		void coseno(int lim, int x)
	{
		float cosen=1.0;
		int flag=2;
		
		for(int i=2;i<=lim;i++)
			{
				if(i%2==0)
					cosen-=(pow(x,flag))/factorial(flag);
				else
					cosen+=(pow(x,flag))/factorial(flag);
			flag+=2;
			}
		cout<<"Coseno("<<x<<")="<<cosen;
	}

	void logaritmo(int lim, int x)
	{
		float constante=((x-1.0)/x);
		float ln=constante;
		
		for(int i=2;i<=lim;i++)
			ln+=(1.0/i)*(pow(constante,i));
		cout<<"Ln("<<x<<")="<<ln;
	}

	
	int factorial(int n)
	{
		int fac=1;
		
		for(int i=2;i<=n;i++)
			fac*=i;
		return fac;
	}