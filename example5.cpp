#include <iostream> 

using namespace std; 

int main(int argc, char const *argv[])
{
    char charec (65); 
    char none (' '); 
    int count (3); 

    for(int i = 0 ; i < count+2; i++){
        for(int j = 0; j < count ; j++)
        {
            cout << none;    
            if (j == count-1) {
                cout << charec;
                if (i > 0) {
                    charec+=1;
                    cout << charec;
                    charec-=1;
                    if (i>1){
                        charec+=2;
                        cout << charec; 
                        charec-=1;
                        cout << charec;
                        charec-=1;
                    }
                    cout << charec; 
                }
                
            }           
        }
        cout << endl; 
        count -= 1; 
    }
    return 0;
}
