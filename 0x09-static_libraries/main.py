# collect all names and run

import os, glob

x = glob.glob("*.o")

rr = ""
for i in x:
    rr += i + " "
print(rr)
os.popen(f"ar rc libmy.a _putchar.o {rr}")
print("done")