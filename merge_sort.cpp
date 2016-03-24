#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void Merge(int *a, int st,int mid, int en){
    int n1 = mid-st+1;
    int n2 = en-mid;
    int *l = (int *)malloc(sizeof(int)*(n1+1));
    int *r = (int *)malloc(sizeof(int)*(n2+1));

    for (int i=0; i<n1; i++){
        l[i] = a[st+i];
    }
    for (int i=0; i<n2; i++){
        r[i] = a[mid+i+1];
    }

    l[n1] = 10000;
    r[n2] = 10000;

    int i = 0;
    int j = 0;

    for(int k=st; k<=en; k++){
        if(l[i]<=r[j]){a[k] = l[i]; i++;}
        else {a[k] = r[j]; j++;}
    }
    free(l);
    free(r);
}

void Merge_sort(int *a, int st, int en){
    if (st<en){

        int q = (st+en)/2;
        Merge_sort(a, st, q);
        Merge_sort(a, q+1, en);
        Merge(a, st, q, en);

    }
}

int main(void){
    int a[] = {1,5,3,8,2,9,5,3,9,4,7,9,3,6,0,2,5};

    Merge_sort(a, 0, 16);

    for (int i=0; i< 17; i++){
        cout<<i<<":"<<a[i]<<endl;
    }
    return 0;
}
