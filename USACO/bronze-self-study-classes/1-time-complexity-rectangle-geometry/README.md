## 1. Square Pasture

* difficulty: very easy
* submitted on sun feb 04 2024
* accepted on first submission (100/100)
* problem link: https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/6Um3tsMWaQAc3WEOxliQ


## 2. Bucket Brigade

* difficulty: easy
* submitted on mon feb 05 2024
* accepted on submission 3 (forgot to check if rock was BETWEEN barn and lake on submission 1, and then did something even dumber on submission 2)
* problem link: https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/9DHerbuWOcpwh1Yt6BZ1

* if B is below L or L is below B (on the same X-coordinate but different Y-coordinate) and R is on the same X-coordinate as both B and L and is also between them, result = abs(Y-coordinate of B - Y-coordinate of L) + 2
* else if B is to the right of L or L is to the right of B (on the same Y-coordinate but different X-coordinate) and R has the same Y-coordinate as B and L and is also between them, result = abs(X-coordinate of B - Y-coordinate of L) + 2
* else result = abs(X-coordinate of B - X coordinate of L) + abs(Y-coordinate of B - Y-coordinate of L)