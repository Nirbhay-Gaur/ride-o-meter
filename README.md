# Ride-O-Meter

> Given GPS co-ordinates(in degrees) of a person who needs a cab and co-ordinates of all the cabs in the city stored in a text file in JSON format, this program will find the user-id and name of all the cab drivers available in 50 km proximity.

## Instruction to run the program

- Compile the code using cmd: `g++ main.cpp`. 
- After successful compilation, run it along with passing the file name
  customers.json using cmd: `./a.out ./customers.json`
- A new file named answers.json will be created on the same directory where the
  code and customers.json file is existing.

## Approach Used
- Obtain latitude and longitude of each cab in string format along with their
user-id and name from the JSON encoded input file.
- Convert latitude and longitude of the cab present in string format to double.
-  Convert latitude and longitude of both, the user and the cab present in
degrees to radians.
- Calculate distance between the user’s location and the cab using Great Circle
Distance formula.
- If distance is found to be less than or equal to 50 kms then output the user-
id and name of the cab driver to a new file else take no action.
