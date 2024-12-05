 #include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int b = 1;
    int c = 1;
	while(b < a+1){
	    c = c*b;
	    b++;
	}
    cout << c;
	return 0;
}
