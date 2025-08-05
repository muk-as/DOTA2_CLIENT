#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"

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
        // static metadata: MNetworkVarNames "int m_nTargetRange"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Razor : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            std::int32_t m_iPoseParameterAim; // 0x1db0            
            std::int32_t m_iPoseParameterRange; // 0x1db4            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_nTargetAngle; // 0x1db8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_nTargetRange; // 0x1dbc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Razor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Razor) == 0x1dc0);
    };
};
