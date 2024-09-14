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
    // Size: 0x6e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_ActivityModifier"
    // static metadata: MNetworkVarNames "float m_fStolenCastPoint"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Rubick_SpellSteal : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        char m_ActivityModifier[256]; // 0x5d8        
        // metadata: MNetworkEnable
        float m_fStolenCastPoint; // 0x6d8        
        // m_hStealTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hStealTarget;
        char m_hStealTarget[0x4]; // 0x6dc        
        // m_hStealAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hStealAbility;
        char m_hStealAbility[0x4]; // 0x6e0        
        [[maybe_unused]] std::uint8_t pad_0x6e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Rubick_SpellSteal because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Rubick_SpellSteal) == 0x6e8);
};
