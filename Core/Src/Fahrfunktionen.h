#pragma once

#include <stdio.h>
#include <iostream>

void test()
{
    std::cout << "Test bestanden!" << std::endl;    //printf("Test bestanden!");
}

void drive()
{
    double speed;
    //calculate enginespeed out of received speeddata
    //acceleration for engine on gpio pins
    std::cout << "I'm drivin" << std::endl;    //printf("I'm drivin");

}

void emergency_brake()
{
    /*Untersuchen ob es verschiedene Möglichkeiten gibt zu bremsen und ob diese den Throttle überschreibt*/
    
    //create connection between brake signals
    std::cout << "Emergency! I'm brakin." << std::endl;     //printf("Emergency! I'm brakin.");
}

void brake()
{
    /*Untersuchen ob es verschiedene Möglichkeiten gibt zu bremsen und ob diese den Throttle überschreibt*/
    
    //create connection between brake signals
    std::cout << "This is brake_func" << std::endl;         //("This is brake_func");
}

void steer()
{
    std::string direction = "straight";
    //calculate steering angle
    //set steering angle to step engine
    std::cout << "Driving " << direction << std::endl;
}