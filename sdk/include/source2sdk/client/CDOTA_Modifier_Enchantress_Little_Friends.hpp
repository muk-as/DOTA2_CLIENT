#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enchantress_Little_Friends : public client::CDOTA_Buff
    {
    public:
        // m_hZombieTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hZombieTarget;
        char m_hZombieTarget[0x4]; // 0x16e8        
        // m_hDesiredTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hDesiredTarget;
        char m_hDesiredTarget[0x4]; // 0x16ec        
        int32_t damage_reduction; // 0x16f0        
        int32_t bonus_attack_speed; // 0x16f4        
        int32_t bonus_move_speed; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_Little_Friends because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enchantress_Little_Friends) == 0x1700);
};
