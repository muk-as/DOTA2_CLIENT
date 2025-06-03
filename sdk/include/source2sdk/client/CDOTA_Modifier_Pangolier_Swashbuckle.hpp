#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_Swashbuckle : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nStrikesLeft; // 0x1878            
            float attack_interval; // 0x187c            
            Vector m_vSpawnPos; // 0x1880            
            Vector m_vStrikeDir; // 0x188c            
            Vector m_vDashDir; // 0x1898            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Swashbuckle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pangolier_Swashbuckle) == 0x18a8);
    };
};
