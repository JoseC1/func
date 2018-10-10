#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h> //exit, EXIT_FAILURE
#include <iomanip> //Used to manipulate the input output (makes it look cleaner) 

using namespace std;
const double pi = 3.14159;

double get_double(string prompt)
{
    cout << prompt << endl;//Prints the prompt 
    double answer; //This will hold the answer inputted by the user 
    cin >> answer; //Getting the users answer
    if(cin.fail() || answer < 0)
    { 
    exit (1); //ERROR user did not enter a correct answer
    }
    return answer;
}

double sphere_volume(double r)
{
    //Volume = 4/3 pi r^3
    return ((4.0/3.0) * pi * pow(r,3)); 
}

double sphere_surface(double r)
{
    //Surface Area = 4pi r^2
    return (4*pi*pow(r,2));
}

double cylinder_volume(double r, double h)
{
    //Cylinder_Volume = Pi *r^2*h
    return (pi * pow(r,2) * h);
}

double cylinder_surface(double r, double h)
{
    //Cylinder Surface Area = 2pi *r *h + 2 pi * r^2
    return (2*pi *r*h + (2 *pi * pow(r,2)));
}

double cone_volume(double r, double h)
{
    //Cone Volume = pi *r^2 *h/3
    return (pi * pow(r,2) * (h/3.0));
}
double cone_surface(double r, double h)
{
    //Cone Surface = pi * r(r+ sqrt(h^2+r^2))
    return (pi * r *(r+ sqrt(pow(h,2) + pow(r,2))));
}

int main()
{
    double height;
    double radius;
    
    cout << "Welcome to my Math mini calculator Enter A Height and Radius" << endl;
    cout << "And I will tell you the volume and surface area of a Sphere, Cylinder, and Cone\n" << endl;
    radius = get_double("Please Enter Your Radius");
    height = get_double("Please Enter Your Height");

    cout << setprecision(4);//Limits the amount of decimal places 
    cout << "The Volume of your sphere is: " << sphere_volume(radius) << endl;
    cout << "The Surface Area of Your Sphere is: " << sphere_surface(radius) << endl;    
    cout << "The Volume of your cylinder is: " << cylinder_volume(radius,height) << endl;
    cout << "The Surface Area of Your Cylinder is: " << cylinder_surface(radius, height) << endl;
    cout << "The Volume of your Cone is: " << cone_volume(radius, height) << endl;
    cout << "The Surface Area of Your Cone is: " << cone_surface(radius,height) << endl;


    return 0;
}



