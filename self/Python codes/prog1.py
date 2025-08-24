# Print tables from 1 to 10 in a grid
for i in range(1, 11):                                         # Loop through rows (1 to 10)
    for j in range(1, 11):                                     # Loop through columns (1 to 10)
        print(f"{j} x {i} = {j * i:2}", end="   ")
    print()                                                    # Newline after each row


#https://docs.python.org/3.13/tutorial/index.html
#for python
