# Notes to remember

## Conversion Characters

* %f - float(6 decimals default)
    * %.2f - float 2 decimals
* %s - string
* %d - decimal(also int)
* %i - integer
* %li - long int
* %c - char
* %x - hexadecimal
* %lf - double(type of float)

## Type Casting

* Put a (data_type) in front of a variable to temporarily change the data type

## Some functions to remember

* Under string.h:
    * strcat -- concatenate 2 strings, change the content variable through the entire code
    * strcpy -- change the original string to the given one
    * strlen -- returns the length of the string 
* Under math.h:
    * floor -- rounds down
        * ex: 9,8 > 9
    * ceil -- rounds up
        * ex: 9,6 > 10
    * abs -- absolute value
    * pow -- power of something(exponenciação)
    * sqrt -- square root(√)
    * rand -- RANDOOOMMMM(actually doesn't work, just use arc4random instead)

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

## Imprecisions and Problems

* Due to the finite amount of RAM you may bump into float imprecision.
    * example: 1/10 = 0.100000145679730000
* Integer Overflow
    * example = 000 > 001 > 010 > 011 > 100 > 101 > 111 > 000 (1000) <---- here we ran out of bits to keep track of the next number

## Memory

Every Byte is 8 bits and every bit is 0 or 1

* bool   = 1 byte (1 or 0) actually just 1 bit but it's easier to work with a whole byte
* char   = 1 byte (one letter) 'a' != "a"
* double = 8 bytes (64bits)
* float  = 4 bytes (32bits)
* int    = 4 bytes (32bits)
* long   = 8 bytes (64bits)
* string = ? bytes (it's an array of chars, then consumes 1 byte per char + the NULL-> string terminator)