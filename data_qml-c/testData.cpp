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
//  p1.name="��";
//  p1.sex="��";

//  Person p2;
//  p2.name="��";
//  p2.sex="��";

//  persons.append(p1);
//  persons.append(p2);

QList<QString> persons;
persons.append(QString::fromLocal8Bit("��,��"));
persons.append(QString::fromLocal8Bit("��,Ů"));

  return persons;

}

