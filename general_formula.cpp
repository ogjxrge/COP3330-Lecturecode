#include <iostream>
#include <math.h>
#include <iomanip> 
#include <string>
using namespace std; 
int main(){
 
double a = 0.0, b = 0.0, c = 0.0;
double x_sol1, x_sol2;
double descriminant = 0.0;

string answer = "yes";
string answer2 = "yes";

While (answer.compare(answer2))
{



cout << "please provide the coeffiecent of your quadratic equation" <<endl;
cin >> a >> b >> c; 

descriminant =pow(b,2)-4*a*c;
if (descriminant >=0)
{
    x_sol1= (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    x_sol2= (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    cout << "\nThe two solution for the given equation are: " << endl;
    cout << left << "First solution---> " << setw (4) << right << setprecision (3) << x_sol1 << endl;
    cout << left << "First solution---> " << setw (4) << right << setprecision (3) << x_sol2 << endl;
}
else {
    cout << left << "The given quadratic has no real soultion, the descriminant value is: " << descriminant << endl;
    
}

}
