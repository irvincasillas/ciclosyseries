#include<iostream>
#include<cmath>

using namespace std;
void menu();
float factorial(float n);
void seno(int x);
void coseno(int x);
void logaritmo(int x);

int main()
{
	int n, x;
	do{
		menu();
		cin >> n;
		if (n==1){
			cout<<"Ingresa tamaño";
			cin>>x;
			seno(x);
		}
		else if (n==2){
			cout<<"Ingresa tamaño";
			cin>>x;
			coseno(x);
		}
		else if (n==3){
			cout<<"Ingresa tamaño";
			cin>>x;
			logaritmo(x);
		}
	}while(n!=0);
}

	void seno(int x)
	{
		double sen=x , y=3.0;
		
		for(int i=2;i<=99;i++)
			{
				if(i%2==0)
					sen-=(pow(x,y))/factorial(y);
				else
					sen+=(pow(x,y))/factorial(y);
			y+=2.0;
			}
		cout<<"Seno("<<x<<")="<<sen;
	}
	
	void coseno(int x)
	{
		double cosen=1.0 , y = 2.0;
		
		for(int i=2;i<=99;i++)
			{
				if(i%2==0)
					cosen-=(pow(x,y))/factorial(y);
				else
					cosen+=(pow(x,y))/factorial(y);
			y+=2;
			}
		cout<<"Coseno("<<x<<")="<<cosen;
	}

	void logaritmo(int x)
	{
		double constante=((x-1.0)/x);
		double ln=constante;

		for(int i=2;i<=99;i++)
			ln+=(1.0/i)*(pow(constante,i));
		cout<<"Ln("<<x<<")="<<ln;
	}

	float factorial(float n)
	{
		float fac=1.0;
		for(int i=2;i<=n;i++)
			fac*=i;
		return fac;
	}
void menu(){
	cout<<"1. Seno\n";
	cout<<"2. Coseno\n";
	cout<<"3. Logaritmo Natural\n";
	cout<<"0. Salir\n";
	cout<<"Opcion:";
}
