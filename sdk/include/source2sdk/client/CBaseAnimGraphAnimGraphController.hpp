#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x268
        // Has VTable
        #pragma pack(push, 1)
        class CBaseAnimGraphAnimGraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_sDestructiblePartDestroyedHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sDestructiblePartDestroyedHitGroup;
            char m_sDestructiblePartDestroyedHitGroup[0x28]; // 0x80            
            // m_nDestructiblePartDestroyedPartIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<std::int32_t> m_nDestructiblePartDestroyedPartIndex;
            char m_nDestructiblePartDestroyedPartIndex[0x20]; // 0xa8            
            // m_bHITGROUP_INVALID_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_INVALID_Destroyed;
            char m_bHITGROUP_INVALID_Destroyed[0x20]; // 0xc8            
            // m_bHITGROUP_GENERIC_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_GENERIC_Destroyed;
            char m_bHITGROUP_GENERIC_Destroyed[0x20]; // 0xe8            
            // m_bHITGROUP_HEAD_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_HEAD_Destroyed;
            char m_bHITGROUP_HEAD_Destroyed[0x20]; // 0x108            
            // m_bHITGROUP_CHEST_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_CHEST_Destroyed;
            char m_bHITGROUP_CHEST_Destroyed[0x20]; // 0x128            
            // m_bHITGROUP_STOMACH_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_STOMACH_Destroyed;
            char m_bHITGROUP_STOMACH_Destroyed[0x20]; // 0x148            
            // m_bHITGROUP_LEFTARM_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_LEFTARM_Destroyed;
            char m_bHITGROUP_LEFTARM_Destroyed[0x20]; // 0x168            
            // m_bHITGROUP_RIGHTARM_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_RIGHTARM_Destroyed;
            char m_bHITGROUP_RIGHTARM_Destroyed[0x20]; // 0x188            
            // m_bHITGROUP_LEFTLEG_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_LEFTLEG_Destroyed;
            char m_bHITGROUP_LEFTLEG_Destroyed[0x20]; // 0x1a8            
            // m_bHITGROUP_RIGHTLEG_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_RIGHTLEG_Destroyed;
            char m_bHITGROUP_RIGHTLEG_Destroyed[0x20]; // 0x1c8            
            // m_bHITGROUP_NECK_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_NECK_Destroyed;
            char m_bHITGROUP_NECK_Destroyed[0x20]; // 0x1e8            
            // m_bHITGROUP_UNUSED_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_UNUSED_Destroyed;
            char m_bHITGROUP_UNUSED_Destroyed[0x20]; // 0x208            
            // m_bHITGROUP_GEAR_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_GEAR_Destroyed;
            char m_bHITGROUP_GEAR_Destroyed[0x20]; // 0x228            
            // m_bHITGROUP_SPECIAL_Destroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHITGROUP_SPECIAL_Destroyed;
            char m_bHITGROUP_SPECIAL_Destroyed[0x20]; // 0x248            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraphAnimGraphController) == 0x268);
    };
};
