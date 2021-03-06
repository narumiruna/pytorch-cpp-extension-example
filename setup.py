import os

from setuptools import setup
from torch.utils.cpp_extension import BuildExtension, CppExtension
from glob import glob

def main():
    extension_dir = os.path.join('cppexample', 'csrc')
    sources = [os.path.join('cppexample', 'bind.cpp')] + glob(os.path.join(extension_dir, '*.cpp'))
    print(sources)
    setup(name='cppexample',
          ext_modules=[CppExtension('_cppexample', sources)],
          cmdclass={'build_ext': BuildExtension})


if __name__ == '__main__':
    main()

