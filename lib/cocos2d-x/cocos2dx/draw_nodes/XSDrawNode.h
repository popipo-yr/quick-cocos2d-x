//
//  XSDrawNode.h
//  quickcocos2dx
//
//  Created by office on 14-7-8.
//  Copyright (c) 2014年 qeeplay.com. All rights reserved.
//

#ifndef __quickcocos2dx__XSDrawNode__
#define __quickcocos2dx__XSDrawNode__

#include "base_nodes/CCNode.h"
#include "ccTypes.h"
#include "CCPointExtension.h"

NS_CC_BEGIN

class XSDrawNode : public CCNode
{
    ccVertex2F vertices[8];
    ccColor4F  colors[8];
	CCGLProgram* p;
    
public:
    
    void setPoint(CCPoint fir, int index);
    void setColor(ccColor4F color , int index);
    void drawLine();
    
    XSDrawNode();
    ~XSDrawNode();
    
    static XSDrawNode* create();

};

NS_CC_END


#endif /* defined(__quickcocos2dx__XSDrawNode__) */


// tolua_usertype(tolua_S,"XSDrawNode");
// toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(XSDrawNode)), "XSDrawNode");
 
// 
// /* method: create of class  XSDrawNode */
//#ifndef TOLUA_DISABLE_tolua_Cocos2d_XSDrawNode_create00
//static int tolua_Cocos2d_XSDrawNode_create00(lua_State* tolua_S)
//{
//#ifndef TOLUA_RELEASE
//    tolua_Error tolua_err;
//    if (
//        !tolua_isusertable(tolua_S,1,"XSDrawNode",0,&tolua_err) ||
//        !tolua_isnoobj(tolua_S,2,&tolua_err)
//        )
//        goto tolua_lerror;
//    else
//#endif
//    {
//        {
//            XSDrawNode* tolua_ret = (XSDrawNode*)  XSDrawNode::create();
//            int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
//            int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
//            toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"XSDrawNode");
//        }
//    }
//    return 1;
//#ifndef TOLUA_RELEASE
//tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
//    return 0;
//#endif
//}
//#endif //#ifndef TOLUA_DISABLE
//
///* method: drawLine of class  XSDrawNode */
//#ifndef TOLUA_DISABLE_tolua_Cocos2d_XSDrawNode_drawLine00
//static int tolua_Cocos2d_XSDrawNode_drawLine00(lua_State* tolua_S)
//{
//#ifndef TOLUA_RELEASE
//    tolua_Error tolua_err;
//    if (
//        !tolua_isusertype(tolua_S,1,"XSDrawNode",0,&tolua_err) ||
//        !tolua_isnoobj(tolua_S,2,&tolua_err)
//        )
//        goto tolua_lerror;
//    else
//#endif
//    {
//        XSDrawNode* self = (XSDrawNode*)  tolua_tousertype(tolua_S,1,0);
//#ifndef TOLUA_RELEASE
//        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawLine'", NULL);
//#endif
//        {
//            self->drawLine();
//        }
//    }
//    return 0;
//#ifndef TOLUA_RELEASE
//tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'drawLine'.",&tolua_err);
//    return 0;
//#endif
//}
//#endif //#ifndef TOLUA_DISABLE
//
///* method: setPoint of class  XSDrawNode */
//#ifndef TOLUA_DISABLE_tolua_Cocos2d_XSDrawNode_setPoint00
//static int tolua_Cocos2d_XSDrawNode_setPoint00(lua_State* tolua_S)
//{
//#ifndef TOLUA_RELEASE
//    tolua_Error tolua_err;
//    if (
//        !tolua_isusertype(tolua_S,1,"XSDrawNode",0,&tolua_err) ||
//        (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
//        !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
//        !tolua_isnoobj(tolua_S,4,&tolua_err)
//        )
//        goto tolua_lerror;
//    else
//#endif
//    {
//        XSDrawNode* self = (XSDrawNode*)  tolua_tousertype(tolua_S,1,0);
//        CCPoint point = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
//        int index = ((int)  tolua_tonumber(tolua_S,3,0));
//#ifndef TOLUA_RELEASE
//        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPoint'", NULL);
//#endif
//        {
//            self->setPoint(point,index-1);
//        }
//    }
//    return 0;
//#ifndef TOLUA_RELEASE
//tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'setPoint'.",&tolua_err);
//    return 0;
//#endif
//}
//#endif //#ifndef TOLUA_DISABLE
//
///* method: setColor of class  XSDrawNode */
//#ifndef TOLUA_DISABLE_tolua_Cocos2d_XSDrawNode_setColor00
//static int tolua_Cocos2d_XSDrawNode_setColor00(lua_State* tolua_S)
//{
//#ifndef TOLUA_RELEASE
//    tolua_Error tolua_err;
//    if (
//        !tolua_isusertype(tolua_S,1,"XSDrawNode",0,&tolua_err) ||
//        (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4F",0,&tolua_err)) ||
//        !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
//        !tolua_isnoobj(tolua_S,4,&tolua_err)
//        )
//        goto tolua_lerror;
//    else
//#endif
//    {
//        XSDrawNode* self = (XSDrawNode*)  tolua_tousertype(tolua_S,1,0);
//        ccColor4F color = *((ccColor4F*)  tolua_tousertype(tolua_S,2,0));
//        int index = ((int)  tolua_tonumber(tolua_S,3,0));
//#ifndef TOLUA_RELEASE
//        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
//#endif
//        {
//            self->setColor(color,index-1);
//        }
//    }
//    return 0;
//#ifndef TOLUA_RELEASE
//tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
//    return 0;
//#endif
//}
//#endif //#ifndef TOLUA_DISABLE




////----me
//tolua_cclass(tolua_S,"XSDrawNode","XSDrawNode","CCNode",NULL);
//tolua_beginmodule(tolua_S,"XSDrawNode");
//tolua_function(tolua_S,"create",tolua_Cocos2d_XSDrawNode_create00);
//tolua_function(tolua_S,"drawLine",tolua_Cocos2d_XSDrawNode_drawLine00);
//tolua_function(tolua_S,"setPoint",tolua_Cocos2d_XSDrawNode_setPoint00);
//tolua_function(tolua_S,"setColor",tolua_Cocos2d_XSDrawNode_setColor00);
//tolua_endmodule(tolua_S);

