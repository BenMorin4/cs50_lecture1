# cs50_lecture1

I decided that I would probably want to look back at my early coding so I decided to put my cs50 work on github

The mario file took very little time, just some tinkering with the for loops

I had a lot of trouble with the credit problem. I played around with some different ways to get the digits of the input value but ultimately used the modulo operator. I got to the point where I just had to perform Luhn's algorithm but then my code kept returning "Segmentation fault (core dumped)." It took a while to figure out that it came from "isgidigit()" in <ctype.h>. I checked that the prompt did not require to confirm the input was a digit so I removed it and the code compiled well. Decided to upload my file with all of the attempted functions (credit_fail.c) because I hope to revisit it later and understand what went wrong.
