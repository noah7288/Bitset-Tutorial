// Noah reynolds Bitset tutorial 
#include <bitset> //includes bitsets
#include <iostream>
using namespace std;

#define M 32 //defines number of bits given to the variable M

int main()
{
    // by default, bitset is binary 0
    bitset<M> bitset1;
    cout << bitset1 << endl; // prints 000...00000 32 bits
   

    // bitset(n) lets you input a whole number and output its binary number
    bitset<M> bitset2(20);
    cout << bitset2 << endl; // prints 000...0010100 32 bits


    // This prints the string of binary numbers
    bitset<M> bitset3(string("101100"));
    cout << bitset3 << endl; // prints 000...0101100 32 bits

    cout << endl;

    // declare a specific number of bits with bitset<n> 

    bitset<8> bitset8; // 00000000 

    // sets the bit at selected location in bitset from 0 to 7
    bitset8[1] = 1; // sets bitset8 to 00000010 
    bitset8[4] = bitset8[1]; //sets bitset8 to 00010010 
    bitset8[2] = bitset8[1]; //sets bitset8 to 00010110
    cout << bitset8 << endl;


    cout << endl;


    // use count to tell the number of ones and zeros in a bitset 
    int ones = bitset8.count();

    // size returns the number of ones in the set so the difference is the zeros  
    int zeros = bitset8.size() - ones;

    cout << bitset8 << " has " << ones << " ones and "
        << zeros << " zeros\n";
    cout << endl;

    // print each digit of the bitset as a bool 
    cout << "the digits of " << bitset8 << " are: ";
    for (int i = 0; i < bitset8.size(); i++) 
        cout << bitset8.test(i) << ", ";//test tests whether the current bit is set
    cout << endl;

    cout << endl;

    // set() sets all bits to one
    cout << bitset8.set() << endl;

    cout << endl;

    // 'reset' sets all or one of the bits to zero 
    cout << bitset8.reset(2) << endl;
    cout << bitset8.reset() << endl;

    
    // bitset<n>(x) converts the int x into n bit binary
    int num = 100;
    cout << "\nDecimal: " << num << endl;
       cout << "  Binary: " << bitset<8>(num) << endl;

    return 0;
    
}

//implementation based on https://www.geeksforgeeks.org/c-bitset-and-its-application/