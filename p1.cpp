#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

void getVal(ifstream& reader, string& i, float& p)
{
reader >> i >> p;


}


int main ()
{
string item = "";
float price = 0.0, total = 0.0;


ifstream reader;
reader.open("food.txt");

getVal (reader, item, price);
while (reader)
{
  total += price;
cout << item << " $" << fixed << showpoint << setprecision(2) <<price << endl;

getVal(reader, item , price);
}


cout << "total cost: $" << fixed << showpoint << setprecision(2) << total;



  return 0;
}


