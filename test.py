import torch
from cppexample import normalize

def main():
    x = torch.tensor([1, 2, 3], dtype=torch.float)
    y = normalize(x)
    print(y)

if __name__ == '__main__':
    main()

