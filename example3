#include <iostream>

using namespace std; 

class test
{
    public: 
        string name[5];
        int id[5]; 
};

test ttest; 


  

int main(int argc, char const *argv[])
{
    ttest.name[0] = "Tom"; 
    ttest.name[1] = "Jeff";
    ttest.name[2] = "John";
    ttest.name[3] = "Eve";
    ttest.name[4] = "Kate";

    ttest.id[0] = 1000; 
    ttest.id[1] = 2000; 
    ttest.id[2] = 3000; 
    ttest.id[3] = 4000; 
    ttest.id[4] = 5000; 
    string xname = ttest.name[2]; // data
    string *nname; // pointer var
    nname = &xname;

    int idd = ttest.id[2]; 
    int *nid; 

    nid = &idd; 
    cout << "Test Pointer\n" << endl; 
    cout << *nname << "\t";
    cout << *nid << endl; 
    cout << "--------------------------"<< endl;

    cout << "\nTest Array\n\n"; 
    int count = sizeof(ttest.name)/sizeof(*ttest.name) ; // Length of array
    for(int i = 0; i < count; i++)
    {
        cout << ttest.name[i] << "\t" << ttest.id[i] << endl; 
    }
    cout << "--------------------------"<< endl;
    return 0;
}
