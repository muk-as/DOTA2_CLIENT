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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            Vector m_stolenAbilityColorHSV1; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
            Vector m_stolenAbilityColorHSV2; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
            Vector m_stolenAbilityFXColorHSV; // 0x_            
            bool m_bHasInitializedAbilityColors; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Rubick because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Rubick) == 0x_);
    };
};
