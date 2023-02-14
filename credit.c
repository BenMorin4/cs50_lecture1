#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int leng(long x) {
    long a = x;
    int length = 0, count = 1;
    while (a >= 10) {
        a = a/10;
        count++;
    }

    return count;
}

int f2(char a[]) {
    int num = 0;
    num = a[0] *10;
    num += a[1];
    return num;
}


int main(void)
{
    long num = get_long("Number: ");
    int len = leng(num);
    bool card = false;
    string type = "INVALID\n";

  //  if (len < 13 || len > 16) {
  //      printf("INVALID\n");
 //   }
    // Tests if the input is between 13 and 16

    if (len == 14) {
        num = get_long("Number: ");
    }




    char arr[len];
    for (int i = len; i > 0; i--) {
        arr[i - 1] = (num % 10);
        num = (num/10);
    }
    // converts long input into an array so specific indexes can be called
    int total = 0;
    for (int i = (len - 2); i >= 0; i =  i -2) {
        if ((arr[i] *2) >= 10) {
            total += ((arr[i] *2) % 10);
            total += ((arr[i] *2) / 10);
        } else {
        total += (arr[i] * 2);
        }
    }
    // adds up the digits that are multiplied by 2

    for (int i = (len-1); i >= 0; i = i -2 ) {
        total += arr[i];
    }

    // adds up remaining digits
    if (total %10 == 0) {
        card = true;
    }
    //tests luhn's algorithm

    if (arr[0] == 4 && (len == 13 || len == 16)) {
        type = "VISA";
    } else if ((f2(arr) == 34 || f2(arr) == 37) && len == 15) {
        type = "AMEX";
    } else if (len == 16 && (f2(arr) > 50 && f2(arr) < 56)) {
        type = "MASTERCARD";
    }

    if (card == true && (strcmp(type,"MASTERCARD") == 0 || strcmp(type,"AMEX") == 0 || strcmp(type,"VISA") == 0)) {
            printf("%s\n" , type);
    } else {
        printf("INVALID\n");
    }


}