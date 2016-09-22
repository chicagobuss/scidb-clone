/*
**
* BEGIN_COPYRIGHT
*
* Copyright (C) 2010-2015 SciDB, Inc.
* All Rights Reserved.
*
* SciDB is free software: you can redistribute it and/or modify
* it under the terms of the AFFERO GNU General Public License as published by
* the Free Software Foundation.
*
* SciDB is distributed "AS-IS" AND WITHOUT ANY WARRANTY OF ANY KIND,
* INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY,
* NON-INFRINGEMENT, OR FITNESS FOR A PARTICULAR PURPOSE. See
* the AFFERO GNU General Public License for the complete license terms.
*
* You should have received a copy of the AFFERO GNU General Public License
* along with SciDB.  If not, see <http://www.gnu.org/licenses/agpl-3.0.html>
*
* END_COPYRIGHT
*/

/**
 * @file RoleDesc.cpp
 *
 * @author mcorbett@paradigm.com
 *
 * @brief A class for describing a role.
 *
 */

#include <usr_namespace/RoleDesc.h>

namespace scidb
{
    RoleDesc::RoleDesc()
        : _name("")
    {

    }

    RoleDesc::RoleDesc(
        const std::string &rName)
        : _name(rName)
    {

    }
} // namespace scidb

