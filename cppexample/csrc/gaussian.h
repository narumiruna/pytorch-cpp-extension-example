#include <torch/extension.h>

torch::Tensor gaussian(torch::Tensor x, torch::Tensor mu, torch::Tensor sigma, torch::Tensor a);

