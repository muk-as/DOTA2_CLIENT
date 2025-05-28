#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BouncePerch : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTree;
            char m_hTree[0x4]; // 0x1888            
            bool m_bGroundToTree; // 0x188c            
            bool m_bTreeToGround; // 0x188d            
            bool m_bTreeToTree; // 0x188e            
            uint8_t _pad188f[0x1]; // 0x188f
            float perched_day_vision; // 0x1890            
            float perched_night_vision; // 0x1894            
            bool m_bAbilityIsStolen; // 0x1898            
            uint8_t _pad1899[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BouncePerch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MonkeyKing_BouncePerch) == 0x18a0);
    };
};
