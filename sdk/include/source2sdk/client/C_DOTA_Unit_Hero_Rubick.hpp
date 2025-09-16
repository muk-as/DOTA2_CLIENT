#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1e50
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "Vector m_stolenAbilityColorHSV1"
        // static metadata: MNetworkVarNames "Vector m_stolenAbilityColorHSV2"
        // static metadata: MNetworkVarNames "Vector m_stolenAbilityFXColorHSV"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Rubick : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
            Vector m_stolenAbilityColorHSV1; // 0x1dd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
            Vector m_stolenAbilityColorHSV2; // 0x1de4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
            Vector m_stolenAbilityFXColorHSV; // 0x1df0            
            bool m_bHasInitializedAbilityColors; // 0x1dfc            
            uint8_t _pad1dfd[0x3]; // 0x1dfd
            Vector m_startAbilityColorHSV1; // 0x1e00            
            Vector m_startAbilityColorHSV2; // 0x1e0c            
            Vector m_startAbilityFXColorHSV; // 0x1e18            
            Vector m_currAbilityColorHSV1; // 0x1e24            
            Vector m_currAbilityColorHSV2; // 0x1e30            
            Vector m_currAbilityFXColorHSV; // 0x1e3c            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1e48            
            uint8_t _pad1e4c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Rubick because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Rubick) == 0x1e50);
    };
};
