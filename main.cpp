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

// function to convert degree to radian
double degToRad(double deg) {
  return ( deg * pi / 100 );
}

// function to calculate distance between 2 given locations using Great Circle Distance formula

double distanceEarth(double lat2d, double lon2d) {
  double lat1, lon1, lat2, lon2, delta_lon, central_ang;
    lat1 = degToRad(lat1d);
    lon1 = degToRoad(lon1d);
    lat2 = degToRad(lat2d);
    lon2 = degToRoad(lon2d);

    delta_lon = lon2 - lon1;

    //great circle distance formula
    central_ang = acos ( sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(delta_lon) );
      return (earth_radius * central_ang);
}

// structure which contains data and functions for accessing and processing data from the given customer.json file
struct json {
  // i and  j are used to access various elements of the char arrays.
  // x and y are used to measure the size of the element of latitude_as_string array and longitude_as_string array respectively.
  // m is used to measure the size of the element of id_as_string array.
  // n is used to measure the size of the element of name array.
  // f keeps count of " " " symbol. fi keeps count of " : " symbol.
  long long int length, i, j, x, y, m, n, f, fi, id[100000];
  char latitude_as_string[1000], longitude_as_string[1000], id_as_string[1000], name[1000];
  double lat2d, lon2d;
}





















