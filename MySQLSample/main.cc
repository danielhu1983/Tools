#include <mysql.h>
#include "MySQLDBHelper.h"
#include <string>


int main()
{
	MySQLDBHelper db;
	std::string errmsg("");
				/*MySQL Server    user    password   DB/schema*/
	db.InitMySQLConn("192.168.75.130", "CRM", "mysql", "CRM", errmsg);
	//db.Connect("192.168.75.130", "CRM", "mysql", "CRM");
	std::string SQL("call FetchUsers");
	//db.ExecQuerySQL(SQL, SQL.length());
	//("select * from User");
	errmsg="";
	std::string InserSQL("insert into User values(3, 'Daniel', ' ', ' ')");
	db.ExecSQL(InserSQL, InserSQL.length(), errmsg);
	return 0;
}

