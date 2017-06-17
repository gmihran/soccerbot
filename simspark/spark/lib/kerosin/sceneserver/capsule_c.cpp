/* -*- mode: c++; c-basic-offset: 4; indent-tabs-mode: nil -*-

   this file is part of rcssserver3D
   Fri May 9 2003
   Copyright (C) 2002,2003 Koblenz University
   Copyright (C) 2003 RoboCup Soccer Server 3D Maintenance Group
   $Id: capsule_c.cpp 362 2013-06-12 14:58:36Z hedayat $

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#include "capsule.h"

using namespace boost;
using namespace kerosin;
using namespace salt;

FUNCTION(Capsule,setParams)
{
    float inRadius;
    float inLength;

    if (
        (in.GetSize() != 2) ||
        (! in.GetValue(in[0], inRadius)) ||
        (! in.GetValue(in[1], inLength))
        )
        {
            return false;
        }

    obj->SetParams(inRadius,inLength);
    return true;
}

FUNCTION(Capsule,getRadius)
{
    return obj->GetRadius();
}

FUNCTION(Capsule,getLength)
{
    return obj->GetLength();
}

void CLASS(Capsule)::DefineClass()
{
    DEFINE_BASECLASS(kerosin/SingleMatNode);
    DEFINE_FUNCTION(setParams);
    DEFINE_FUNCTION(getRadius);
    DEFINE_FUNCTION(getLength);
}
