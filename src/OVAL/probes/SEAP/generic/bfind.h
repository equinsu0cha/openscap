/*
 * Copyright 2009 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      "Daniel Kopecek" <dkopecek@redhat.com>
 */

#pragma once
#ifndef BFIND_H
#define BFIND_H

#include "oscap_platforms.h"

#include <stddef.h>
#ifdef OS_WINDOWS
#include <io.h>
#else
#include <unistd.h>
#endif

#include "../../../../common/util.h"


void    *bfind   (void *ptr, size_t nmemb, size_t size, void *key, int cmpfn (void *, void *));
ssize_t  bfind_i (void *ptr, size_t nmemb, size_t size, void *key, int cmpfn (void *, void *));


#endif /* BFIND_H */
