#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_ShadowShaman_SerpentWard : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            QAngle m_angle; // 0x1898            
            std::int32_t m_iPoseParameterAim; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_ShadowShaman_SerpentWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_ShadowShaman_SerpentWard) == 0x18a8);
    };
};
