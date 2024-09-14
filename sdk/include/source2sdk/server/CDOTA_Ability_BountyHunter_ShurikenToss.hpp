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
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_BountyHunter_ShurikenToss : public server::CDOTABaseAbility
    {
    public:
        // m_hSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTABaseAbility> m_hSourceAbility;
        char m_hSourceAbility[0x4]; // 0x5a0        
        // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSourceCaster;
        char m_hSourceCaster[0x4]; // 0x5a4        
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5a8        
        bool passthrough_damage; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_BountyHunter_ShurikenToss because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_BountyHunter_ShurikenToss) == 0x5c8);
};
