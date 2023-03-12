# collect all names and run

import os, glob

x = glob.glob("*.c")

rr = ""
for i in x:
    rr += i + " "
print(rr)
os.popen(f"ar rc libmy.a {rr}")
print("done")