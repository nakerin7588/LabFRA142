#include <iostream>
using namespace std;
int main(){
    // std :: cout << "hello" << std::endl;
    // std :: cout << "bye" << std::endl;
    int i = 2;
    int j;
    float f = 0.12;
    double d = 0.12;
    char c = 'a';
    bool b = false;

    // cout << "hello" << endl;
    // printf("hello\n");
    /* Checking if i is equal to 0. If it is, it will print bye. */
    if(i == 0){
        cout << "bye" << endl;
    }
    // for(int j = 0; j < 10; j++){
    //     cout << j << endl;
    // }
    // while(i != 0){
    //     cout << i << endl;
    //     i--;
    // }
    do
    {
        cout << "hello" << endl;
        i = i -1 ;
    } while (i != 0);
    

    return 0;
}