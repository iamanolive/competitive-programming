* N cows numbered 1 through N
* array H containing the type of hay each cow likes
* focus group (if more than half the cows of all cows numbererd i through j have like same hay, all cows like that hay)
* which types of hay can become liked by all cows simultaneously

```cpp

for(int i1 = 0; i1 < n; i1++) { // i1 = 0
    int current = hay[i1]; // 1
    int counter = 0;
    for(int i2 = 1; i2 < n - i1 - 1; i2++) {
        for(int i3 = i1; i3 < i1 + i2 + 1; i3++) {
            if(hay[i3] == current) counter++; // 1 2 
        } if(counter > (idx / 2)) result.push_back(current);
    }
}

```