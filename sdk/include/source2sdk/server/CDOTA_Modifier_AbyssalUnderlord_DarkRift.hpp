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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_DarkRift : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nfxTargetTp; // 0x1878            
            float radius; // 0x187c            
            std::int32_t duration; // 0x1880            
            source2sdk::client::ParticleIndex_t m_nfxAmbientFx; // 0x1884            
            bool bPointTarget; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            Vector vDestination; // 0x188c            
            uint8_t _pad1898[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_DarkRift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AbyssalUnderlord_DarkRift) == 0x18b0);
    };
};
