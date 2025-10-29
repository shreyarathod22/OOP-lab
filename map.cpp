#include <iostream> 
#include <map> 
#include <string> 
using namespace std; 

int main() 
{ 
    typedef map<int, string> mapType; 
    mapType populationMap; 

    populationMap.insert(pair<int, string>(1234, "Rohan Mehta")); 
    populationMap.insert(pair<int, string>(2222, "Sneha Patil")); 
    populationMap.insert(pair<int, string>(3333, "Karan Shah")); 
    populationMap.insert(pair<int, string>(4444, "Priya Nair")); 
    populationMap.insert(pair<int, string>(9999, "Manish Verma")); 
    populationMap.insert(pair<int, string>(7777, "Nikita Joshi")); 
    populationMap.insert(pair<int, string>(1086, "Vikas Gupta")); 

    mapType::iterator iter; 

    cout << "======== Student Information Database ==========\n"; 
    cout << "\nSize of populationMap: " << populationMap.size() << "\n\n"; 

    for (iter = populationMap.begin(); iter != populationMap.end(); iter++) { 
        cout << iter->first << " : " << iter->second << "\n"; 
    } 

    int PRN; 
    cout << "\nEnter PRN of the student: "; 
    cin >> PRN; 

    iter = populationMap.find(PRN); 
    if (iter != populationMap.end()) 
        cout << PRN << " belongs to " << iter->second << "\n"; 
    else 
        cout << "PRN not found in the database.\n"; 

    populationMap.clear(); 
    return 0; 
}
