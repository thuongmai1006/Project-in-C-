//Thuong Mai
/*A Probabilistic Weather Model predicts the probabilities of the weather being nice, cloudy, and rainy using matrices and vectors calculations. 
 The program is an example of the multiplication of 3x3 matrix and 3x1 matrix.*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
float A[3][3]={0.5,0.5,0.25,
			   0.25,0,0.25,
			   0.25,0.5,0.5};
float x_today[3][1]={1,0,0};
cout<<"\n The probability matrix A is:" <<endl;
for (int i=0;i<3;i++)
{
	for (int k=0;k<3;k++)
	{
		cout<<A[i][k]<<"      ";
	}
	cout<<endl;
}
cout<<"\n The percentage of the weather prediction being nice, cloudy, raining respectively is: "<<endl;
cout<<"\n Day 0: "<<endl;
for ( int i=0;i<3;i++)
{
	for ( int j=0; j<1; j++)
	{
		cout<<x_today[i][j]*100<<"%"<<endl;
	}
}
float x_tomorrow[3][1];
int time=0;
while(time <50)
{	
time++;
cout<<"\n Day "<<time<<endl;
for ( int i=0;i<3; ++i)
{
	for ( int j=0; j<1; ++j)
	{	
		for (int k=0;k<3;++k)
		{
			//cout<<setw(10)<<"A is "<<A[i][k]<<setw(10)<<"today is: "<<x_today[k][j]<<endl;
			x_tomorrow[i][j] += A[i][k]*x_today[k][j];
		}
		cout<<x_tomorrow[i][j]*100<<"%"<<endl;
	}
}

for ( int i=0;i<3; i++)
{
	for ( int j=0; j<1; j++)
	{
			x_today[i][j]=x_tomorrow[i][j];
			x_tomorrow[i][j]=0;
		
	}
}
	
}
return 0;
}

