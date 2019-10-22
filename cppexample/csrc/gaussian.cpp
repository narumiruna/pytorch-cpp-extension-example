#include "gaussian.h"

torch::Tensor gaussian(torch::Tensor x, float mu, float sigma, float a) {
  return x.sub(mu).div(sigma).pow(2).div(2).neg().exp().mul(a);
}
