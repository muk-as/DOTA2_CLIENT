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
    class C_BaseEntity;
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
    #pragma pack(push, 1)
    class C_DOTA_Ability_Undying_Tombstone : public client::C_DOTABaseAbility
    {
    public:
        // m_vZombies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vZombies;
        char m_vZombies[0x18]; // 0x600        
        // hTombstone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hTombstone;
        char hTombstone[0x4]; // 0x618        
        float radius; // 0x61c        
        float duration; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Undying_Tombstone because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Undying_Tombstone) == 0x628);
};
