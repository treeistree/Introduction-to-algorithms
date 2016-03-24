#include <iostream>
using namespace std;


void bubble_sort(int *a, int a_size){
    int i = 0, j = 0;
    for (;i<a_size; i++){
        for (j = a_size-1;j>i; j--){
            if (a[j]<a[j-1]){
                int k = a[j];
                a[j] = a[j-1];
                a[j-1] = k;
            }
        }
    }
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

    bubble_sort(a, 17);

    for (int i=0; i< 17; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
