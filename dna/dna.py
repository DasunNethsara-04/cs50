import csv
import sys


def main() -> None:
    # Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage: python dna.py database.csv sequence.txt")
        sys.exit(1)

    # Read database file into a variable
    rows = []
    with open(sys.argv[1], "r") as file:
        reader = csv.DictReader(file)
        for row in reader:
            rows.append(row)

    # Read DNA sequence file into a variable
    with open(sys.argv[2], "r") as file:
        sequence: str = file.read().strip()

    # Get the list of STRs from the database
    strs: list = list(rows[0].keys())[1:]

    # Find longest match of each STR in DNA sequence
    str_counts: dict = {str_: longest_match(sequence, str_) for str_ in strs}

    # Check database for matching profiles
    for row in rows:
        if all(int(row[str_]) == str_counts[str_] for str_ in strs):
            print(row["name"])
            return

    print("No match")


def longest_match(sequence, subsequence) -> int:
    """Returns length of longest run of subsequence in sequence."""
    longest_run = 0
    subsequence_length: int = len(subsequence)
    sequence_length: int = len(sequence)

    for i in range(sequence_length):
        count = 0
        while True:
            start: int = i + count * subsequence_length
            end: int = start + subsequence_length

            if sequence[start:end] == subsequence:
                count += 1
            else:
                break

        longest_run: int = max(longest_run, count)

    return longest_run


main()
