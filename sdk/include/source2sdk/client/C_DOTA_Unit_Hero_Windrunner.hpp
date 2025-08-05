#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1dc0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nTargetAngle"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Windrunner : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_nTargetAngle; // 0x1db0            
            std::int32_t m_iPoseParameterAim; // 0x1db4            
            source2sdk::client::ParticleIndex_t m_nFXDeath; // 0x1db8            
            uint8_t _pad1dbc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Windrunner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Windrunner) == 0x1dc0);
    };
};
