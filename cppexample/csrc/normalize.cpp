#include <iostream>

#include <torch/extension.h>

torch::Tensor normalize(torch::Tensor x) {
  return at::_cast_Float(x).sub(x.mean()).div(x.std());
}

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def("normalize", &normalize, "Normalize a tensor");
}
