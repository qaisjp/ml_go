/*********************************************************
*
*  Multi Theft Auto: San Andreas - Deathmatch
*
*  ml_base, External lua add-on module
*
*  Copyright � 2003-2008 MTA.  All Rights Reserved.
*
*  Grand Theft Auto is � 2002-2003 Rockstar North
*
*  THE FOLLOWING SOURCES ARE PART OF THE MULTI THEFT
*  AUTO SOFTWARE DEVELOPMENT KIT AND ARE RELEASED AS
*  OPEN SOURCE FILES. THESE FILES MAY BE USED AS LONG
*  AS THE DEVELOPER AGREES TO THE LICENSE THAT IS
*  PROVIDED WITH THIS PACKAGE.
*
*********************************************************/

#include "CFunctions.h"
#include "CLuaArguments.h"
#include "foo.h"

int CFunctions::HelloWorld ( lua_State* luaVM )
{
    if ( luaVM )
    {

    	int a = luaL_checkinteger ( luaVM, 1 );
        int b = luaL_checkinteger ( luaVM, 2 );

        CLuaArguments args;
        
        int n = sum(a,b);
        args.PushNumber(n);
        args.PushArguments(luaVM);
        return 1;
    }
    return 0;
}