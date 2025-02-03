
def run() -> None:

    while True:
        height: int = get_input()
        if not isinstance(height, int):
            height: int = get_input()
        else:
            if height > 8 or height < 1:
                continue
            break

    for i in range(height):
        makeBlocks(height - i - 1, i+1)


def makeBlocks(spaces: int, bricks: int) -> None:
    # print spaces
    for i in range(spaces):
        print(" ", end='')

    # print bricks (#)
    for i in range(bricks):
        print("#", end='')

    print()


def get_input() -> int:
    height = None
    user_input = input("Height: ")
    try:
        while True:
            height = int(user_input)
            if isinstance(height, int):
                break
            else:
                user_input = input("Height: ")
                continue
    finally:
        return height


if __name__ == "__main__":
    run()
