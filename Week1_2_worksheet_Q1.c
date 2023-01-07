In the first line of code, x is the result of shifting addr 16 bits to the right, which is 0b0000000000000000, and y is the result of bitwise ANDing x with 0xff, which is also 0b0000000000000000.

In the second line of code, z is the result of shifting addr 8 bits to the right, which is 0b0010011100000000, and w is the result of bitwise ANDing z with 0xff, which is 0b0000000011111111.

Therefore, the values of x, y, z, and w are:

x = 0b0000000000000000 = 0
y = 0b0000000000000000 = 0
z = 0b0010011100000000 = 135
w = 0b0000000011111111 = 255