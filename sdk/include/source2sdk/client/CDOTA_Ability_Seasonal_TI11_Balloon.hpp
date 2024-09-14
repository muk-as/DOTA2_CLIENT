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
    class C_BaseEntity;
};

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
    #pragma pack(push, 1)
    class CDOTA_Ability_Seasonal_TI11_Balloon : public client::C_DOTABaseAbility
    {
    public:
        float charge_use_interval; // 0x5d8        
        float max_usable_charges; // 0x5dc        
        entity2::GameTime_t m_flLastChargeUseTime; // 0x5e0        
        // m_hBalloon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBalloon;
        char m_hBalloon[0x4]; // 0x5e4        
        [[maybe_unused]] std::uint8_t pad_0x5e8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Seasonal_TI11_Balloon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Seasonal_TI11_Balloon) == 0x5f0);
};
