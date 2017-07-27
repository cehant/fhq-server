#include "../headers/update0073.h"
#include <QSqlQuery>


QString Update0073::from_version(){
	return "u0072";
}

QString Update0073::version(){
	return "u0073";
}

QString Update0073::description(){
	return "Added captcha table";
}

bool Update0073::update(QSqlDatabase &db, QString &error){
	QSqlQuery query(db);
	query.prepare(
		"CREATE TABLE IF NOT EXISTS `users_captcha` ("
		"	  `id` int(11) NOT NULL AUTO_INCREMENT,"
		"	  `captcha_uuid` varchar(127) NOT NULL,"
		"	  `captcha_val` varchar(127) NOT NULL,"
		"	  `dt_expired` datetime NOT NULL,"
		"	  PRIMARY KEY (`id`)"
		") ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1;");
	if(!query.exec()){
		error = query.lastError().text();
		return false;
	}
	return true;
}
