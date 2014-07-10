//
//  XSDrawNode.cpp
//  quickcocos2dx
//
//  Created by office on 14-7-8.
//  Copyright (c) 2014年 qeeplay.com. All rights reserved.
//

#include "XSDrawNode.h"
#include <cmath>
#include <algorithm>

USING_NS_CC;


typedef struct _ccRect4F {
    GLfloat x;
    GLfloat y;
    GLfloat w;
    GLfloat h;
} ccRect4F;


static ccColor4F s_tColor = {1.0f,1.0f,1.0f,1.0f};

static int s_aColor = -1;

static int s_aP = -1;


XSDrawNode::XSDrawNode(){
    
    p = new CCGLProgram();
    
    const GLchar * frag =
#include "xsLinefrag.h"
    const GLchar * vert =
#include "xsLinevert.h"
    
    p->initWithVertexShaderByteArray(vert, frag);

    p->link();
    p->updateUniforms();
    
    CHECK_GL_ERROR_DEBUG();
    
    s_aColor = glGetAttribLocation(p->getProgram(), "a_color");
	CHECK_GL_ERROR_DEBUG();
	s_aP = glGetAttribLocation(p->getProgram(), "a_position");
	CHECK_GL_ERROR_DEBUG();
    
}

XSDrawNode::~XSDrawNode(){
    
    delete p;
    p = NULL;
    
}

XSDrawNode* XSDrawNode::create()
{
    XSDrawNode *pRet = new XSDrawNode();
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
}


void XSDrawNode::setPoint(CCPoint fir, int index){
    if (index >= 8 || index < 0) return;
    vertices[index] = {fir.x, fir.y};
}
void XSDrawNode::setColor(ccColor4F color, int index){
    if (index >= 8 || index < 0) return;
    colors[index] = color;
}

void XSDrawNode::drawLine(){
    
    glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    //glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_CONSTANT_ALPHA);

	p->use();
	p->setUniformsForBuiltins();
    
	glEnableVertexAttribArray( s_aP );
	glVertexAttribPointer(s_aP, 2, GL_FLOAT, GL_FALSE, 0, vertices);
    

	glEnableVertexAttribArray( s_aColor );
	glVertexAttribPointer(s_aColor,4,GL_FLOAT,GL_FALSE,0,colors);

	glDrawArrays(GL_TRIANGLE_STRIP, 0, 8);
    
    glDisableVertexAttribArray(s_aP);
    glDisableVertexAttribArray(s_aColor);
}



