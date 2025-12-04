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
        // Enumerator count: 32
        // Alignment: 4
        // Size: 0x_
        enum class PulseValueType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Void"
            PVAL_VOID = 0xffffffff,
            // MPropertyFriendlyName "Boolean"
            PVAL_BOOL = 0x0,
            // MPropertyFriendlyName "Integer"
            PVAL_INT = 0x1,
            // MPropertyFriendlyName "Float"
            PVAL_FLOAT = 0x2,
            // MPropertyFriendlyName "String"
            PVAL_STRING = 0x3,
            // MPropertyFriendlyName "Vector2D"
            PVAL_VEC2 = 0x4,
            // MPropertyFriendlyName "Vector"
            PVAL_VEC3 = 0x5,
            // MPropertyFriendlyName "Angle"
            PVAL_QANGLE = 0x6,
            // MPropertyFriendlyName "World Vector"
            PVAL_VEC3_WORLDSPACE = 0x7,
            // MPropertyFriendlyName "Vector4D"
            PVAL_VEC4 = 0x8,
            // MPropertyFriendlyName "Transform"
            PVAL_TRANSFORM = 0x9,
            // MPropertyFriendlyName "World Transform"
            PVAL_TRANSFORM_WORLDSPACE = 0xa,
            // MPropertyFriendlyName "Color"
            PVAL_COLOR_RGB = 0xb,
            // MPropertyFriendlyName "Game Time"
            PVAL_GAMETIME = 0xc,
            // MPropertyFriendlyName "Entity Handle"
            PVAL_EHANDLE = 0xd,
            // MPropertyFriendlyName "Resource"
            PVAL_RESOURCE = 0xe,
            // MPropertyFriendlyName "Resource Name"
            PVAL_RESOURCE_NAME = 0xf,
            // MPropertyFriendlyName "SoundEvent Instance Handle"
            PVAL_SNDEVT_GUID = 0x10,
            // MPropertyFriendlyName "SoundEvent"
            PVAL_SNDEVT_NAME = 0x11,
            // MPropertyFriendlyName "Entity Name"
            PVAL_ENTITY_NAME = 0x12,
            // MPropertyFriendlyName "Opaque Handle"
            PVAL_OPAQUE_HANDLE = 0x13,
            // MPropertyFriendlyName "Typesafe Int"
            PVAL_TYPESAFE_INT = 0x14,
            // MPropertyFriendlyName "Material Group"
            PVAL_MODEL_MATERIAL_GROUP = 0x15,
            // MPropertySuppressEnumerator
            PVAL_CURSOR_FLOW = 0x16,
            // MPropertyFriendlyName "Variant"
            // MPropertySuppressEnumerator
            PVAL_VARIANT = 0x17,
            // MPropertyFriendlyName "Unknown"
            // MPropertySuppressEnumerator
            PVAL_UNKNOWN = 0x18,
            // MPropertyFriendlyName "Schema Enum"
            PVAL_SCHEMA_ENUM = 0x19,
            // MPropertyFriendlyName "Panorama Panel Handle"
            PVAL_PANORAMA_PANEL_HANDLE = 0x1a,
            // MPropertyFriendlyName "Test Handle"
            PVAL_TEST_HANDLE = 0x1b,
            // MPropertyFriendlyName "Array"
            PVAL_ARRAY = 0x1c,
            // MPropertyFriendlyName "Typesafe Int64"
            PVAL_TYPESAFE_INT64 = 0x1d,
            // MPropertySuppressEnumerator
            PVAL_COUNT = 0x1e,
        };
    };
};
