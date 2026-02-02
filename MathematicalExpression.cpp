
// A program to calculate area of circle
#include <iostream>
using namespace std;
int main() {
    float r , A;
    cout << "Enter the radius of the circle: "<<endl;
    cin>> r;
    A = 3.14 *r*r;
    cout<< "Area of circle is : " << A<<endl;
    return 0;
}
// Another program to calculate area of rectangle

#include <iostream>
using namespace std;
int main(){
  float l, b, A ;
  cout<< "Enter l: " << endl;
  cin>> l ;
  cout<< "Enter b: "<< endl;
  cin>> b ;
  
  A = l*b;
  cout<< "Area of rectangle: "<< A << endl;
  return 0;
}

// A program to calculate area of  equilateral triangle
#include <iostream>
#include <cmath>
using namespace std;
int main(){
  float s, A;
  cout<< "Enter side of triangle: " << endl;
  cin>> s ;
    A = (sqrt(3)/4)*s*s;
    cout<< "Area of equilateral triangle: "<< A << endl;
    return 0;
}

// a program to calculate area of square
#include <iostream>
# include <cmath>
using namespace std;
int main(){
  float s, A ;
  cout<< "Enter s: " << endl;
  cin>> s ;
  
  A = s*s;
  cout<< "Area of square : "<< A << endl;
  return 0;
}
// a program to calculate volume of cube
#include <iostream>
# include <cmath>
using namespace std;
int main(){
  float s, A ;
  cout<< "Enter s: " << endl;
  cin>> s ;
  
  A = s*s*s;
  cout<< "Volume  of cube : "<< A << endl;
  return 0;
}
// a program to calculate area of cylinder
#include <iostream>
# include <cmath>
using namespace std;
int main(){
  float r, A ,l;
  cout<< "Enter r: " << endl;
  cin>> r;
  cout<< "Enter l: " << endl;
  cin>> l;
  A=3.14*r*r*l;
  cout<< "Volume  of cylinder : "<< A << endl;
  return 0;
}
