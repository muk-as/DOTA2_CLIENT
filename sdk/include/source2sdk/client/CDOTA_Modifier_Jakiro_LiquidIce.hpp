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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Jakiro_LiquidIce : public source2sdk::client::CDOTA_Buff
        {
        public:
            float duration; // 0x17f8            
            uint8_t _pad17fc[0x4]; // 0x17fc
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1800            
            std::int32_t radius; // 0x1818            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x181c            
            bool double_head; // 0x1820            
            bool m_bForceProc; // 0x1821            
            uint8_t _pad1822[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_LiquidIce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Jakiro_LiquidIce) == 0x1828);
    };
};
