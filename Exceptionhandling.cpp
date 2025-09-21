#include<iostream>
using namespace std;
double division(int a, int b) {
   if( b == 0 ) {
   throw "Division by zero condition!";
   }
   return (a/b);
}
int main() {
	try {
	     int a,b;
                 cout <<"Enter the number(a,b):";
                 cin>>a>>b;
                 cout<<"Result:"<<division(a,b)<<endl;
	} catch (const char* e){
	     cout<<"Error:"<<e<<endl;
	}
          
   return 0;
}
