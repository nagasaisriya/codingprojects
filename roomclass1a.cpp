
#include <iostream>
// create a class room and calculate area and volume
using namespace std;
class room{
	private:
		float l,b,h;
	public:
		void input()
		{
			cout<<"Enter length,breadth.height:"<<endl;
			cin>>l>>b>>h;
		}
		void area(){
			float area=l*b;
			cout<<"Area="<<area<<endl;
		}
		void volume(){
			float vol=l*b*h;
			cout<<"Volume"<<vol;
		}
};

int main()
{
    room r;
    r.input();
    r.area();
	r.volume();
    return 0;
}
