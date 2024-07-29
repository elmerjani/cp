import random

# Generate 10^5 random numbers between 1 and 10^4 inclusive
random_numbers = [random.randint(1, 10000) for _ in range(10**5)]

# Create and write to each file
for i in range(1, 5):
    filename = f"f{i}.txt"
    with open(filename, 'w') as file:
        # Write the count of numbers in the first line
        file.write(f"{len(random_numbers)}\n")

        # Write the generated numbers in the second line
        file.write(" ".join(map(str, random_numbers)) + "\n")

    print(f"File '{filename}' created with {len(random_numbers)} numbers.")
