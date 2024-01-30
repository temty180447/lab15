#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *x,int *y,int *z,int *k){
    int values[] = {*x, *y, *z, *k};
    for (int i = 3; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(values[i], values[j]);
    }
    *x = values[0];
    *y = values[1];
    *z = values[2];
    *k = values[3];
}