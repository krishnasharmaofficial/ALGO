#include <iostream>

using namespace std;

int ab[5];
void acceptInput();
void bubbleSort();
void display();

int main() {
    acceptInput();
    bubbleSort();
    display();
    return 0;
}

void acceptInput() {
    int i=0;
    for(i=0; i<5; i++) {
        cin >> ab[i];
    }
}

void bubbleSort() {
    int i=0,j=0, temp=0, count=0, flag=0;
    for(i=0; i<5; i++) {
        for(j=0; j<4; j++) {
            if(ab[j] > ab[j+1]) {
//                flag=1;
                temp = ab[j+1];
                ab[j+1] = ab[j];
                ab[j] = temp;
            }
            count++;
        }
//        if(flag==0)
//            break;
    }
    display();
    cout << "count: " << count << endl;
}

void display() {
    int i=0;
    for(i=0; i<5; i++) {
        cout << ab[i] << " " ;
    }
    cout << endl;
}
