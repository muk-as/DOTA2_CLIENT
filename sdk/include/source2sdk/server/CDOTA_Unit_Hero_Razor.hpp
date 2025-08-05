#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1ef8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nTargetAngle"
        // static metadata: MNetworkVarNames "int m_nTargetRange"
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_Razor : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_nTargetAngle; // 0x1ef0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_nTargetRange; // 0x1ef4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Razor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Razor) == 0x1ef8);
    };
};
