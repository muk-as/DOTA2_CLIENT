#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enchantress_NaturesAttendants : public source2sdk::client::CDOTA_Buff
        {
        public:
            float heal_interval; // 0x17f8            
            float heal; // 0x17fc            
            float radius; // 0x1800            
            float movespeed; // 0x1804            
            std::int32_t wisp_count; // 0x1808            
            source2sdk::client::ParticleIndex_t m_nWispFXIndex; // 0x180c            
            bool m_bAutoWisps; // 0x1810            
            uint8_t _pad1811[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_NaturesAttendants because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Enchantress_NaturesAttendants) == 0x1818);
    };
};
