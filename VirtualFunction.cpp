#include <iostream>
using namespace std;  
  
  class Base{
  
	public:
	virtual	void display(){              //virtual function declared
	cout<<"base class"<<endl;
	}  

  };


	class der1 : public Base{
	public:
		void display(){
			cout<<"derive class 1"<<endl;
		}  

  };

	class der2 : public Base{
	public:
		void display(){
			cout<<"derive class 2"<<endl;
		}  
	
  };
  
  
int main(){
	Base b;
	der1 d1;
	der2 d2;
	
	
	Base *ptr;
	
	ptr = &b;
	ptr ---> display();

	ptr = &d1;
	ptr ---> display();
	
	ptr = &d2;
	ptr ---> display();

}
