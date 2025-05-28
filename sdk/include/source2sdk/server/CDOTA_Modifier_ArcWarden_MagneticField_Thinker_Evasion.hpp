#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_ArcWarden_MagneticField_Thinker_Evasion : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x14]; // 0x1888
            float radius; // 0x189c            
            Vector m_vPos; // 0x18a0            
            std::int32_t affects_buildings; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_Thinker_Evasion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ArcWarden_MagneticField_Thinker_Evasion) == 0x18b0);
    };
};
