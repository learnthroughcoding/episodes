LEARN THROUGH CODING
EPISODE 0: CAESAR CIPHER (ENGLISH ALPHABET)


INTRODUCTION
The Caesar Cipher is one of the simplest ciphers in existence. It is named after
Julius Caesar who used it protect messages during military operations. People
were often illiterate, so a simple cipher like this one was all that was needed
to protect messages.


HOW IT WORKS
Suppose each letter in the alphabet is denoted by its index.

A = 0
B = 1
C = 2
...
Z = 25

The Caesar Cipher works by simply replacing each letter by another letter which
is a fixed distance away. If the letter is large, the distance is wrapped to
the smallest letter. Mathematically this can be performed using modular
arithmetic.

Since English contains 26 letters, the following equation could be used to
compute the enciphered character in a message:

Cipher Character = Plain Character + Offset (mod 26)


EXAMPLE
Suppose we want to encipher the message "HELLO" with an offset of 15.

Step 1.
First we would convert each letter into its index:

	{H, E, L, L, O} = {7, 4, 11, 11, 14}

Step 2.
Next we would add the offset to each letter mod 26.

	7  + 15 = 22 (mod 26)
	4  + 15 = 19 (mod 26)
	11 + 15 = 0  (mod 26)
	11 + 15 = 0  (mod 26)
	14 + 15 = 3  (mod 26)

So,

	{7, 4, 11, 11, 14} -> {22, 19, 0, 0, 3}

Step 3.
Finally, we convert back from the index to English letters.

	{22, 19, 0, 0, 3} -> {W, T, A, A, D}


So our final enciphered text is "WTAAD". To decrypt the message we would perform
the same steps except we would subtract the offset instead of adding the offset.


IMPLEMENTATION
The cipher will take in a string of text which contains only capital English
letters and spaces. All spaced will be ignored. If we have a character which
is not a capital English letter or a space, we will throw an error.
