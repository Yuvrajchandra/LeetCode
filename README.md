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
  int sizeOfVector = nums.size();  
  for(int i=0; i<sizeOfVector; i++)  
  
---

[1108. Defanging an IP Address](https://leetcode.com/problems/defanging-an-ip-address/)  
+ Replace characters of String  
  regex_replace(address, regex("[-]"), "[.]")  
  Using **regex_replace** we can replace the match.  
  Here, "255-100-50-0" will be replaced by "255[.]100[.]50[.]0"  
  Note- It is slow as compared to next method  
  
+ See the 2nd approach of this question for faster way to replace.  

---
 
[771. Jewels and Stones](https://leetcode.com/problems/jewels-and-stones/)
+ Using for(char &ch1 : Str) is more faster way to use for loop as compared to  
  for(char & ch1 : Str) or any other type of for loop.
  
---

[1281. Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/)
+ Following logic is used to get each digit of a number.  
```
          while(n)
          {
            int remainder = n%10; 
            n /= 10;
          }
```

---

**[IMP]**  
[1313. Decompress Run-Length Encoded List](https://leetcode.com/problems/decompress-run-length-encoded-list/)
+ vector insert() function in C++ STL  
  Following is the syntax of vector insert() :  
  
  + vector_name.insert(position, frequency, value);  
    For eg- ``` vec.insert(vec.end(), 2, 4); ```  
    
  + vector_name.insert (position, value);  
    For More details visit [this](https://www.geeksforgeeks.org/vector-insert-function-in-c-stl/) for more details.
    
---

[1389. Create Target Array in the Given Order](https://leetcode.com/problems/create-target-array-in-the-given-order/)
+ vector_name.insert (position, value);

---

[1486. XOR Operation in an Array](https://leetcode.com/problems/xor-operation-in-an-array/)
+ XOR of a number with itself results Zero. and XOR of a number with 0 results the number itself.  
  For eg-  
         ```
            2 ^ 2 = 0  
            4 ^ 0 = 4         
         ```
            
---  

[1295. Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/)
+ To count number of digits in a number.  
  ```
      int noOfDigits = 0;
      while(num)
      {
          noOfDigits++;
          num/=10;
      }
   ```
   
---

[1561. Maximum Number of Coins You Can Get](https://leetcode.com/problems/maximum-number-of-coins-you-can-get/)
+ To sort the vector in descending order, folloeing syntax is used-  
  ```
  sort(piles.begin(), piles.end(), greater<int>());
  ```
+ To copy a vector to another-
  ```
  vector<int> newVec = oldVec;
  ```
  
---

