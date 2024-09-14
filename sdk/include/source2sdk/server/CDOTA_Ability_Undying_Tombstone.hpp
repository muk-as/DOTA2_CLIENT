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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Undying_Tombstone : public server::CDOTABaseAbility
    {
    public:
        // m_vZombies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vZombies;
        char m_vZombies[0x18]; // 0x5a0        
        // hTombstone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hTombstone;
        char hTombstone[0x4]; // 0x5b8        
        float radius; // 0x5bc        
        float duration; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Undying_Tombstone because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Undying_Tombstone) == 0x5c8);
};
