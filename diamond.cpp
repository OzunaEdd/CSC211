#include <iostream>
using namespace std;

int main(){
        for(int i = 0; i <= 6; i++) {
                for(int space = 6; space > i; space--) {
                        cout << " ";
                }
                for(int n = 0; n <= (i * 2); n++) {
                        cout << "*";
                }
                cout << endl;
        } for(int i = 0; i <= 6; i++) {
                for(int space = 0; space < i; space++) {
                        cout << " ";
                }
                for(int n = 12; n >= (i * 2); n--) {
                        cout << "*";
                }

                cout << endl;
        }

        return 0;
}
