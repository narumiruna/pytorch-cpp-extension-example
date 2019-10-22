#include "csrc/normalize.h"
#include "csrc/gaussian.h"

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def("normalize", &normalize, "Normalize a tensor");
  m.def("gaussian", &gaussian, "Gaussian function");
}

