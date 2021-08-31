# Notes to remember

## Conversion Characters

* %f - float(6 decimals default)
    * %.2f - float 2 decimals
* %s  - string
* %d  - decimal(also int)
* %i  - integer
* %li - long int
* %c  - char
* %x  - hexadecimal
* %lf - double(type of float)
* %lu - unsigned long
* %p  - pointer(the address in memory)

## Type Casting

* Put a (data_type) in front of a variable to temporarily change the data type

## Some functions to remember

* Under string.h:
    * strcat -- concatenate 2 strings, change the content variable through the entire code
    * strcpy -- change the original string to the given one
    * strlen -- returns the length of the string
    * strcmp -- compare a entire string letter by letter(using ASCII)
        * it returns 0 when is "="
* Under math.h:
    * floor -- rounds down
        * ex: 9,8 > 9
    * ceil -- rounds up
        * ex: 9,6 > 10
    * abs -- absolute value
    * pow -- power of something(exponenciação)
    * sqrt -- square root(√)
    * rand -- RANDOOOMMMM(actually doesn't work, just use arc4random instead)

## Imprecisions and Problems

* Due to the finite amount of RAM you may bump into float imprecision.
    * example: 1/10 = 0.100000145679730000
* Integer Overflow
    * example = 000 > 001 > 010 > 011 > 100 > 101 > 111 > 000 (1000) <---- here we ran out of bits to keep track of the next number

## Memory and Data Types

Every Byte is 8 bits and every bit is 0 or 1

* bool      = 1 byte (1 or 0) actually just 1 bit but it's easier to work with a whole byte
* char      = 1 byte (one letter) 'a' != "a"
* double    = 8 bytes (64bits)
* float     = 4 bytes (32bits)
* int       = 4 bytes (32bits)
* long      = 8 bytes (64bits)
* string    = ? bytes (it's an array of chars, then consumes 1 byte per char + the NULL-> string terminator)
* uint8_t   = 1 byte(unsigned char)

* char*  -> pointer to a char(in the "string")
* char** -> pointer to a pointer to a char(pointer to the word in the 'string')

* The * operator is a pointer to a memory address -- it's a "go to that location"
* The & operator figures out the address in memory

## Hexadecimal and Binary

Binary:
* Base-2 -- 0 or 1 -> 0100011

Hexa:
* Base-16 -- 0 to f -> 0 1 2 3 4 5 6 7 8 9 A B C D E F

* Hexa decimal is indicated with a 0x
    * example: 0xFF 0x5B

You count up to 16

* example: 00-01-02-03-04-05-06-07-08-09-0A-0B-0C-0D-0E-0F -> 10-11-12-13....
           0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15    16 
    * the first "Column" = 16

                                                      F    F
* FF in hexadecimal is 255 just like an 8bit binary 1111 1111
    * because one hexadecimal counts up to 4bits in binary

* The "Columns" in binary are doubled -> 1 2 4 8 16 32 64 128

## Considerations

* Strings have string terminators, a byte that just returns nothing to indicate that the string has ended
    * example: "I love Lasagna", this string has 14bits(bytes) including the spaces + the terminator = 15 bytes
* Strings are just an Array of characters --> "Joao" = ["j", "o", "a", "o", null]
* &variable -- the "&" is a pointer sign
* Shorthand if statments can be done like:
    * (x == 0) ? printf("true") : printf("false");
* The increment operator ++ works differently based on where it is
    * example: i++ (adds 1 after the operations) ++i (adds 1 before anything)
* Integers are 32bits long, longs are 64bits long
* If statments of just one line of code can be done without the {}
    * example: if (x<5) printf("x is less than 5");
* When comparing single chars use the '' insted of "" because of the string terminator
* You can just declare a fuction/method and then later on "use it"
    * It's called Prototype
* There are 4 steps when "compiling" : preprocess > compiling > assembling > linking
    * preprocess: verifies the header files
    * compiling: turn the C into assembly
    * assembling: compiles the assembly code into binary
    * linking: link the binary from other libraries into your's program binary
* argc - argument count // argv - argument vector (list of arguments)
* In if statments when your calling a function, the only "False" is when the function returns 0, everything else is "True"
* *&var - "go to"+"address" == var(just the var)
* Pointers tends to uses 8 bytes of memory
* A "string" is just a pointer to the first memory address to the first char
* Pointers point to "pointies":
    * int *x;    
    * x = malloc(sizeof(int)); (sets "pointie" x to be a malloc O <- space in memory)
    * int *x --> x(malloc)
    * *x = 42; (store 42 in the pointie)
    * *x(42) --> x
    * *x --> x(42)
* the . operator means "access this inside the struct"
    * example:
    ```c
    typedef struct{
        char *name;
        char *phone;
    } person;
    person people[2];
    person[0].name = "Joao"
    person[1].phone = "+551499999-0000"
    ```
* the * operator besides being a pointer also means(as mentioned) "go to"
* . + * == ->