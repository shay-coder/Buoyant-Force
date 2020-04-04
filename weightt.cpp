	#include <iostream>
	#include <cmath>
	using namespace std;
	
	int main()
	{
		double weight,radius;
		cout << "ENTER WEIGHT OF BODY AND RADIUS OF BODY :" << endl;
		cout << "WEIGHT ( in pounds ) = ";
		
		cin >> weight;
		cout << "RADIUS ( in feet) = ";
		cin >> radius;
		
		int y = 62.4;
		double V = (4/3) * (3.14) * (pow( radius, 3));  // calculate volume
		int Force = (V) * (y);						// calculate buoyant force
		
		if ( Force >= weight)
		{
			cout << "THE BODY WILL FLOAT";
			
		}
		else {
			cout << "BODY WILL SINK";
		}
		return 0;
	}
		
