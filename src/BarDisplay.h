#ifndef BarDisplay_h
#define BarDisplay_h

#include <QPixmap>

class BarDisplay : public QPixmap
{
public:
    BarDisplay(int w = 250, int h = 40);
    virtual ~BarDisplay();

    void initShape();

    void collected(int);
    void consumed(int);
    void setDisplayColor(QColor col);

    void updateDisplay();
    
signals:
    
public slots:

private:
    int m_partCount;
    int m_value;
    int m_maxValue;
    QColor m_displayColor;
    QVector<QPolygon> m_healthIndicators;
};

#endif // BarDisplay_h
