#ifndef CTESTDATA_H
#define CTESTDATA_H

#include <QObject>
#include <QString>
#include <QList>

struct Person{
  QString name;
  QString sex;
};

class CtestData : public QObject
{
  Q_OBJECT
public:
  explicit CtestData(QObject *parent = 0);
  ~CtestData();

  Q_INVOKABLE QList<QString> getData();
public:
  QList<Person> m_Persons;

signals:

public slots:
};

#endif // CTESTDATA_H
