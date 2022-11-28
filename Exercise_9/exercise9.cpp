#include <fstream>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

double movAvg(double x, double y, double z) {
    return (x + y + z) / 3;
}

int main(){
    vector<int> temperature;
    vector<string> month;
    vector<double> movingAvg;
    vector<double> weightAvg;
    ifstream file;
    ofstream output;
    file.open("weather.csv.txt");
    
    if (file.is_open()) {
        string line;
        string temp;
        string mon;
        getline(file, line);
        while (!file.eof()) {
            getline(file, mon, ',');
            month.push_back(mon);
            getline(file, temp, '\n');
            temperature.push_back(stoi(temp));
        }
        file.close();
    }

    for (int i = 0; i < 2; i++) {
        movingAvg.push_back(0);
    }
    
    for (int i = 2; i < month.size(); i++) {
        double num = movAvg(temperature[i-2],temperature[i-1],temperature[i]);
        movingAvg.push_back(num);
    }
    
    for (int i = 0; i < 2; i++) {
        weightAvg.push_back(0);
    }
    
    for (int i = 2; i < month.size(); i++) {
        double weight1 = temperature[i-2] * 1;
        double weight2 = temperature[i-1] * 2;
        double weight3 = temperature[i] * 3;
        double weighAvg = (weight1 + weight2 + weight3) / 6;
        weightAvg.push_back(weighAvg);
    }
    
    output.open("output.txt");
    output << "Mon" << "\t\tTemp" << "\tMoving average" << "\t\tWeighted average" << "\n";
    for (int i = 0; i < month.size() - 1; i++) {
        output << month[i] << "\t\t" << temperature[i] << "\t\t" << movingAvg[i] << "\t\t\t\t\t" << weightAvg[i] << "   \n";
    }
    output.close();
    
    return 0;
}