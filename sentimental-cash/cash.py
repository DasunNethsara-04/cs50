def run() -> None:
    change: float = get_input()
    amount: int | float = amount_handler(change)
    qarters: int | float = calculateQuarters(amount)

    print(qarters)


def calculateQuarters(amount: int | float) -> int:
    i = 0
    q: int = 0
    while amount > 0:
        if amount >= 25:
            q += 1
            amount -= 25
        elif amount >= 10:
            q += 1
            amount -= 10
        elif amount >= 5:
            q += 1
            amount -= 5
        else:
            q += 1
            amount -= 1
    return q


def amount_handler(amount: int | float) -> int | float:
    return amount * 100


def get_input() -> float:
    while True:
        try:
            user_input = float(input("Change: "))
            if isinstance(user_input, float) and not user_input < 0:
                return user_input
        except Exception:
            pass


if __name__ == "__main__":
    run()
