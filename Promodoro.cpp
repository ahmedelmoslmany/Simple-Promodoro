#include "windows.h" 
#include <iostream>
// Writted by Ahmed_Elmoslmany.

using namespace std;

void break_time();
int Long_break();
void Promodoro_Time();
const int milesecond=1000;
int main() {
	
	
	int promodoro;
	int	period=0;
	int	Long_period=0;
	
	do{
		cout<<"\a1- Start Promodoro period\n";
		cout<<"Press any key to exit...\n";	
		cin>>promodoro;
		if(promodoro==1){
			period++;
			Promodoro_Time();
			
		
			if(period==4){
				cout<<"\aIf you want to start long break time (15 mins) please press enter 1\n";
				int start_break;
				cin>>start_break;
				if(start_break==1){
					period = Long_break();
					Long_period++;
					
				}if(start_break!=1){
					cout<<"\n\nSorry you had press wrong key\n So we need to end a Program\n Your Progress>> "<<"Long_period: "<<Long_period<<" & Period: "<<period<<endl;
					return 0;
				}
		
				
				
			}else{
				cout<<"\aIf you want to start break time (5 mins) please enter 1\n";
				int start_break;
				cin>>start_break;
				if(start_break==1){
					break_time();
				}if(start_break!=1){
					cout<<"\n\nSorry you had press wrong key\n So we need to end a Program\n Your Progress>> "<<"Long_period: "<<Long_period<<" & Period: "<<period<<endl;
					return 0;
				}
			}
			
			
			
		}else{
			cout<<"Long_period: "<<Long_period<<" & Period: "<<period<<endl;
			cout<<"Thanks for using our Promodoro <3";
			return 0;
		}
	}while(1);
	
	
	
	return 0;
}

void Promodoro_Time(){

	system("Color 0C"); // BackGround color 0 is black, C is Text color Red.
	int period_min=26; // Counting from 26 to 1, that mean 25.
	while(--period_min){
		cout<<"Still working until << "<<period_min<<" >> min"<<endl;
		Sleep(milesecond*60);
		system ("CLS"); //Clear Screen to print real time until rest. 
	}
}

void break_time(){
	system("Color 0A"); // BackGround color 0 is black, C is Text color Green.
	int Break=6; // Counting from 6 to 1, that mean 5.
	while(--Break){
		cout<<"Still resting until << "<<Break<<" >> min"<<endl;
		Sleep(milesecond*60);
		system ("CLS"); //Clear Screen to print real time until promodoro. 
	}
}

int Long_break(){
	system("Color 0A"); // BackGround color 0 is black, C is Text color Green.
	int L_Break=16; // Counting from 16 to 1, that mean 15.
	while(--L_Break){
		cout<<"Still resting until << "<<L_Break<<" >> min"<<endl;
		Sleep(milesecond*60);
		system ("CLS"); //Clear Screen to print real time until promodoro. 
	}
	return 0;
}
