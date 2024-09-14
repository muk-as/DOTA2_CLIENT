#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Seasonal_TI11_Balloon : public server::CDOTABaseAbility
    {
    public:
        float charge_use_interval; // 0x5a0        
        float max_usable_charges; // 0x5a4        
        entity2::GameTime_t m_flLastChargeUseTime; // 0x5a8        
        // m_hBalloon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBalloon;
        char m_hBalloon[0x4]; // 0x5ac        
        [[maybe_unused]] std::uint8_t pad_0x5b0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Seasonal_TI11_Balloon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Seasonal_TI11_Balloon) == 0x5b8);
};
