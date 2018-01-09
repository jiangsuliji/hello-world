#include <iostream>

using namespace std;
class Box {
	private:
		double h;
		double l;
		double b;

	public:
		double getVolume(){
			return h*l*b;
		}
		void setH(double hnew){
			h = hnew;
		}
		void setL(double lnew){
			l = lnew;
		}
		void setB(double bnew){
			b = bnew;
		}
	    Box operator+(const Box& bb){
			Box box;
			box.l = this->l + bb.l;
			box.h = this->h + bb.h;
			box.b = this->b + bb.b;
			return box;
		}	

};

int main(){
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setL(6.0); 
   Box1.setB(7.0); 
   Box1.setH(5.0);
 
   // box 2 specification
   Box2.setL(12.0); 
   Box2.setB(13.0); 
   Box2.setH(10.0);
 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;



}


