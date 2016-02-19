#include "testData.h"

CtestData::CtestData(QObject *parent) : QObject(parent)
{

}

CtestData::~CtestData()
{

}

QList<QString> CtestData::getData()
{
//  QList<Person> persons;

//  Person p1;
//  p1.name="于";
//  p1.sex="男";

//  Person p2;
//  p2.name="张";
//  p2.sex="男";

//  persons.append(p1);
//  persons.append(p2);

QList<QString> persons;
persons.append(QString::fromLocal8Bit("于,男"));
persons.append(QString::fromLocal8Bit("张,女"));

  return persons;

}

