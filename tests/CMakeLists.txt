########################################
# BEGIN_COPYRIGHT
#
# Copyright (C) 2008-2015 SciDB, Inc.
# All Rights Reserved.
#
# SciDB is free software: you can redistribute it and/or modify
# it under the terms of the AFFERO GNU General Public License as published by
# the Free Software Foundation.
#
# SciDB is distributed "AS-IS" AND WITHOUT ANY WARRANTY OF ANY KIND,
# INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY,
# NON-INFRINGEMENT, OR FITNESS FOR A PARTICULAR PURPOSE. See
# the AFFERO GNU General Public License for the complete license terms.
#
# You should have received a copy of the AFFERO GNU General Public License
# along with SciDB.  If not, see <http://www.gnu.org/licenses/agpl-3.0.html>
#
# END_COPYRIGHT
########################################

add_subdirectory("data_gen")
add_subdirectory("harness")
add_subdirectory("unit")
add_subdirectory("benchmarks")
add_subdirectory("utils")
add_subdirectory("mu")
#
#  PGB: Adding this to help me to build a couple of fast and dirty examples
#       of how things like the UDF SDK would work.
#
# add_subdirectory("Sketches")

