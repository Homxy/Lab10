#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    int i=1;
    double init, inter,year,interest,total;
	cout << "Enter initial loan: ";
	cin>>init;
	cout << "Enter interest rate per year (%): ";
	cin>>inter;
	cout << "Enter amount you can pay per year: ";
	cin>>year;
    
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for(;init>0;){
	    cout << fixed << setprecision(2); 
	    interest= init*(inter/100);
	    total=init+interest;
	    cout << setw(13) << left << i; 
	    cout << setw(13) << left << init;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    if(year<=total){
	        cout << setw(13) << left << year;
	        init=total-year;
	        cout << setw(13) << left << init; 
	    }
	    else{
	        cout << setw(13) << left << total;
	        init=0;
	        cout << setw(13) << left << init;
	    }

	    cout << "\n";	
	    i++;
	}
	
	return 0;
}
