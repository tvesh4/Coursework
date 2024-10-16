#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double mean = 0;
double meaner(double data[], double &mean){
	double sum;
	for (int i = 0; i<5; i++){
		sum += data[i];

	}
	mean = sum /5;
	return mean;
}

double sder(double data[], double &mean){
	double sd;
	for (int i = 0; i <5; i++){
		SD += pow(data[i]-mean, 2);
	}
	return sqrt(sd/5)
}

int main(){
	double data[5];
	for (int i = 0; i < 5; i++){
		cin >> data[i]
	}
	cout << "Mean = " << set precision(2) << meaner(data, mean) << endl;
	cout << "Standard Deviation = " << setprecision(2) << sder(data, mean) << endl;
}