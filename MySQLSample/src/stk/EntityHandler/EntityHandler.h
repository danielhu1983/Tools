#ifndef _ENTITY_HANDLER_H_
#define _ENTITY_HANDLER_H_

#include <string>
#include <Entity/EntityBase.h>
#include <Entity/UserEntity.h>
#include <DAO/MySQLDBHelper.h>
#include <DAO/MySQLDBConn.h>
class EntityHandler;
typedef void (EntityHandler::*PFUNC)(const std::string &log, int value);
class EntityHandler
{
public:
	EntityHandler();
	~EntityHandler();

	bool InitHandler(const std::string &ServerIP, const std::string &User, const std::string &Password, const std::string &DB);
	bool FetchEntity(EnumEntityType eType);
	void CallBack(const std::string &log, int value);
private:
	EntityBase *m_Entity;
	MySQLDBHelper *m_DBHelper;
	std::string m_FetchProcedure;
};

#endif
