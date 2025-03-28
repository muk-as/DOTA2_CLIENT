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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Grimstroke_InkCreature_Latched : public client::CDOTA_Buff
    {
    public:
        // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttachTarget;
        char m_hAttachTarget[0x4]; // 0x1708        
        float m_fZOffset; // 0x170c        
        bool m_bRemovedByEnemy; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        float latch_duration; // 0x1714        
        int32_t pop_damage; // 0x1718        
        int32_t latched_unit_offset; // 0x171c        
        int32_t latched_unit_offset_short; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature_Latched because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_InkCreature_Latched) == 0x1728);
};
