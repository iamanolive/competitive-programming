#B. Glass and Mug

* problem B in AtCoder Beginner Contest 332
* solved not as part of contest, but for practice
* rating of 200 on AtCoder

##Problem notes and Logic

* total capacity of glass = g ml
* total capacity of mug = m ml
* g < m
* initial amt of water in glass = 0
* initial amt of water in mug = 0
* performing k operations, determine final amt of water in both containers

##Code implementation of the solution

* we can declare two variables to hold the initial amt of water contained in the glass and the mug, and initialize them both to 0
* after that we take a for loop that runs k times, and checks the given conditions each time, and modifies the values accordingly.
* if the current amt of water in glass is exactly g, set current amt of glass to 0
* else if the current amt of water in mug is 0, set current amt of mug to m
* else if the current amt of water in mug is less than or equal to the amt of water that can be ADDED to the glass (total capacity of glass - current amt of water in glass), add the amt of water in mug to amt of water in glass, and set amt of water in mug to 0
* else if the current amt of water in mug is greater than the amt of water that can be added to the glass, add water from mug to glass until full capacity of glass is reached, and subtract that amount from mug.