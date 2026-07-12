// #include<iostream>
// using namespace std;            
// int main() {                                  
//     int a[] = {1,2,3,4,4,3,2,1,1,23,3,4,4};
//     int n = 13;
//     for(int i = 0; i < n; i++) {
//         int count = 1;
//         for(int k = 0; k < i; k++) {
//             if(a[i] == a[k]) {
//                 count = 0;
//                 break;
//             }                      
//         }            
//         if(count == 0)
//             continue;
//         for(int j = i + 1; j < n; j++) {
//             if(a[i] == a[j]) {
//                 count++;
//             }
//         }
//         if(count > 1) {
//             cout << a[i] << " occurs " << count << " times" << endl;
//         }
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int main() {
    int a[] = {1,2,3,4,4,3,2,1,1,23,3,4,4};
    int n = 13;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        if(count > 1) {
            cout << a[i] << " occurs " << count << " times" << endl;
        }
    }

    return 0;
}