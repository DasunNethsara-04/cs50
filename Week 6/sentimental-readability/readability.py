from cs50 import get_string


def count_letters(text: str) -> int:
    letterCount: int = 0
    for char in text:
        if char.isalpha():
            letterCount += 1
    return letterCount


def count_words(text: str) -> int:
    spaceCount: int = 0
    wordCount: int = 0
    for char in text:
        if char.isspace():
            spaceCount += 1
    wordCount = spaceCount + 1
    return wordCount


def count_sentenses(text: str) -> int:
    sentenseCount: int = 0
    for char in text:
        if (char == '!' or char == '.' or char == '?'):
            sentenseCount += 1
    return sentenseCount


def calculate_index(L: float, S: float) -> float:
    # this is the formular to find the index of the reading level
    # index = 0.0588 * L - 0.296 * S - 15.8
    # L = average number of letters per 100 words
    # S = average number of sentenses per 100 words

    index: float = 0.0588 * L - 0.296 * S - 15.8
    return index


def run() -> None:
    text: str = get_string("Text: ")

    letters: int = count_letters(text)
    words: int = count_words(text)
    sentenses: int = count_sentenses(text)

    L: float = (float(letters) / float(words)) * 100
    S: float = (float(sentenses) / float(words)) * 100

    index: float = calculate_index(L, S)

    if (index < 1):
        print("Before Grade 1")
    elif (index > 16):
        print("Grade 16+")
    else:
        print("Grade", int(round(index)))


if __name__ == "__main__":
    run()
