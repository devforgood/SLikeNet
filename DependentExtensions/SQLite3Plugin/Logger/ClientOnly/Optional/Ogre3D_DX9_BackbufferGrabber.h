/*
 * This file was taken from RakNet 4.082 without any modifications.
 * Please see licenses/RakNet license.txt for the underlying license and related copyright.
 */

#ifndef OGRE3D_DX9_BACKBUFFER_GRABBER_H
#define OGRE3D_DX9_BACKBUFFER_GRABBER_H

#include "DX9_BackbufferGrabber.h"
#include "OgreRenderWindow.h"

class Ogre3D_DX9_BackbufferGrabber : public DX9_BackbufferGrabber
{
public:
	void InitBackbufferGrabber(Ogre::RenderWindow* renderWindow, int _width, int _height);
};

#endif
