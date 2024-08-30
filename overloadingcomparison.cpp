//overloading comparison operator
#include<iostream>
using namespace std;

class Distance{
		private:
		int feet;
		float inches;
		public:
			Distance():feet(0),inches(0.0){
			}
			Distance(int ft,float in){
				feet=ft;
				inches=in;
			}
			void getdata(){
				cout<<"enter feet"<<endl;
				cin>>feet;
				cout<<"enter inches"<<endl;
				cin>>inches;
				
			}
			void showdis(){
				cout<<feet<<"/"<<inches<<endl;
				}
				bool operator < (Distance d2){
					float bf1= feet + inches/12;
					float bf2=d2.feet + d2.inches/12;
					return(bf1<bf2) ? true:false;
					
				}
};
int main(){
	
	Distance d1;
	d1.getdata();
	Distance d2(12,8.8);
	cout<<"\ndis1 = ";
	d1.showdis();
	cout<<"\ndis2 = ";
	d2.showdis();
	if (d1<d2){
		cout<<"\nd1 is less than d2";
	}
	else{
		cout<<"\nd2 is less than d1";
	}
	cout<<endl;
		return 0;
	
	}
	
