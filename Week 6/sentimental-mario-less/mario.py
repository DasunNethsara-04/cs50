

def run() -> None:

    height = get_input()

    for i in range(height):
        makeBlocks(height - i - 1, i + 1)


def makeBlocks(spaces: int, bricks: int) -> None:
    # first method
    # # print spaces
    # for i in range(spaces):
    #     print(" ", end='')

    # # print bricks (#)
    # for i in range(bricks):
    #     print("#", end='')

    # print()

    # simplified method
    print(" " * spaces + "#" * bricks)


def get_input() -> int:
    while True:
        try:
            height = int(input("Height: "))
            if height < 9 and height > 0:
                return height
        except ValueError:
            pass


if __name__ == "__main__":
    run()
