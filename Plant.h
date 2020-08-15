#ifndef PLANT_H
#define PLANT_H
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QTime>

class Plant: public QGraphicsItem
{
protected:
    int value;

public:
    Plant();
    int PlantValue();
    bool isPlanted;
};

#endif // PLANT_H
