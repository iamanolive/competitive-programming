# G. Katryoshka

* Problem G from Assuit University Training Contest 1
* Link to problem: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

## Solution Notes

form nice combinations using:
1. 2 eyes, 1 body
2. 2 eyes, 1 mouth, 1 body
3. 1 eye, 1 mouth, 1 body

* always needs 1 body in all cases
* HAS: N eyes, M mouths, K bodies

- definitely CANNOT make more than K

* total num 1 combinations he can make == min(N/2, K)
* total num 2 combinations he can make == min(min(N/2, M), K)
* total num 3 combinations he can make == min(N, M, K)

- first we make the max possible num 1 combinations we can make, and subtract the material used (by creating temp variables for all three parts)
- then we make the max possible num 2 combinations we can make, and subtract the material used
- last we make the max possible num 3 combinations we can possibly make


* also repeat this by taking the three combinations in different orders, and print the one that provides max output

- all possible orders = [
    [1, 2, 3],
    [1, 3, 2],

    [2, 1, 3],
    [2, 3, 1],

    [3, 1, 2],
    [3, 2, 1]
]

* if the number goes into negative before finishing all three combinations, the total will decrease instead.
* check for negative before each condition (NO THAT'S NOT WHAT WENT WRONG. all inputs are strictly positive. min they can result to is 0)

- going in a different direction, we can check the number of dolls that can be made using everything in categories 1 and 2 ONLY.
- we skip condition 2, because it needs the most material, and if any of the material needed for it is still present, it can be used to build a MUCH HIGHER number of dolls using conditions 1 or 3.
- use the same method as above, but only check for different orders of conditions 1 and 3 { can be done in 2 different ways, either [1, 3] or [3, 1]}.
- EYES/2 COULD HAVE A REMAINDER AND THE REMAINDER IS BEING DROPPED OFF.

- conditions that can occur = {
    1. bodies are 0 or eyes are 0 { print 0 }
    2. bodies > 0 and eyes > 0 and mouths are 0 { print min(bodies, eyes/2) }
    3. bodies <= eyes and bodies <= mouths { print bodies }
    4. ...
}


## Analyzing past code iterations for errors

```cpp
#include <iostream>
#include <cmath>
using namespace std;

long long solve (long long eyes, long long mouths, long long bodies) {
    long long total = 0;
    if(eyes > 0 && bodies > 0 && mouths > 0) {
        total += min(eyes, min(bodies, mouths));
        eyes -= min(eyes, min(bodies, mouths));
        bodies -= min(eyes, min(mouths, bodies));
        mouths -= min(eyes, min(bodies, mouths));
    } if(eyes/2 > 0 && bodies > 0)
        total += min(eyes/2, bodies);
    return total;
}

int main() {
    long long eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;
    cout << solve(eyes, mouths, bodies) << '\n';
} // figure out why this solution gives an error though
```

* when resetting the values for eyes, mouths and bodies before, i was calculating the min of all the values ALL OVER every time. so if i already set the bodies value to min and calculated the min of bodies, mouths and eyes, the body value used for this calculation was THE RESET VALUE!!! THAT IS, THE MIN VALUE THAT THE BODY VARAIBLE WAS SET TO.
* i'm so dumb okay


- DONT!!! RECALCULATE!!! THE SAME MIN VALUES MULTIPLE TIMES WHEN YOURE SETTING IT EQUAL TO THE SAME VARIABLES USED IN THE MIN FUNCTION!!! STORE MIN VALUE IN A SEPERATE VARIABLE RIGHT WHEN FIRST CALCULATED!!!
- this is basically all i've been doing wrong since the first code i wrote which was 200 lines long, to this last one that's a little below 20.
- LIKE WOW.