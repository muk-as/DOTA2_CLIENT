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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Aghanim_Spear : public server::CDOTABaseAbility
    {
    public:
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x5c8        
        // m_vecProjectileHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_vecProjectileHandles;
        char m_vecProjectileHandles[0x18]; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5f8[0x8]; // 0x5f8
        Vector m_vTarget; // 0x600        
        Vector m_vSourcePosition; // 0x60c        
        int32_t damage; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Aghanim_Spear because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Aghanim_Spear) == 0x620);
};
