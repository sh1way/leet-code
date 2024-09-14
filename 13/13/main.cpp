#include <iostream>
#include <string>
#include <cstring>

int main() {

	char a[8] = "XIX";
	int b = 0;

	for (int i = 0; i < 8; i++) {
		if (a[i] == 'I') {
			if (a[i + 1] == 'V') {
				b += 4;
				i++;
				
			}
			else if (a[i + 1]=='X') {
				b += 9;
				i++;
				
			}
			else if(a[i + 1] != 'X' && a[i + 1] != 'V') {
				b += 1;
			}
		}
		else if (a[i] == 'V') {
			b += 5;
		}
		else if (a[i] == 'X') {
			if (a[i + 1] == 'L') {
				b += 40;
				i++;
				
			}
			else if (a[i + 1] == 'C') {
				b += 90;
				i++;
				
			}
			else if (a[i + 1] != 'L' && a[i + 1] != 'C') {
				b += 10;
			}
		}
		else if (a[i] == 'L') {
			b += 50;
		}
		else if (a[i] == 'C') {
			if (a[i + 1] == 'D') {
				b += 400;
				i++;
				
			}
			else if (a[i + 1] == 'M') {
				b += 900;
				i++;
				
			}
			else if (a[i + 1] != 'D' && a[i + 1] != 'M') {
				b += 100;
			}
		}
		else if (a[i] == 'D') {
			b += 500;
		}
		else if (a[i] == 'M') {
			b += 1000;
		}
	}
	
	std::cout << "\n" << b;

	return 0;
}