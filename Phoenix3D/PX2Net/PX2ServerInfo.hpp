// PX2ServerInfo.hpp

#ifndef PX2SERVERINFO_HPP
#define PX2SERVERINFO_HPP

#include "PX2SmartPointer.hpp"

namespace PX2
{

	class ServerInfo
	{
	public:
		ServerInfo();
		~ServerInfo();

		int ID;
		int Status;
		std::string Type;
		std::string Name;
		std::string IP;
		std::string WWWAddr;
		int Port;
		int NumMaxConnect; // for server
	};

	typedef Pointer0<ServerInfo> ServerInfoPtr;

}

#endif