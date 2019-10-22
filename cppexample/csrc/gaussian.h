#include <torch/extension.h>

torch::Tensor gaussian(torch::Tensor x, float mu, float sigma, float a);
