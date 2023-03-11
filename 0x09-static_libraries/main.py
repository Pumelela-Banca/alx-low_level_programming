# collect all names and run

import os, glob

x = glob.glob("*.o")

rr = ""
for i in x:
    rr += i + " "
os.popen(f"ar rc libmy.a {rr}")
print("done")