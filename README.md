# SD6-advanced-programming-day1
C++ Programming Exercises for Workshop 1-2A, B and C

## 1-2A
### Exercise 1
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2A-Exercise-1#main.cpp "code for exercise 1")

***Task:***
Ask the user for a quote and the author and then display the input in the format: ***author says: "quote"***

***Status:***
I have fully completed this exercise. The programme works correctly when given standard input.
I was able to solve the 'multi word input' bug by using the getline() function. One bug identified is if the input includes quotes (e.g. "this is my quote") then the output will be quoted twice e.g. author says: ""this is my quote"".
I have not yet found a fix for this issue but since the risk is very low I have made this a low priority problem.

### Exercise 2
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2A-Exercise-2#main.cpp "code for exercise 2")

***Task:***
Write a programme to convert a temperature given by the user into centigrade or farenheit. Add Kelvin as an extension.

***Status:***
I have completed this exercise and the extension to also be bale to convert to Kelvin. I used the toupper() function to support both upper and lowercase inputs. I used a short hand if/ else if statement so that I use as few output statements as possible. Also if the users temperature input is not numeric the output will be 'invalid input'. I have tested the code manually by entering erroneous inputs aswell as minus numbers and the code still runs correctly.

### Exercise 3
