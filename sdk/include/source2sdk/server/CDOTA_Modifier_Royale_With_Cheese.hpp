#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Royale_With_Cheese : public source2sdk::client::CDOTA_Buff
        {
        public:
            float shield; // 0x1878            
            float regen; // 0x187c            
            float idle; // 0x1880            
            std::int32_t m_nDamageAbsorbed; // 0x1884            
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x1888            
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x188c            
            source2sdk::client::ParticleIndex_t nFXIndex; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Royale_With_Cheese because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Royale_With_Cheese) == 0x1898);
    };
};
