#include <iostream>
#include <tuple>
using namespace std;
void callByValue(int var);
void callByReference(int *var);
tuple<int, int> tup(int *var1, int *var2);
void change(int *var1, int *var2);
void chane_arr(int *arr1, int *arr2);
int main()
{
    // int a = 5;
    // int *b = NULL;
    // b = &a;
    // *b = 3;
    // cout << &a << " " << a << " " << b << endl;

    // int var1 = 1;
    // int var2 = 2;

    // callByValue(var1);
    // callByReference(&var2);
    // cout << var1 << " " << var2 << endl;

    // int var1 = 10 , var2 = 5;

    // tie(var1,var2) = tup(&var1,&var2);
    // cout << var1 << " " << var2 << endl;

    // int var1 = 5;
    // int var2 = 10;
    // change(&var1,&var2);
    // cout << var1 << " " << var2 << endl;

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    chane_arr(arr1,arr2);
    for(int i = 0; i < 5; i++){
        cout << arr1[i] << " " << arr2[i] << endl;
    }
    return 0;
}
void callByValue(int var)
{
    var = 100;
}
void callByReference(int *var)
{
    *var = 200;
}
tuple<int, int> tup(int *var1, int *var2)
{
    return make_tuple(*var2, *var1);
}
void change(int *var1, int *var2)
{
    int *a = NULL;
    a = var1;
    *var1 = *var2;
    *var2 = *a;
}
void chane_arr(int *arr1, int *arr2)
{ 
    // arr2 = arr1;
    // for(int i = 0; i < 5; i++) {
    //     arr2[i] = arr3[i];
    // 
    // for (int i = 0; i < 5; i++) {
    //     arr2 = arr1 + i;
    // }
    for (int i = 0; i < 5; i++){
        *(arr2 + i) = *(arr1 + i);
    }
}
