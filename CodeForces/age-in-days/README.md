# R. Age in Days

* Problem R from TLE Eliminators Level 1 (Sheet #1)
* The number of times the input age can be completely divided by 365 is the total number of years the person has been alive.
* The age variable can now be modified to hold the person's age minus the number of years that have already been calculated. It is therefore set to the remainder obtained when age is divided by 365.
* The number of times the modified age variable can be completely divided by 30 is the number of months the person has been alive.
* The remainder when age is divided by 30 is the number of days that the person has been alive.