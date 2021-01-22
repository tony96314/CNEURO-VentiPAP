#ifndef GLOBALFUNCTIONS_H
#define GLOBALFUNCTIONS_H

#include <QWidget>

class GlobalFunctions : public QWidget
{
    Q_OBJECT
public:
    explicit GlobalFunctions(QWidget *parent = nullptr);
    static bool myanimationEnabled;
    static bool checkIfFieldValid(QString);
    static double getRealValue(double value);

    static int configured_max_limit;
    static int configured_min_limit;
    static double lastSettedValue;

    static double m_slope_value;
    static double n_value;
    static bool calibrated;

    static bool saveData();
    static bool loadData();
    static bool readValues(QJsonObject);
signals:

public slots:
};

#endif // GLOBALFUNCTIONS_H