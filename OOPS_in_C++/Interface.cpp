#include <bits/stdc++.h>
using namespace std;


//Base class (INTERFACE)
//When we need to some no of methods with different different implementations
//for different different tasks we define an interface 
//interface help us when we want to use a same function for many tasks with many implementations
class Monitor{
	public:
		virtual string GetDimensions() = 0;
		virtual void SetResolution(int height, int width) = 0;
	protected:
		int height, width;
};

//Derived class
class Dell:public Monitor{
	public:
		void SetResolution(int height, int width){
			this->height = height;
			this->width = width;
		}
	string GetDimensions(){
		string strdim = to_string(this->height) + "x" + to_string(this->width);
	}
};

//Derived class
class Samsung:public Monitor{
	public:
		void SetResolution(int height, int width){
			this->height = height;
			this->width = width;
		}
	string GetDimensions(){
		string strdim = to_string(this->height) + "x" + to_string(this->width);
	}
};

int main(){
	Dell dellmon;
	Samsung sammon;
	dellmon.SetResolution(1080,720);
	string ans = dellmon.GetDimensions();
	cout << ans << endl;
	sammon.SetResolution(1920,1080);
	ans = sammon.GetDimensions();
	cout << ans << endl;
return 0;
}