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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lich_Chain_Frost_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t m_nDamageToHeroes; // 0x1708        
        int32_t m_nHeroesKilled; // 0x170c        
        int32_t m_nJumps; // 0x1710        
        bool m_bFirstJump; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1718        
        // m_hAvoidTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAvoidTarget;
        char m_hAvoidTarget[0x4]; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Chain_Frost_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lich_Chain_Frost_Thinker) == 0x1720);
};
