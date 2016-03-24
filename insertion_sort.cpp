#include <iostream>
using namespace std;

//插入排序
void insertion_sort(int *a, int a_size){
    for (int j = 1; j<a_size; j++){
        int key = a[j];
        int i = j-1;
        while (i>=0 && a[i]>key){
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}

int main(void){
    int a[] = {1,5,3,8,2,9,5,3,9,4,7,9,3,6,0,2,5};

    insertion_sort(a, 17);

    for (int i=0; i< 17; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
