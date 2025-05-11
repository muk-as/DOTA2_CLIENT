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
        // Enumerator count: 25
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
            // MPropertyFriendlyName "World Vector"
            PVAL_VEC3_WORLDSPACE = 0x5,
            // MPropertyFriendlyName "Transform"
            PVAL_TRANSFORM = 0x6,
            // MPropertyFriendlyName "World Transform"
            PVAL_TRANSFORM_WORLDSPACE = 0x7,
            // MPropertyFriendlyName "Color"
            PVAL_COLOR_RGB = 0x8,
            // MPropertyFriendlyName "Game Time"
            PVAL_GAMETIME = 0x9,
            // MPropertyFriendlyName "Entity Handle"
            PVAL_EHANDLE = 0xa,
            // MPropertyFriendlyName "Resource"
            PVAL_RESOURCE = 0xb,
            // MPropertyFriendlyName "SoundEvent Instance Handle"
            PVAL_SNDEVT_GUID = 0xc,
            // MPropertyFriendlyName "SoundEvent"
            PVAL_SNDEVT_NAME = 0xd,
            // MPropertyFriendlyName "Entity Name"
            PVAL_ENTITY_NAME = 0xe,
            // MPropertyFriendlyName "Opaque Handle"
            PVAL_OPAQUE_HANDLE = 0xf,
            // MPropertyFriendlyName "Typesafe Int"
            PVAL_TYPESAFE_INT = 0x10,
            // MPropertySuppressEnumerator
            PVAL_CURSOR_FLOW = 0x11,
            // MPropertyFriendlyName "Any"
            PVAL_ANY = 0x12,
            // MPropertyFriendlyName "Schema Enum"
            PVAL_SCHEMA_ENUM = 0x13,
            // MPropertyFriendlyName "Panorama Panel Handle"
            PVAL_PANORAMA_PANEL_HANDLE = 0x14,
            // MPropertyFriendlyName "Test Handle"
            PVAL_TEST_HANDLE = 0x15,
            // MPropertyFriendlyName "Array"
            PVAL_ARRAY = 0x16,
            // MPropertySuppressEnumerator
            PVAL_COUNT = 0x17,
        };
    };
};
