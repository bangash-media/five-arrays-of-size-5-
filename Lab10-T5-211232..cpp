#include <iostream>

using namespace std;

int factorials(int i); //function declaration for factorials

int main() 
{
	//variables declaration
	int number[5]={0,1,2,3,4};
	int square[5];
	int cube[5];
	int fact[5];
	int sum[5];
	int total;
	
	for(int i=0;i<5;i++) //loop for storing the values in arrays
	{
	square[i]=i*i;
	cube[i]=(i*i*i);
	fact[i]=factorials(i);
	sum[i]=number[i]+square[i]+cube[i]+fact[i];
	}
	
	//display arrays
	for(int i=0;i<5;i++)
	cout<<"number["<<i<<"]= "<<number[i]<<endl;
	for(int i=0;i<5;i++)
    cout<<"square["<<i<<"]= "<<square[i]<<endl;
    for(int i=0;i<5;i++)
	cout<<"cube["<<i<<"]= "<<cube[i]<<endl;
	for(int i=0;i<5;i++)
	cout<<"factorial["<<i<<"]= "<<fact[i]<<endl;
	for(int i=0;i<5;i++)
	cout<<"Sum["<<i<<"]= "<<sum[i]<<endl;
	
	for(int i=0;i<5;i++)//loop for grand sum
	total=total+sum[i];
	cout<<"\n\nG R A N D    S U M  =  "<<total<<endl<<endl;
	
	
	return 0;
}
int factorials(int i) //function defination for factorial call.
{
	int result=1;
	int j=1;
	while (j<=i) //while loop for factorial
	{
		result=result*j;
		j++;
	}
	return result;
}
