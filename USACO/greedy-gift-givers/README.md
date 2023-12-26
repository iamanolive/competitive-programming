# Greedy Gift Givers

* Problems from the USACO training site
* Chapter 1 Section 1.1

## Solution Notes

* np uniquely named friends exchange gifts
* it is not compulsory for all of them to receive or give gifts
* find how much more money each person gets than what they give

- everyone's account starts at 0, and increases when money is received and decreases when money is gifted
- divides the money from the bank evenly among everyone they wish to give it to, and remainder goes back to the owner's account\

* if friendCount == 5
    1. take in names of all 5 friends
    2. name of 1st gift-giver, amt and distribution
    3. cont. for all 5 friends