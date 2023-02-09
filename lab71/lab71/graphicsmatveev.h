#ifndef GRAPHICSMATVEEV_H
#define GRAPHICSMATVEEV_H


#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QTime>
#include <QTimer>

class GraphicsMatveev : public QGraphicsScene
{
    Q_OBJECT
public:
    GraphicsMatveev(QObject* parent= nullptr);
    QGraphicsItem* itemCollidesWith(QGraphicsItem* item);
    void Init();
private:
    QGraphicsRectItem* walls[4];
    QGraphicsPixmapItem* ball;

    int speed;
    double dx, dy;
public slots:
    void MoveBall();
};

#endif // GRAPHICSMATVEEV_H
