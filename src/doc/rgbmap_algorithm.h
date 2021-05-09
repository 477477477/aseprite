// Aseprite Document Library
// Copyright (c) 2020-2021 Igara Studio S.A.
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef DOC_RGBMAP_ALGORITHM_H_INCLUDED
#define DOC_RGBMAP_ALGORITHM_H_INCLUDED
#pragma once

namespace doc {

  enum class RgbMapAlgorithm {
    DEFAULT, // Select best algorithm (generally octree when alpha is=255 in all colors)
    RGB5A3,
    OCTREE,
  };

} // namespace doc

#endif
