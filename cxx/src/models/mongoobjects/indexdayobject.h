#ifndef INDEXDAYOBJECT_H
#define INDEXDAYOBJECT_H

#include <QSharedData>
#include <TMongoObject>

class T_MODEL_EXPORT IndexDayObject : public TMongoObject, public QSharedData
{
public:
    QString _id;
    double open;
    double close;
    double high;
    double low;
    double vol;
    double amount;
    int up_count;
    int down_count;
    QString date;
    QString code;
    double date_stamp;

    enum PropertyIndex {
        Id = 0,
        Open,
        Close,
        High,
        Low,
        Vol,
        Amount,
        UpCount,
        DownCount,
        Date,
        Code,
        DateStamp,
    };

    virtual QString collectionName() const override { return QStringLiteral("index_day"); }
    virtual QString objectId() const override { return _id; }
    virtual QString& objectId() override { return _id; }

private:
    Q_OBJECT
    Q_PROPERTY(QString _id READ get_id WRITE set_id)
    T_DEFINE_PROPERTY(QString, _id)
    Q_PROPERTY(double open READ getopen WRITE setopen)
    T_DEFINE_PROPERTY(double, open)
    Q_PROPERTY(double close READ getclose WRITE setclose)
    T_DEFINE_PROPERTY(double, close)
    Q_PROPERTY(double high READ gethigh WRITE sethigh)
    T_DEFINE_PROPERTY(double, high)
    Q_PROPERTY(double low READ getlow WRITE setlow)
    T_DEFINE_PROPERTY(double, low)
    Q_PROPERTY(double vol READ getvol WRITE setvol)
    T_DEFINE_PROPERTY(double, vol)
    Q_PROPERTY(double amount READ getamount WRITE setamount)
    T_DEFINE_PROPERTY(double, amount)
    Q_PROPERTY(int up_count READ getup_count WRITE setup_count)
    T_DEFINE_PROPERTY(int, up_count)
    Q_PROPERTY(int down_count READ getdown_count WRITE setdown_count)
    T_DEFINE_PROPERTY(int, down_count)
    Q_PROPERTY(QString date READ getdate WRITE setdate)
    T_DEFINE_PROPERTY(QString, date)
    Q_PROPERTY(QString code READ getcode WRITE setcode)
    T_DEFINE_PROPERTY(QString, code)
    Q_PROPERTY(double date_stamp READ getdate_stamp WRITE setdate_stamp)
    T_DEFINE_PROPERTY(double, date_stamp)
};

#endif // INDEXDAYOBJECT_H