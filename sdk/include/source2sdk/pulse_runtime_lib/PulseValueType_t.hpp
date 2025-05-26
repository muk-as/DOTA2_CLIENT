#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Enumerator count: 26
        // Alignment: 4
        // Size: 0x4
        enum class PulseValueType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Void"
            PVAL_INVALID = 0xffffffff,
            // MPropertyFriendlyName "Boolean"
            PVAL_BOOL = 0x0,
            // MPropertyFriendlyName "Integer"
            PVAL_INT = 0x1,
            // MPropertyFriendlyName "Float"
            PVAL_FLOAT = 0x2,
            // MPropertyFriendlyName "String"
            PVAL_STRING = 0x3,
            // MPropertyFriendlyName "Vector"
            PVAL_VEC3 = 0x4,
            // MPropertyFriendlyName "Angle"
            PVAL_QANGLE = 0x5,
            // MPropertyFriendlyName "World Vector"
            PVAL_VEC3_WORLDSPACE = 0x6,
            // MPropertyFriendlyName "Transform"
            PVAL_TRANSFORM = 0x7,
            // MPropertyFriendlyName "World Transform"
            PVAL_TRANSFORM_WORLDSPACE = 0x8,
            // MPropertyFriendlyName "Color"
            PVAL_COLOR_RGB = 0x9,
            // MPropertyFriendlyName "Game Time"
            PVAL_GAMETIME = 0xa,
            // MPropertyFriendlyName "Entity Handle"
            PVAL_EHANDLE = 0xb,
            // MPropertyFriendlyName "Resource"
            PVAL_RESOURCE = 0xc,
            // MPropertyFriendlyName "SoundEvent Instance Handle"
            PVAL_SNDEVT_GUID = 0xd,
            // MPropertyFriendlyName "SoundEvent"
            PVAL_SNDEVT_NAME = 0xe,
            // MPropertyFriendlyName "Entity Name"
            PVAL_ENTITY_NAME = 0xf,
            // MPropertyFriendlyName "Opaque Handle"
            PVAL_OPAQUE_HANDLE = 0x10,
            // MPropertyFriendlyName "Typesafe Int"
            PVAL_TYPESAFE_INT = 0x11,
            // MPropertySuppressEnumerator
            PVAL_CURSOR_FLOW = 0x12,
            // MPropertyFriendlyName "Any"
            PVAL_ANY = 0x13,
            // MPropertyFriendlyName "Schema Enum"
            PVAL_SCHEMA_ENUM = 0x14,
            // MPropertyFriendlyName "Panorama Panel Handle"
            PVAL_PANORAMA_PANEL_HANDLE = 0x15,
            // MPropertyFriendlyName "Test Handle"
            PVAL_TEST_HANDLE = 0x16,
            // MPropertyFriendlyName "Array"
            PVAL_ARRAY = 0x17,
            // MPropertySuppressEnumerator
            PVAL_COUNT = 0x18,
        };
    };
};
