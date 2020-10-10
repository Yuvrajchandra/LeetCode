# Leetcode
This repository contains solution of Leetcode problems (in C++) and key points/takeaways/techniques involved in solving that problem.


---

[1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
+ .size() is used to find size of vector.  
  For eg- int size = myVect.size();
  
---
  
[1431. Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/)
+ To find max element of vector, following syntax is used.  
  For eg- int max = *max_element(candies.begin(),candies.end());
    
---

[1470. Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/)
+ To intialize multiple variables in for loop following syntax is used:  
  for(int i=0;j=0;k=0; i<n; i++,j++,k++)
  
---

[1512. Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs/)  
+ Using for loop as  
  for(int i=0; i<nums.size(); i++)
  is **more faster** than using it as-  
  int size = nums.size();  
  for(int i=0; i<nums.size(); i++)  
  
---
