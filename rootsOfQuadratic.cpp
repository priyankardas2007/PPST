#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){ 
int a,b,c; 
cout<<"Enter the value of a,b and c:"<<endl; 
    cin>>a>>b>>c; 
    float d = b*b - 4*a*c; 
    float r1, r2; 
    float k; 
    k= -b/(2*a); 
    if(d>0){ 
        r1 = (-b + sqrt(d)) / (2*a); 
        r2 = (-b - sqrt(d)) / (2*a); 
        cout<<"Roots are real and different."<<endl; 
        cout<<"Root 1 = "<<r1<<endl; 
        cout<<"Root 2 = "<<r2<<endl; 
    } 
    else if(d==0){ 
        r1 = r2 = k; 
        cout<<"Roots are real and same."<<endl; 
        cout<<"Root 1 = Root 2 = "<<k<<endl; 
    } 
    else{ 
        float realPart = k; 
        float imagPart = sqrt(-d) / (2*a); 
        cout<<"Roots are complex and different."<<endl; 
        cout<<"Root 1 = "<<realPart<<" + "<<imagPart<<"i"<<endl; 
        cout<<"Root 2 = "<<realPart<<" - "<<imagPart<<"i"<<endl; 
    } 
    return 0; 
} 
