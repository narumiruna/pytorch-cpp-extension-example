#include "normalize.h"

torch::Tensor normalize(torch::Tensor x) {
  return at::_cast_Float(x).sub(x.mean()).div(x.std());
}
