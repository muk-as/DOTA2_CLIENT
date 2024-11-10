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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "DotaTreeId_t m_nAcornTree"
    #pragma pack(push, 1)
    class C_DOTA_Ability_PineCone_AcornShot : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPineConeAcornTreePlanted"
        uint32_t m_nAcornTree; // 0x600        
        float projectile_speed; // 0x604        
        float bounce_delay; // 0x608        
        int32_t bounce_range; // 0x60c        
        int32_t bounce_count; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_PineCone_AcornShot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_PineCone_AcornShot) == 0x618);
};
