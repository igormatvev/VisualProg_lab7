#include "graphicsmatveev.h"

void GraphicsMatveev::Init(){

    QPolygon poligoneCar;
    poligoneCar << QPoint(0, 100) << QPoint(100, 100)<<QPoint(100, 0)<<QPoint(300, 0)<<QPoint(300, 0)<<QPoint(300, 100)<<QPoint(400, 100)<<QPoint(400, 200)<<QPoint(0, 200);
    QGraphicsPolygonItem* car = addPolygon(poligoneCar, QPen(Qt::black), QBrush(QColor(222, 150, 255)));
    car->setPos(25, 300);
    car->setFlags(QGraphicsItem::ItemIsMovable);
    car->setData(0, "Car");

    QPixmap newImage;
    if (!newImage.load(QStringLiteral(":/images/wheel.png"))) {
        return;
    }

    QGraphicsPixmapItem* wheel[2];
    for(int i=0; i<2; i++){
            wheel[i] = addPixmap(newImage);
            wheel[i]->setPos(300,200);
            wheel[i]->setScale(0.15);
            wheel[i]->setData(0, "Car");
            wheel[i]->setFlags(QGraphicsItem::ItemIsMovable);
        };


    if (!newImage.load(QStringLiteral(":/images/ball.png"))) {
        return;
    }
    ball = addPixmap(newImage);
    ball->setScale(0.15);
    ball->setPos(500, 400);
    ball->setData(0, "ball");

    walls[0] = addRect(QRectF(0,0,10,500),QPen(Qt::black), QBrush(QColor(220, 20, 60)));
    walls[1] = addRect(QRectF(800,0,10,500), QPen(Qt::black), QBrush(QColor(220, 20, 60)));
    walls[2] = addRect(QRectF(0,0,800,10), QPen(Qt::black), QBrush(QColor(220, 20, 60)));
    walls[3] = addRect(QRectF(0,500,800,10), QPen(Qt::black), QBrush(QColor(220, 20, 60)));

    for(int i=0; i<4; i++)
            walls[i]->setData(0,"Wall");
}

void GraphicsMatveev::MoveBall(){
    QTransform transform = ball->transform();
    transform.translate(dx,dy);
    ball->setTransform(transform);
    QGraphicsItem* barrier = itemCollidesWith(ball);
    transform=ball->transform();
    if(barrier){
        if(barrier->data(0)=="Wall" || barrier->data(0)=="Car"){
            dx=-dx;
            dy=-dy;
        }
    }
}


GraphicsMatveev::GraphicsMatveev(QObject* parent):QGraphicsScene (parent)
{
    Init();
    dx = 1;
    dy = 1;
    speed = 1;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MoveBall()));
    timer->start(10);

}


QGraphicsItem * GraphicsMatveev::itemCollidesWith(QGraphicsItem *item)
{
    QList<QGraphicsItem *> collisions = collidingItems(item);
    foreach (QGraphicsItem *it, collisions){
        if(it == item)
            continue;
        return it;
    }
    return nullptr;
}
