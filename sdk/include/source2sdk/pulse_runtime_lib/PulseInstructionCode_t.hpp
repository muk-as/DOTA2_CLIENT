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
        // Enumerator count: 96
        // Alignment: 2
        // Size: 0x2
        enum class PulseInstructionCode_t : std::uint16_t
        {
            INVALID = 0x0,
            IMMEDIATE_HALT = 0x1,
            RETURN_VOID = 0x2,
            RETURN_VALUE = 0x3,
            NOP = 0x4,
            JUMP = 0x5,
            JUMP_COND = 0x6,
            CHUNK_LEAP = 0x7,
            CHUNK_LEAP_COND = 0x8,
            PULSE_CALL_SYNC = 0x9,
            PULSE_CALL_ASYNC_FIRE = 0xa,
            CELL_INVOKE = 0xb,
            LIBRARY_INVOKE = 0xc,
            SET_VAR = 0xd,
            GET_VAR = 0xe,
            GET_VAR_DETACH = 0xf,
            DETACH_REGISTER = 0x10,
            SET_VAR_ARRAY_ELEMENT_1D = 0x11,
            SET_VAR_OBSERVABLE = 0x12,
            GET_CONST = 0x13,
            GET_ARRAY_ELEMENT = 0x14,
            GET_DOMAIN_VALUE = 0x15,
            COPY = 0x16,
            NOT = 0x17,
            NEGATE = 0x18,
            ADD = 0x19,
            SUB = 0x1a,
            MUL = 0x1b,
            DIV = 0x1c,
            MOD = 0x1d,
            LT = 0x1e,
            LTE = 0x1f,
            EQ = 0x20,
            NE = 0x21,
            AND = 0x22,
            OR = 0x23,
            SCALE = 0x24,
            SCALE_INV = 0x25,
            ELEMENT_ACCESS = 0x26,
            CONVERT_VALUE = 0x27,
            REINTERPRET_INSTANCE = 0x28,
            GET_BLACKBOARD_REFERENCE = 0x29,
            SET_BLACKBOARD_REFERENCE = 0x2a,
            REQUIREMENT_RESULT = 0x2b,
            LAST_SERIALIZED_CODE = 0x2c,
            NEGATE_INT = 0x2d,
            NEGATE_FLOAT = 0x2e,
            NEGATE_VEC3 = 0x2f,
            ADD_INT = 0x30,
            ADD_FLOAT = 0x31,
            ADD_STRING = 0x32,
            ADD_VEC3 = 0x33,
            SUB_INT = 0x34,
            SUB_FLOAT = 0x35,
            SUB_VEC3 = 0x36,
            MUL_INT = 0x37,
            MUL_FLOAT = 0x38,
            DIV_INT = 0x39,
            DIV_FLOAT = 0x3a,
            MOD_INT = 0x3b,
            MOD_FLOAT = 0x3c,
            LT_INT = 0x3d,
            LT_FLOAT = 0x3e,
            LTE_INT = 0x3f,
            LTE_FLOAT = 0x40,
            EQ_BOOL = 0x41,
            EQ_INT = 0x42,
            EQ_FLOAT = 0x43,
            EQ_VEC3 = 0x44,
            EQ_STRING = 0x45,
            EQ_ENTITY_NAME = 0x46,
            EQ_SCHEMA_ENUM = 0x47,
            EQ_EHANDLE = 0x48,
            EQ_PANEL_HANDLE = 0x49,
            EQ_OPAQUE_HANDLE = 0x4a,
            EQ_TEST_HANDLE = 0x4b,
            EQ_COLOR_RGB = 0x4c,
            EQ_ARRAY = 0x4d,
            NE_BOOL = 0x4e,
            NE_INT = 0x4f,
            NE_FLOAT = 0x50,
            NE_VEC3 = 0x51,
            NE_STRING = 0x52,
            NE_ENTITY_NAME = 0x53,
            NE_SCHEMA_ENUM = 0x54,
            NE_EHANDLE = 0x55,
            NE_PANEL_HANDLE = 0x56,
            NE_OPAQUE_HANDLE = 0x57,
            NE_TEST_HANDLE = 0x58,
            NE_COLOR_RGB = 0x59,
            NE_ARRAY = 0x5a,
            SCALE_VEC3 = 0x5b,
            SCALE_INV_VEC3 = 0x5c,
            ELEMENT_ACCESS_VEC3 = 0x5d,
            ELEMENT_ACCESS_COLOR_RGB = 0x5e,
            GET_CONST_INLINE_STORAGE = 0x5f,
        };
    };
};
