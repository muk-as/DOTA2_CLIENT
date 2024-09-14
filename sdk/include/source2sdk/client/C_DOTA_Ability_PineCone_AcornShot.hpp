#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DotaTreeId_t m_nAcornTree"
    #pragma pack(push, 1)
    class C_DOTA_Ability_PineCone_AcornShot : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPineConeAcornTreePlanted"
        uint32_t m_nAcornTree; // 0x5d8        
        float projectile_speed; // 0x5dc        
        float bounce_delay; // 0x5e0        
        int32_t bounce_range; // 0x5e4        
        int32_t bounce_count; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_PineCone_AcornShot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_PineCone_AcornShot) == 0x5f0);
};
