#include "class.h"

using namespace std;

QString admin_key = "dogeisgood";

User root;

login* login_window(){ static login tem; return &tem;}

modify* modify_window(){ static modify tem; return &tem;}

regist* regist_window(){ static regist tem; return &tem;}

user_information* user_window(){ static user_information tem; return &tem;}

book_information* book_window(){ static book_information tem; return &tem;}

event_information* event_window(){ static event_information tem; return &tem;}

common_user* common_user_window(){ static common_user tem; return &tem;}

bool is_num(QString str) { bool ok; str.toInt(&ok); return ok;}

QString get_time()
{
    QDateTime time = QDateTime::currentDateTime();
    return time.toString("yyyy-MM-dd hh:mm:ss");
}

int warning(QString str, int tem)
{
    QMessageBox::warning(NULL, "warning", str, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    qDebug() << str;
    return tem;
}

bool creat_database()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data/data.db");
    if(!db.open())
        return false;
    QSqlQuery query;

    query.exec
    (
        "create table if not exists books( "
        "id varchar primary key, "
        "IBSN varchar, "
        "level int, "
        "name varchar, "
        "author varchar, "
        "press varchar, "
        "intro varchar, "
        "total int, "
        "left int)"
    );

    query.exec
    (
        "create table if not exists users ( "
        "id varchar primary key, "
        "key varchar, "
        "name varchar, "
        "email varchar, "
        "phone varchar, "
        "level int)"
    );

    query.exec
    (
        "create table if not exists events ( "
        "id int primary key, "
        "user_id varchar, "
        "user_name varchar, "
        "book_id varchar, "
        "book_name varchar, "
        "start_time varchar, "
        "end_time varchar)"
    );
    return true;
}
