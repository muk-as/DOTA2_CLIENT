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
        // Size: 0x1f40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "Vector m_stolenAbilityColorHSV1"
        // static metadata: MNetworkVarNames "Vector m_stolenAbilityColorHSV2"
        // static metadata: MNetworkVarNames "Vector m_stolenAbilityFXColorHSV"
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_Rubick : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
            Vector m_stolenAbilityColorHSV1; // 0x1f18            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
            Vector m_stolenAbilityColorHSV2; // 0x1f24            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
            Vector m_stolenAbilityFXColorHSV; // 0x1f30            
            bool m_bHasInitializedAbilityColors; // 0x1f3c            
            uint8_t _pad1f3d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Rubick because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Rubick) == 0x1f40);
    };
};
