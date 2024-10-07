#include <iostream>

using namespace std;

int linearSearch(int list[], int size, int target){
    for(int i = 0; i < size; i++){
        if(list[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){

}