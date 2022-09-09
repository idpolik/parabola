#include "functions.hpp" 
#include "variables.hpp"
#include <iostream>
#include <Windows.h>

std::string funcs::getDirection(double a)
{
    if (a == 0)
        return "Unable to find direction as a = 0 (??)";
    
    if (a < 0)
        return "This function opens downwards.";
    
    if (a > 0)
        return "This function opens upwards.";
        
}

std::string funcs::getWidthPara(double a)
{

    if (a < 1)
    {
        return "This parabola is wider than x^2.";
        if (a == 0)
            return "Unable to find direction as a = 0 (??)";
    } 

    else if (a == 1)
    {
        return "This parabola is a normal width.";
    }
    else if (a > 1)
    {
        return "This parabola is narrower than x^2";
    }
        
}   

double funcs::getAxisOfSym(double a, double b, double c)
{
    return (-b / (2 * a));

}
std::string funcs::getVertex(double a, double b, double c) // returns vertex as str 
{
    return "Vertex: (" + std::to_string( (-b / (2 * a)) ) + ", " + std::to_string( (((4 * a * c) - (b * b)) / (4 * a)) ) + ")";
  
}


std::string funcs::getRoots(double a, double b, double c )
{
   // (-b + -sqrt(b ^ 2 - 4ac)) / 2a

    double x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    double x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);


    return "Root 1: " + std::to_string(x1) + "\nRoot 2: " + std::to_string(x2);
}