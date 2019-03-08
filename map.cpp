// CPP program to demonstrate map
#include <iostream>
#include <map> 
using namespace std; 

typedef map<int ,int> Jodi;


int main() { 

   Jodi dac;
   // All the names are fictitous and bear no relationship with 
   // actual people in the world. 
   dac[1] = 50;
  // dac["Jagga"] = "Mona";
  // dac["Ravan"] = "Laila";
  // dac["Munna"] = "Munni";
  // dac["Mangesh"] = "Babli";

   for(Jodi::iterator it=dac.begin(); it != dac.end(); ++it)
    cout << it->first << " = " << it->second << "\n";
   
   return 0;
}
