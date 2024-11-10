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
    class C_DOTABaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x710
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "char m_ActivityModifier"
    // static metadata: MNetworkVarNames "float m_fStolenCastPoint"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Rubick_SpellSteal : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        char m_ActivityModifier[256]; // 0x600        
        // metadata: MNetworkEnable
        float m_fStolenCastPoint; // 0x700        
        // m_hStealTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hStealTarget;
        char m_hStealTarget[0x4]; // 0x704        
        // m_hStealAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hStealAbility;
        char m_hStealAbility[0x4]; // 0x708        
        [[maybe_unused]] std::uint8_t pad_0x70c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Rubick_SpellSteal because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Rubick_SpellSteal) == 0x710);
};
