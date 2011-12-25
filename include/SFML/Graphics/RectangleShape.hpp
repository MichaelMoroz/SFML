////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2009 Laurent Gomila (laurent.gom@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

#ifndef SFML_RECTANGLESHAPE_HPP
#define SFML_RECTANGLESHAPE_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics/Shape.hpp>


namespace sf
{
////////////////////////////////////////////////////////////
/// \brief Specialized shape representing a rectangle
///
////////////////////////////////////////////////////////////
class SFML_API RectangleShape : public Shape
{
public :

    ////////////////////////////////////////////////////////////
    /// \brief Default constructor
    ///
    /// \param size Size of the rectangle
    ///
    ////////////////////////////////////////////////////////////
    explicit RectangleShape(const Vector2f& size = Vector2f(0, 0));

    ////////////////////////////////////////////////////////////
    /// \brief Set the size of the rectangle
    ///
    /// \param size New size of the rectangle
    ///
    /// \see GetSize
    ///
    ////////////////////////////////////////////////////////////
    void SetSize(const Vector2f& size);

    ////////////////////////////////////////////////////////////
    /// \brief Get the size of the rectangle
    ///
    /// \return Size of the rectangle
    ///
    /// \see SetSize
    ///
    ////////////////////////////////////////////////////////////
    const Vector2f& GetSize() const;

    ////////////////////////////////////////////////////////////
    /// \brief Get the number of points defining the shape
    ///
    /// \return Number of points of the shape
    ///
    ////////////////////////////////////////////////////////////
    virtual unsigned int GetPointsCount() const;

    ////////////////////////////////////////////////////////////
    /// \brief Get a point of the shape
    ///
    /// \param index Index of the point to get
    ///
    /// \return Index-th point of the shape
    ///
    ////////////////////////////////////////////////////////////
    virtual Vector2f GetPoint(unsigned int index) const;

private :

    ////////////////////////////////////////////////////////////
    // Member data
    ////////////////////////////////////////////////////////////
    Vector2f mySize; ///< Size of the rectangle
};

} // namespace sf


#endif // SFML_RECTANGLESHAPE_HPP


////////////////////////////////////////////////////////////
/// \class sf::RectangleShape
/// \ingroup graphics
///
/// This class inherits all the functions of sf::Transformable
/// (position, rotation, scale, bounds, ...) as well as the
/// functions of sf::Shape (outline, color, texture, ...).
///
/// Usage example:
/// \code
/// sf::RectangleShape rectangle;
/// rectangle.SetSize(sf::Vector2f(100, 50));
/// rectangle.SetOutlineColor(sf::Color::Red);
/// rectangle.SetOutlineThickness(5);
/// rectangle.SetPosition(10, 20);
/// ...
/// window.Draw(rectangle);
/// \endcode
///
/// \see sf::Shape, sf::CircleShape, sf::ConvexShape
///
////////////////////////////////////////////////////////////