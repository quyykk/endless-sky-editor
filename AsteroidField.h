/* AsteroidField.h
Copyright (c) 2015 by Michael Zahniser

Endless Sky is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

Endless Sky is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.
*/

#ifndef ASTEROIDFIELD_H
#define ASTEROIDFIELD_H

#include <QPixmap>
#include <QString>
#include <QVector2D>

#include <list>

class System;

class QPainter;
class QRectF;



class AsteroidField {
public:
    void Set(const System *system);
    void Step();
    void Draw(QPainter &painter, const QRectF &bounds) const;


private:
    class Asteroid {
    public:
        QVector2D position;
        QVector2D velocity;
        QPixmap sprite;
    };


private:
    std::list<Asteroid> asteroids;
};



#endif // ASTEROIDFIELD_H
