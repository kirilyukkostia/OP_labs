from funcs import count_chars


string = input()

for char, count in count_chars(string).items():
    print(f"Char : '{char}' Count : {count}")
