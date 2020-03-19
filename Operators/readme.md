# Rule of Three and Operators Overloading

## Task 1:

Define a class ```String```, which imitates ```string``` from the STL. Define the following methods:

* Constructor with a parameter ```const char *``` with a default value of empty stirng
* Copy constructor
* Operator ```=``` with a parameter ```const char *```
* Operator ```=``` with a parameter ```String```
* Destructor
* Operator ```[]``` which return a ```char``` symbol by index
* Operator ```+``` in three variants - ```const char * + String``` , ```String + String``` , ```String + const char *```
* Operator ```+=``` in 2 variants - ```String += String``` , ```String += const char *```
* Comparisons operators == , != , <= , < , > , >= in 3 variants - ```const char * | String``` , ```String | String``` , ```String | const char *```
* Operators ```<<``` и ```>>``` for I/O operations
* Method ```length``` returning the size/length of the String
* Method ```empty``` returning ```true``` if the String is empty and ```False``` otherwise
* Method ```c_str``` which returns the ```String``` as a ```const char *```


## Task 2
Define a class ```Event```, which contains information about an event/error that occured in the system. An event/error is defined by the following things:
* Type - event or error
* Event/Error code - positive integer
* event/Error message - a string with an arbitrary size (произволна дължина)

Define all methods you find necessary, including Copy constructor, operator= and a destructor.

## Task 3
Define a class EventLog, which contains a list of Events or Error. The size of the list is arbitrary. Define a method ```addEvent(const Event& _event)``` that adds an event to the log. Define appropriate costructors, operators and a destructor. Define a printing method in two variants: ```print()``` which prints the information about all events/errors and ```print(int k)``` which prints the last ```k``` events/errors. 


