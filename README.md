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

## 1-2B

### Exercise 4
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2B-Exercise-4#main.cpp "code for exercise 4")

***Task:***
Check if a number input by the user is odd or even using the modulous operator (%). The extension is to allow a decimal value to be entered.

***Status:***
I have completed the exercise and the extension. The extension task to allow decimal values to be entered is confusing since decimal numbers cannot be considered neither odd or even [evidence](https://math.stackexchange.com/questions/92451/can-decimal-numbers-be-considered-even-or-odd). Therefor I just assumed this meant that the programme should only accept decimal numbers if the number after the decimal is 0 since it is still a whole number.

### Exercise 5
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2B-Exercise-5#main.cpp "code for exercise 5")

***Task:***
Prompt the user for their current age and the age they want to retire at. Calculate the number of years remaining until the user can retire and output the result in the specified format. The extension is to give different outputs when the user is at or past their stated retirement age.

***Status:***
I have completed the exercise and the extension. I had to get the current year by including the ctime library and calculating the year using the seconds since 1990. I found no bugs with the code.

### Exercise 6
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2B-Exercise-6#main.cpp "code for exercise 6")

***Task:***
Prompt the user for their age and resting heart rate then use the Karvonen formular to determine the target heart rate for stepped intensities from 40% to 95% using a for loop to increment the percentage values. The extension is to change the for loop to a do/while loop.

***Status:***
I have completed the exercise and the extension. I had difficulty validating the input until I found the `if( !( cin >> var)){error}` method that checks if cin is the same data type of var.

## 1-2C

### Exercise 7
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2C-Exercise-7#main.cpp "code for exercise 7")

***Task:***
Prompt the user to enter numerical values or q to quit, the programe should count the number of positive, negative and 0 numbers given. This should be displayed once the user has quit.

***Status:***
I have completed the exercise and completed manual testing using a range of inputs and found no bugs or errors. There was no extension given for this task.

### Exercise 8
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2C-Exercise-8#main.cpp "code for exercise 8")

***Task:***
Ask the user for a numerical input until they enter 'q' to quit. Out put the highest and the lowest values detected without using in-built functions. Extension is to prevent the user from entering the same number multiple times.

***Status:***
I have completed the exercise and completed the extension to prevent the user from entering the same number multiple times. The exercise was quite challenging because of the requirement not to use the built in functionality like highest(). It means the code is a lot longer. To complete the extension I used a set to store the users inputs. I had no need to store the users inputs to complete the main task so I used alternative methods to save save memory. But, now that I am storing the users inputs I could refactor those methods to make the code more concise.

### Exercise 9
[Link to the repl.it](https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2C-Exercise-9#main.cpp "code for exercise 9")

***Task:***


***Status:***

