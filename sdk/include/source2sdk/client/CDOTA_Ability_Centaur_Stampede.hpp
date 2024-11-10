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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Centaur_Stampede : public client::C_DOTABaseAbility
    {
    public:
        float duration; // 0x600        
        int32_t base_damage; // 0x604        
        float strength_damage; // 0x608        
        float slow_duration; // 0x60c        
        float scepter_bonus_duration; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x618        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Centaur_Stampede because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Centaur_Stampede) == 0x630);
};
