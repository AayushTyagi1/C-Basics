#include <iostream>
using namespace std;
class Box {
   protected:
      double width;
};
class SmallBox:Box { // SmallBox is the derived class.
   public:
      void setWidth( double wid );
      double getWidth( void );
};
double SmallBox::getWidth(void) {
   return width ;
}
void SmallBox::setWidth( double wid ) {
   width = wid;
}
int main() {
   SmallBox box;
   box.setWidth(5.0);
   cout << "Width of box : "<< box.getWidth() << endl;
   return 0;
}
