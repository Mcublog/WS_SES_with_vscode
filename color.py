class PrintColours:
    BLUE = '\033[94m'
    GREEN = '\033[92m'
    RED = "\033[1;31m"
    RESET = "\u001b[0m"


with open("debug_err.log", "r") as f:
    for line in f:
        if "error:" in line:
            line = line.replace("error:", f"{PrintColours.RED}ERROR:{PrintColours.RESET}")
        if "note:" in line:
            line = line.replace("note:", f"{PrintColours.GREEN}note:{PrintColours.RESET}")
        print(line, end='')
