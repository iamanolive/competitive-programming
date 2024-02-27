#include <iostream>
using namespace std;

int main() {
	int totalStacks, maxHeight; cin >> totalStacks >> maxHeight;
	int *boxesInEachStack = new int[totalStacks];
	for(int i = 0; i < totalStacks; i++)
	    cin >> boxesInEachStack[i];
	int currentPosition = 0;
	bool holdingBox = false;
	while(true) {
	    int command; cin >> command;
	    if(command == 0) break;
	    else if(command == 1 && currentPosition > 0)
	        currentPosition -= 1;
	    else if(command == 2 && currentPosition < (totalStacks - 1))
	        currentPosition += 1;
	    else if(command == 3 && (boxesInEachStack[currentPosition] > 0) && !holdingBox) {
	        holdingBox = true;
	        boxesInEachStack[currentPosition] -= 1;
	    } else if(command == 4 && (boxesInEachStack[currentPosition] < maxHeight) && holdingBox) {
	        holdingBox = false;
	        boxesInEachStack[currentPosition] += 1;
	    }
	} for(int i = 0; i < totalStacks; i++)
	    cout << boxesInEachStack[i] << " ";
}