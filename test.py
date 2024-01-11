try:
    y = 4
except FileNotFoundError:
    print("File not found")
else:
    print("File read successfully")
finally:
    print("The try statement is finished")
