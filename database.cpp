#include "database.h"

Database::Database(QString DBName)
{
    m_DBName=DBName;
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("C:/Users/BM-URAB/Desktop/gestion_ventes/db.db");

    m_db.open();
}

int Database::isDBOpen()
{
    return m_db.isOpen();
}

QSqlQuery Database::execute(QString query)
{
    return m_db.exec(query);
}

QSqlDatabase Database::getDB()
{
    return m_db;
}
