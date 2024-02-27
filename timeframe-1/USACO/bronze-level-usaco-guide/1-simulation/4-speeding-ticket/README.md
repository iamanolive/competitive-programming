# Speeding Ticket

* USACO 2015 december contest, bronze (problem 2)
* solved on the official USACO training site
* problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=568

## Solution Notes

* road is 100 miles long, and divided into N segments
* each of the N segments is described by a length in miles and speed limit in the range of 1...100 miles per hour
* length of the N segments add up to 100
* journey can also be described as a series of M segments, during each of which she travels for some number of miles at a certain speed. length of all M segments add up to 100
* tractor can drive 100 miles per hour at its fastest
* maximum amount over the speed limit that bessie travels during any part of the journey
* never over speed limit, output 0
* track speed limit over a particular segment of the road using maps??
* or i could create an empty array of size 100 and store the speed limit at each of the 100 mile points of the road