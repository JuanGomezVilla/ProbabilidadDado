#include <iostream>
#include <ctime>
using namespace std;

int getRandomNumber(int min, int max){
    return rand()%(max - min + 1) + min;
}

int main(){
    srand(time(NULL));

    int results[6] = {0};
    int tiradas = 40000;

    /*
    
    Para 400000000 tiradas

    1 -> 16.6698%
    2 -> 16.6717%
    3 -> 16.6657%
    4 -> 16.6638%
    5 -> 16.6645%
    6 -> 16.6645%
    
    */

    for(int i=0; i<tiradas; i++) results[getRandomNumber(1, 6) - 1]++;


    for(int i=0; i<6; i++) cout << (i+1) << " -> " << (static_cast<double>(results[i]) / tiradas)*100 << "%" << endl;

    cout << endl;
    

    return 0;
}