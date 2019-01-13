//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================
//
//
//
//=============================================================================
#ifndef __AGS_EE_STATOBJ__AGSSTATICOBJECT_H
#define __AGS_EE_STATOBJ__AGSSTATICOBJECT_H

#include "ac/statobj/staticobject.h"

struct AGSStaticObject : public ICCStaticObject {
    virtual ~AGSStaticObject(){}

    // Legacy support for reading and writing object values by their relative offset
    virtual const char* GetFieldPtr(const char *address, intptr_t offset);
    virtual void    Read(const char *address, intptr_t offset, void *dest, int size);
    virtual uint8_t ReadInt8(const char *address, intptr_t offset);
    virtual int16_t ReadInt16(const char *address, intptr_t offset);
    virtual int32_t ReadInt32(const char *address, intptr_t offset);
    virtual float   ReadFloat(const char *address, intptr_t offset);
    virtual void    Write(const char *address, intptr_t offset, void *src, int size);
    virtual void    WriteInt8(const char *address, intptr_t offset, uint8_t val);
    virtual void    WriteInt16(const char *address, intptr_t offset, int16_t val);
    virtual void    WriteInt32(const char *address, intptr_t offset, int32_t val);
    virtual void    WriteFloat(const char *address, intptr_t offset, float val);
};

extern AGSStaticObject GlobalStaticManager;

#endif // __AGS_EE_STATOBJ__AGSSTATICOBJECT_H
