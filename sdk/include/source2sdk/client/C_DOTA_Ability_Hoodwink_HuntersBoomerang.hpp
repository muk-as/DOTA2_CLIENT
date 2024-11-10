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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Hoodwink_HuntersBoomerang : public client::C_DOTABaseAbility
    {
    public:
        int32_t radius; // 0x600        
        int32_t speed; // 0x604        
        int32_t damage; // 0x608        
        float mark_duration; // 0x60c        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x630[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Hoodwink_HuntersBoomerang because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Hoodwink_HuntersBoomerang) == 0x638);
};
