#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector <int> looseSock ={10, 20, 20, 10, 10, 30, 50, 10, 20};
    int compareValue, matchedSocks= 0;
    bool matchFound;

    for(int x=0; x< looseSock.size(); x++){
        if(x != (looseSock.size()- 1 )){ //prevent incrementing last element
            compareValue= x++; //move to next element
            matchFound= false;
            // search vector
            while(matchFound == false) {
                //check for match
                if(looseSock[x] == looseSock[compareValue]){ 
                    matchFound= true;
                    matchedSocks ++;
                    //delete match found
                    looseSock.erase(looseSock.begin()+compareValue);

                    } else {
                        matchFound= false;
                        compareValue ++; //next position
                    } //end of nested if

            }//end while 

        } else {
            compareValue= 0; //reset compare position
        }
    }//end for
    cout<< "Matching pair found is "<< matchedSocks<< endl;
    
return 0;
}