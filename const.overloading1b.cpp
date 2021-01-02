#include <iostream>
// create a class room and calculate area and volume
using namespace std;
class room{
		public :
		void area(float l,float b)
		{
		    float area=l*b;
		    cout<<"area of rectangle="<<area<<endl;
		}
		void area(int s){
		    int area=s*s;
		    cout<<"AREA OF SQUARE="<<area<<endl;
		}
		void volume(float l,float b,float h){
			float vol=l*b*h;
			cout<<"Volume"<<vol;
		}
	};
int main()
{
    room r;
    float l,b,h;
    int s;
    cout<<"ENTER LEN,BRE,HEIGHT,SIDE:";
    cin>>l>>b>>h>>s;
    r.area(l,b);
    r.area(s);
    r.volume(l,b,h);
}
