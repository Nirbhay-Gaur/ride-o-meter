// Obtain latitude and longitude of each cab in string format along with their user-id and name from JSON encoded input file.

// Convert latitude and longitude of the cab present in string format to double.

// Convert latitude and longitude of both user and cab present in degrees to radians.

// Calculate distance between the user's location and the cab using Great Circle Distance formula.

// If distance is found to be less than or equal to 50kms then output the user-id and name of the cab driver to a new file else take no action.

#include <bits/stdc++.h>
using namespace std;

// latitude and longitude of the customer who needs a cab
#define lat1d 12.9611159
#define lon1d 77.6362214

// values of pi and earth radius
#define pi 3.14159265358979323846
#define earth_radius 6371.0

ifstream customer_list ("customer.json");
ofstream out ("answer.json");
