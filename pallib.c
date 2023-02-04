   typedef enum { False, True } boolean;
    boolean isPalindrome(int x)
    {
    if (x < 0) {
        return False;
    }

    int reversed = 0;
    int original = x;
    while (x != 0) {
        int remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }
    if(reversed == original)
        {
        return True;
        }
    else
    return False;
    }