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
    class CDOTA_Ability_Snapfire_SpitCreep : public server::CDOTABaseAbility
    {
    public:
        int32_t m_nDamagePerProjectile; // 0x5a0        
        // m_hGobbledUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGobbledUnit;
        char m_hGobbledUnit[0x4]; // 0x5a4        
        int32_t m_nProjectileID; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Snapfire_SpitCreep because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Snapfire_SpitCreep) == 0x5b8);
};
