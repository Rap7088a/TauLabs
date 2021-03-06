/**
******************************************************************************
* @file       aeroquadplugin.cpp
* @author     Tau Labs, http://taulabs.org, Copyright (C) 2013
*
* @addtogroup GCSPlugins GCS Plugins
* @{
* @addtogroup Boards_AeroQuadPlugin AeroQuad boards support Plugin
* @{
* @brief Plugin to support AeroQuad boards
*****************************************************************************/
/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include "aeroquadplugin.h"
#include "aq32.h"

AeroQuadPlugin::AeroQuadPlugin()
{
   // Do nothing
}

AeroQuadPlugin::~AeroQuadPlugin()
{
   // Do nothing
}

bool AeroQuadPlugin::initialize(const QStringList& args, QString *errMsg)
{
   Q_UNUSED(args);
   Q_UNUSED(errMsg);
   return true;
}

void AeroQuadPlugin::extensionsInitialized()
{
    /**
     * Create the board objects here.
     *
     */
    AQ32* aq32 = new AQ32();
    addAutoReleasedObject(aq32);
}

void AeroQuadPlugin::shutdown()
{
}
