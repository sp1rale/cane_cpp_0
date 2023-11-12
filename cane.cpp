#include "cane.h"


void showRectangle(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    showRectangle(5, 7);

    return 0;
}





		
	

