#include <iostream>

using namespace std;

int linearSearch(int list[], int size, int target){
    for(int i = 0; i < size; i++){
        if(list[i] == target){
            cout << "target at index " <<i << endl;
            return i;
        }
    }
    cout << "didn't find target" << endl;
    return -1;
}
int main(){
    int integerArray[] = {1,2,3};
    linearSearch(integerArray, 3, 2);
}