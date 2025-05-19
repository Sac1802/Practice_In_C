# First Practice in C
The problem can be found in:

[codewars](https://www.codewars.com/kata/55d6a0e4ededb894be000005/c)

The problem seeks to solve that if we pass a string of characters, it returns the location where the letter is in the English alphabet.

It was solved in two different ways, the first one receives the string of characters, where it then goes through this string, first comparing if the letter in the position of `i` fits within the alphabet, then subtracting the character that is being bought less the ASCI code of `a` and then adding 1, here we are already getting the position of the letter in the alphabet, now we proceed to insert that value into a puncture which is responsible for storing the positions of the letters to later print them.

![Image_result](/Practice1/images/image-1.png)


For the second one it is very similar except that it will no longer be compared by means of ASCI code but by means of an array of characters where it has all the letters from "a" to "z" where it will first go through the first list of characters and then it will go through the list of characters where the letters will be.

![Image_result](/Practice1/images/image-2.png)

---

### How to compile
### C
```bash
gcc file_name.c -o executable_name
# Execute the program
./executable
```




