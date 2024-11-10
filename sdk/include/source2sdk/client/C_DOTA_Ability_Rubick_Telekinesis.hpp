#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "Vector m_vStartLocation"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Rubick_Telekinesis : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vStartLocation; // 0x600        
        Vector m_vLandLocation; // 0x60c        
        entity2::GameTime_t m_flStartTime; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4]; // 0x61c
        client::C_DOTA_BaseNPC* m_pTarget; // 0x620        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Rubick_Telekinesis because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Rubick_Telekinesis) == 0x628);
};
