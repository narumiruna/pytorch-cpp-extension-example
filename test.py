import torch
from cppexample import normalize, gaussian

def main():
    x = torch.tensor([1, 2, 3], dtype=torch.float)
    y = normalize(x)
    print(y)

    x = gaussian(x, 0.0, 1.0, 1.0)
    print(x)

if __name__ == '__main__':
    main()

