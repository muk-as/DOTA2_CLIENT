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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Shredder_TwistedChakram : public client::C_DOTABaseAbility
    {
    public:
        int32_t radius; // 0x5d8        
        int32_t speed; // 0x5dc        
        int32_t damage; // 0x5e0        
        float debuff_duration; // 0x5e4        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0x5f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Shredder_TwistedChakram because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Shredder_TwistedChakram) == 0x608);
};
