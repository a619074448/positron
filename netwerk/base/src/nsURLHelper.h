/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * The contents of this file are subject to the Netscape Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/NPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is Andreas Otte.
 *
 * Contributor(s): 
 */

#ifndef _nsURLHelper_h_
#define _nsURLHelper_h_

#include "prtypes.h"
#include "nscore.h"
#include "nsCRT.h"

#ifdef __cplusplus
extern "C" {
#endif

/* encode characters into % escaped hexcodes */
NS_NET nsresult nsURLEscape (const char* str, PRInt16 mask, char ** result);

/* decode % escaped hex codes into character values */
NS_NET nsresult nsURLUnescape(char* str, char ** result);

/* Get port from string */ 
NS_NET PRInt32 ExtractPortFrom(const char* src);

/* Extract string out of another */
NS_NET nsresult ExtractString(char* i_Src, char* *o_Dest, PRUint32 length);

/* Duplicate string */
NS_NET nsresult DupString(char* *o_Dest, const char* i_Src);

/* handle .. in dirs */
NS_NET void CoaleseDirs(char* io_Path);

#ifdef __cplusplus
}
#endif

#endif

