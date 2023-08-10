#include <iostream>
#include <assert.h>

int ComputeCombination(int Major, int Minor)
{
	return Major * 5 + Minor;
}

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << ComputeCombination(i,j) << " | " << majorColor[i] << " | " << minorColor[j] << "\n";
        }
    }
    return i * j ;
}

int main() {
    int result = printColorMap();
    assert(ComputeCombination(0, 1) == 2);
	assert(ComputeCombination(5, 5) == 25);
	assert(result == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}