I. OVERVIEW

A Bitset is an array of binary digits. it takes up less space that 
a bool and vector function because it only takes up one bit. A bool
however, must be a known constant at the time of compiling the program.
Operations on bitsets are faster than arrays and vectors because they
are compressed. 


II. HOW DOES IT WORK?

Bitsets work by converting integer, vectors, boolean, etc. into 
compressed binary arrays that take up less space than before. Bitsets
are capable of being converted into and from integer and binary strings.
"#define M (8, 16, 32, etc)" is used to determine the ammount of 
bits in the variable 'M'. bitset <M> X sets all the bits, however
many that were allocated to 'M', to zero.
#define M 8
bitset<M> X; 
cout<<X;
would print "00000000"
Bitset can also convert from decimal to binary. "bitset<M> X(4)" would
set 'X' equal to fours binary number, "100"
A bitset can directly assigned a binary value through a string. for example:
bitset<M> X(string("10101010"));
cout<<X;
would print "10101010".

III. HOW IS THIS DATA STRUCTURE USEFUL?
 

Bitsets are better optimized for space allocation than integers, bools,
etc. because they are converted to bits. bits are eight times smaller
than char type elements, which are smallest element on most systems.
Bitsets also allow for dynamic resizing of vectors.

IV. FURTHER READING

Work Cited:
https://www.geeksforgeeks.org/c-bitset-and-its-application/
http://www.cplusplus.com/reference/bitset/bitset/

Other sources:
https://www.geeksforgeeks.org/c-bitset-interesting-facts/
https://www.tutorialspoint.com/cpp_standard_library/bitset.htm