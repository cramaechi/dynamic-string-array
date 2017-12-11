# Dynamic String Array
A program that tests my implementation of a class named DynamicStringArray that mimics the behavior of 
a vector of strings. In other words, a DynamicStringArray object can grow and shrink while the program
is running.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/dynamic-string-array.git
   ```
    or [download as ZIP](https://github.com/cramaechi/dynamic-string-array/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd dynamic-string-array
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./dsarray
```

Sample Output:
```
Enter sentences, one per line. Press '-' key to stop.                                                                 
Jello                                                                                                                 
Hot                                                                                                                   
Meat                                                                                                                  
Juice                                                                                                                 
Africa                                                                                                                
Freedom                                                                                                               
Chocolate                                                                                                             
Flavored                                                                                                              
Ice Cream                                                                                                             
-                                                                                                                     
                                                                                                                      
Dynamic array elements:                                                                                               
Jello                                                                                                                 
Hot                                                                                                                   
Meat                                                                                                                  
Juice                                                                                                                 
Africa                                                                                                                
Freedom                                                                                                               
Chocolate                                                                                                             
Flavored                                                                                                              
Ice Cream                                                                                                             
                                                                                                                      
Would you like to remove a string from the dynamic array (y/n)? y
                                                                                                                      
Okay. Which string will it be? Jello                                                                                  
                                                                                                                      
Jello has been removed from the dynamic array.                                                                        
                                                                                                                      
Updated dynamic array elements:                                                                                       
Hot                                                                                                                   
Meat                                                                                                                  
Juice                                                                                                                 
Africa                                                                                                                
Freedom                                                                                                               
Chocolate                                                                                                             
Flavored                                                                                                              
Ice Cream
```
