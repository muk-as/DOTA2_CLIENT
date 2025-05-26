#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dazzle_Shallow_Grave : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bHasPostedEvent; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x187c            
            float fx_halo_height; // 0x1880            
            float m_flExpirationHeal; // 0x1884            
            std::int32_t heal_amplify; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_Shallow_Grave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dazzle_Shallow_Grave) == 0x1890);
    };
};
