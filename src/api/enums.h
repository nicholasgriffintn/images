#pragma once

#include <vips/vips8>

namespace weserv {
namespace api {
namespace enums {

enum class Position {
    Center = VIPS_INTERESTING_CENTRE,  // Default
    Entropy = VIPS_INTERESTING_ENTROPY,
    Attention = VIPS_INTERESTING_ATTENTION,
    Top,
    Right,
    Bottom,
    Left,
    TopLeft,
    BottomLeft,
    BottomRight,
    TopRight,
    Focal,
};

enum class FilterType {
    None,  // Default
    Greyscale,
    Sepia,
    Duotone,
    Negate
};

enum class MaskType {
    None,  // Default
    Circle,
    Ellipse,
    Triangle,
    Triangle180,
    Pentagon,
    Pentagon180,
    Hexagon,
    Square,
    Star,
    Heart
};

enum class ImageType {
    Jpeg,
    Png,
    Webp,
    Tiff,
    Gif,
    Svg,
    Pdf,
    Heif,
    Magick,
    Unknown
};

enum class Output {
    Origin,  // Default
    Jpeg,
    Png,
    Webp,
    Tiff,
    Gif,
    Json
};

enum class Canvas {
    Max,  // Default
    Min,
    Crop,
    Embed,
    IgnoreAspect
};

}  // namespace enums
}  // namespace api
}  // namespace weserv
