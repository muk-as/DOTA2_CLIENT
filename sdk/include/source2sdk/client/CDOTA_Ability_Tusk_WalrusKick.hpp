#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Tusk_WalrusKick : public client::C_DOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nTargetFXIndex; // 0x600        
        Vector m_vEndpoint; // 0x604        
        float landing_radius; // 0x610        
        float push_length; // 0x614        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tusk_WalrusKick because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tusk_WalrusKick) == 0x618);
};
