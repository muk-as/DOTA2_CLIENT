#pragma once
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
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Gyrocopter_Homing_Missile : public server::CDOTABaseAbility
    {
    public:
        // m_hSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTABaseAbility> m_hSourceAbility;
        char m_hSourceAbility[0x4]; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Gyrocopter_Homing_Missile because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Gyrocopter_Homing_Missile) == 0x5a8);
};
