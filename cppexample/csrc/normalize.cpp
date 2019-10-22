#include <iostream>

#include <torch/extension.h>

torch::Tensor normalize(torch::Tensor x) {
  x = x - torch::mean(x);
  x = x / torch::std(x);
  return x;
}

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def("normalize", &normalize, "d sigmoid function");
}
