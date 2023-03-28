/*
Kattis - Dog & Gopher
Loop Lab
Updated By: Carson White
CSCI 111
Date: 3/13/23
Read and solve the Kattis problem: https://open.kattis.com/problems/doggopher 
Algorithm Steps:
		1. Read gopher and dog's coordinates
		2. Define a function to find and return the Euclidean distance between the two points
    3. For each gopher hole coordinate:
      3.a find the distance between the gopher position and the hole
      3.b find the distance between the dog position and the hole
      4.c if the dog's distance is larger or equal to twice the distance of gopher, 
          gopher can get away through that hole. 
          4.c.1 Stop testing other holes.
    4. If no safe hole is found, the gopher cannot escape.
*/




#include <iostream>
#include <cassert>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

// Function prototypes
// Function finds the the Euclidean distance given two points (x1, y1) and (x2, y2)
float distance( float x1,  float y1,  float x2,  float y2);
