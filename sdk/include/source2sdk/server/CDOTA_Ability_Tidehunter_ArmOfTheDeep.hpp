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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Tidehunter_ArmOfTheDeep : public server::CDOTABaseAbility
    {
    public:
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x5a0        
        float duration; // 0x5b8        
        int32_t speed; // 0x5bc        
        float damage; // 0x5c0        
        float range; // 0x5c4        
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tidehunter_ArmOfTheDeep because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tidehunter_ArmOfTheDeep) == 0x5d0);
};
