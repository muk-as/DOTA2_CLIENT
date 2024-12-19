#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1ef0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "Vector m_stolenAbilityColorHSV1"
    // static metadata: MNetworkVarNames "Vector m_stolenAbilityColorHSV2"
    // static metadata: MNetworkVarNames "Vector m_stolenAbilityFXColorHSV"
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Rubick : public server::CDOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
        Vector m_stolenAbilityColorHSV1; // 0x1ec8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
        Vector m_stolenAbilityColorHSV2; // 0x1ed4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
        Vector m_stolenAbilityFXColorHSV; // 0x1ee0        
        bool m_bHasInitializedAbilityColors; // 0x1eec        
        [[maybe_unused]] std::uint8_t pad_0x1eed[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Rubick because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Rubick) == 0x1ef0);
};
