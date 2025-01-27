/***************************************************************************
 *   Copyright (c) 2008 Jürgen Riegel <juergen.riegel@web.de>              *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#ifndef __PRECOMPILED__
#define __PRECOMPILED__

#include <FCConfig.h>

#ifdef _PreComp_

// standard
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cassert>
#include <map>
#include <memory>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

// QT
#include <QDateTime>

// Boost
#include <boost/format.hpp>
#include <boost/uuid/uuid_io.hpp>

// Opencascade
#include <Mod/Part/App/OpenCascadeAll.h>

#elif defined(FC_OS_WIN32)
#ifndef NOMINMAX
# define NOMINMAX
#endif
# include <windows.h>
#endif // _PreComp_

#endif
