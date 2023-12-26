# B. Christmas Trees

* UNIQUE VISION Programming Contest 2023 Christmas
* Problem B from AtCoder Beginner Contest 334
* Rated 250 points
* Link to problem: https://atcoder.jp/contests/abc334/tasks/abc334_b

## Solution Notes

* set up trees at intervals of M meters
* starts at coordinate A
* trees at all intervals A + kM
* print number of christmas trees between points l and r

<br>

- all variables to be of type long long
- A + kM = x 
- kM = x - A
- k = (x - A) / M

<br>

* if (x - A) % M == 0, then there is a tree at position (A + kM)

<br>

```cpp

#include <iostream>
#include <set>
using namespace std;

int main() {
    long long a, m, l, r;
    cin >> a >> m >> l >> r;
    set<long long> trees;
    if(a <= r && a >= l)
        trees.insert(a);
    long long treeBehind = a;
    long long treeAhead = a;
    while(treeBehind > l) {
        treeBehind -= m;
        if(treeBehind >= l)
            trees.insert(treeBehind);
    } while(treeAhead < r) {
        treeAhead += m;
        if(treeAhead <= r)
            trees.insert(treeAhead);
    } long long counter = 0;
    for(auto element : trees) {
        if(element <= r && element >= l)
            counter++;
    } cout << counter << '\n';
}

```

<br>

* above code works correctly, but for the max and min numbers in the given constraints, it takes too long to run

<br>

- if (l - A) % M == 0, take l as starting point
- otherwise, take l + ((l - A) % M) as starting point
- if (r - A) % M == 0, take r as ending point
- otherwise, take r - ((r - A) % M) as starting point
- (abs(starting point) + abs(ending point)) / M + 1

## Attempt the second

* at intervals of M == distance between any two trees
* first tree is at coordinate A
* l <-> r

<br>

- start at 5, distance of 3
- {|-1|, 0, 1, |2|, 3, 4, |5|, 6} == 3

<br>

* max time current code takes to run would be 2 into 10 raised to 18. we can reduce this time by a multiple of 2 by providing constant time output if M == 1
* then iterate over all right hand values where trees would be planted starting from M until we reach R
* iterate over all left hand values where trees would be pnated starting from M until we reach L
* still takes too long (5+ seconds somehow??) but the code works right

<br>

```cpp

#include <iostream>
using namespace std;

int main() {
    long long a, m, l, r;
    cin >> a >> m >> l >> r;

    if(m == 1) {
        cout << (r - l) + 1 << '\n';
        return 0;
    }

    long long counter = 0;
    if(a <= r && a >= l)
        counter++;
    for(int i = a; i <= r; i += m)
        if(i <= r && i != a && i >= l)
            counter++;
    for(int i = a; i >= l; i -= m)
        if(i >= l && i != a && i <= r)
            counter++;
    cout << counter << '\n';
}

```

<br>

- start at -2, distance of 2
- {1} == 0
- trees at {-2, 0, 2}

<br>

```cpp

#include <iostream>
using namespace std;

int main() {
    long long A, M, L, R;
    cin >> A >> M >> L >> R;
    long long l = L + ((A - L) % M + M) % M;
    long long r = R - ((R - A) % M + M) % M;
    cout << (r - l) / M + 1 << "\n";
}

```

l = -1 + ((5 - (-1)) % 3 + 3) % 3 <br>
l = -1 <br>
r = 6 - ((6 - 5) % 3 + 3) % 3 <br>
r = 5 <br>
(r - l) / M + 1 = 6 / 3 + 1 = 3 <br>


* a + k<sub>1</sub> * m >= l && a + k<sub>2</sub> * m <= r
* find the smallest value of k that's greater than or equal to l
* find the largest value of k that's less than or equal to r
* print k<sub>2</sub> - k<sub>1</sub> + 1;
* if there is no such values of k, print 0

<br>

- a + k * m >= l
- a + k * m <= r
- l <= (a + k * m) >= r
- solving a three part inequality using code

<br>

- l <= (a + km)
- (l - a) / m <= k
- point1 = ceil((l - a) / m)
- [ceil because the point should be GREATER than or equal to l]
- r >= (a + km)
- (r - a) / m >= k
- point2 = floor((r - a) / m)
- [floor because the point should be BEFORE r or should lie on r]
- process is reversed for negative numbers though