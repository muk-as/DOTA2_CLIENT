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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ArcWarden_MagneticField_Thinker_Evasion : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x14]; // 0x1878
            float radius; // 0x188c            
            Vector m_vPos; // 0x1890            
            std::int32_t affects_buildings; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_Thinker_Evasion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_ArcWarden_MagneticField_Thinker_Evasion) == 0x18a0);
    };
};
