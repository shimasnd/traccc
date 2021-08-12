/** TRACCC library, part of the ACTS project (R&D line)
 *
 * (c) 2021 CERN for the benefit of the ACTS project
 *
 * Mozilla Public License Version 2.0
 */

#pragma once

#include <stdint.h>

#include "definitions/algebra.hpp"

namespace traccc {

using geometry_id = uint64_t;
using event_id = uint64_t;
using channel_id = unsigned int;

template <typename T, std::size_t N>
using array = darray<T, N>;
using vector2 = array<scalar, 2>;
using point2 = array<scalar, 2>;
using variance2 = array<scalar, 2>;
using point3 = array<scalar, 3>;
using vector3 = array<scalar, 3>;
using variance3 = array<scalar, 3>;

using transform3 = algebra::array::transform3;

}  // namespace traccc
