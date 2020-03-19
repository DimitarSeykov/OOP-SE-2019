# Dynamic memory and constructors. Rule of Three

## For all tasks: Implement any other methods you may find interesting or necessary. Make sure to follow the Rule of Three and Encapsulation principles.

## Task 1
Using the Grade and Student classes from the previous exercise, define the following methods for the class Student: 
- AddGrade(Grade g) - adds a grade to the student's grades list. Think of a way bypass the problem, that occurs when the list is full.
- GetAverage() - calculates the student's average grade.
- GetAverage(const char* subject) - calculates the average grade for the give subject. (If you chose to represent the Course name as an Enum, then it should take that asa a parameter, instead of const char*)
- PrintGrades() - prints the information about all grades
- Print() - prints student's information
- PrintAll() - prints student's information and information about their grades
- Compare(const Student& a, const Student& b) - compares the average grades of two students - returns true if a has a bigger score than b (a > b)


- Create two objects from class Student and show how the above methods work.


## Task 2
Implement an int Stack with changing size - when the stack is full, new memory is allocated (with size twice bigger than the previous one) and all data is copied there. The operations with the dynamic stack remain the same as with the sattic: 
- Push(int a) - puts an element on the top of the stack
- Pop() - removes the element on the top of the stack
- Peek() - returns the element on the top of the stack without removing it
- Empty() - returns true if the stack is empty (size == 0) and false otherwise.

Think about the proper way to work with dynamic memory. How do you avoid memory leaks?

## Task 3
Implement an int dynamic array. It should be able to perform the following operations:
- Resize(int s) - resizes the capacity of the array to `s`.
- InsertAt(int i,int value) - inserts  `value` at i-th position. All other elements (at positions bigge than i) are shifted to the right. (hint: Implement a `shiftRight(int fromPos)` method). 
- GetAt(int i) - returns the value on i-th position.
- GetCapacity() - returns the capacity of the array.
- GetSize() - returns the current ize of the array.
- PushBack(int value)- adds `value` at the next free position in the array. If the array is full, it should be resized with a twice bigger capacity.
- PopBack() - removes the last element of the array and returns its value.
- RemoveAt(int i) - removes the element at position `i`. All elements on it's right should be shifted to the left. (hint: Implement a `shiftLeft(int from pos)` method).
- Empty() - returns true if the stack is empty (size == 0) and false otherwise.
- Clear() - removes all elements from the array. 

## Task 4
Implement a class Movie. A movie is defined by
- Title (char*)
- Year (unsigned int)
- Genres (list of custom enum)
- Director (either a char* or an instance of a separate class, for example Person)
- Producer (same as Director)
- Cast (either a char** or a list of instances of a separate class, for example Person*) 
- IMDB score (float)
- Description (char*, short annotation)

## task 5 
### Note: You must have implemented task 4 first
Implement a class MoviesLibrary. It must support the following functionalities.
- Add a movie to the library
- Filter the movies by a Genre, By Director, by Year, by Score etc...
- Create a "Watch Later" list. Add movies to it.
- Remove movies from a watchlist.
- Remove movies from the library (which would remove them from a watchlist, if they are in there)

- Bonus: think about a way to allow multiple watchlists - for example a watchlist of comedies, watchlist for movies between 1970 and 1990 etc...