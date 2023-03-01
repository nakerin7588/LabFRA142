#include <iostream>
using namespace std;
void change(int *var1,int *var2,int count);
int main()
{
    int var1[] = {1,2,3,4,5,6};
    int var2[] = {};
    int count_var1 = sizeof(var1)/sizeof(int);
    change(var1, var2,count_var1);
    for(int i=0;i<count_var1;i++){
        cout << var2[i] << endl;
    }
    return 0;
}

void change(int *var1,int *var2,int count)
{
    for(int i = 0; i < count; i++){
        *(var2+i) = *(var1+i);
    }
}