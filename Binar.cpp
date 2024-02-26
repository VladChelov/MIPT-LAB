#include<iostream>
#include<ctime>
#include<random>
#include<cstdlib>
#include<cstring>
using namespace std;
main () {
    int size;
    cin >> size;
    int *a = new int [size];

    for (int i=0; i<= size; i++) {
        a[i] = rand()%100;
    }
    int temp;
    for (int i=1; i<= size; i++) {
        for (int j=i; j>0&&a[j-1]>a[j];j--){
            swap(a[j-1],a[j]);
        }

        cout << endl;
        for (int i=0; i<= size; i++) {
        cout << a[i] << " ";
            }
    }

    cout << endl;
    int query;
    cin >> query;
    int address, mid;
    int r=size-1, l=0;
    srand(time(0));
        while (r>=l) {
            mid = (r+l)/2;
            if (a[mid]==query) {
                address = mid;
                break;
            }
            if (query<a[mid]) r=mid-1;
            if (query>a[mid]) l=mid+1;
        }
        cout << query << " were in index" << mid;
        cout << "\nruntime = " << clock()/1000.0 << endl;
        
}