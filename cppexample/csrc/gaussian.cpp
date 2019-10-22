#include "gaussian.h"

torch::Tensor gaussian(torch::Tensor x, torch::Tensor mu, torch::Tensor sigma, torch::Tensor a) {
  return x.sub(mu).div(sigma).pow(2).div(2).neg().exp().mul(a);
};

