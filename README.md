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
I have completed this exercise and the extension to also be able to convert to Kelvin. I used the toupper() function to support both upper and lowercase inputs. I used a short hand if/ else if statement so that I use as few output statements as possible. Also if the users temperature input is not numeric the output will be 'invalid input'. I have tested the code manually by entering erroneous inputs aswell as minus numbers and the code still runs correctly.

### Exercise 3
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2A-Exercise-3#main.cpp "code for exercise 3")

***Task:***
Prompt the user for the length and width of a room in feet and then display the area in both feet and meters squared. The extension is to validate that the input is numeric and accept support inputs provided as meters or feet.

***Status:***
I have completed this exercise and the extensions. I had difficulty on the extension task to confirm if the room sizes given were numeric. I had to take the input as a string and loop through the string and then use the isdigit() function to check if it was a number. I abstracted this out into a seperate function to improve readability. I also added to this function so that decimal numbers would be accepted. Although this does mean if the user were to enter '..' when asked for a number that the programme would incorrectly identify it as a valid number. I also completed the extension allowing the user to enter the room dimensions in metres or feet, this made a lot of changes to the code because I had to use string interpolation in the outputs to ensure the correct units were used.
